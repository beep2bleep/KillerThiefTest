using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class CreateHouses : MonoBehaviour {

    public class HouseFloor
    {
        public HouseFloor(int requestedWidth)
        {
            width = requestedWidth;
            squareTaken = new List<bool>();
            for (int i = 0; i < requestedWidth; i++)
            {
                squareTaken.Add(false);
            }
            rooms = new List<Room>();
        }
        public int width;
        public List<bool> squareTaken;
        public List<Room> rooms;
    }

    public class House
    {
        public House(int _height, int _width)
        {
            height = _height;
            width = _width;
            floors = new List<HouseFloor>();
            for (int i = 0; i < _height; i++)
            {
                floors.Add(new HouseFloor(_width));
            }
        }
        public List<HouseFloor> floors;
        public int height;
        public int width;
    }

    public class Room
    {
        public Room(int _location, string _type)
        {
            location = _location;
            type = _type;
        }
        public int location;
        public string type;
    }

    public int buildingCount = 7;
    public int minHeight = 8;
    public int maxHeight = 13;
    public int minWidth = 4;
    public int maxWidth = 9;
    List<House> housesToBuild = new List<House>();
    public GameObject stairs;
    public GameObject _1x1;
    public GameObject _2x1;
    public GameObject _2x2;
    public GameObject _3x2;

	// Use this for initialization
	void Start () {

        int leftSideOfCurrentBuilding = 0;
        System.Random random = new System.Random();

        for (int i = 0; i < buildingCount; i++)
        {
            
            //Console.WriteLine("Building a building");
            int height = random.Next(minHeight, maxHeight);
            int width = random.Next(minWidth, maxWidth);
            House houseToBuild = new House(height, width);

            //House is container of floors
            //Lets just always start from bottom left

            for (int floor = 0; floor < height; floor++)
            {
                HouseFloor currentFloor = houseToBuild.floors[floor];
                bool topFloor = floor == height - 1;
                HouseFloor nextFloor = new HouseFloor(0);
                if (!topFloor)
                {
                    nextFloor = houseToBuild.floors[floor + 1];
                }

                int stairIndex = random.Next(0, width);
                while(currentFloor.squareTaken[stairIndex])
                {
                    stairIndex = random.Next(0, width);//Make sure stairs are not in a taken spot
                }
                currentFloor.squareTaken[stairIndex] = true;
                currentFloor.rooms.Add(new Room(stairIndex, "Stair"));
                //Start at left work accross randomly try to add rooms
                //If 3 width open, then 4 options, if 2 then 3 options, it 1 then 1
                for (int horizontalIndex = 0; horizontalIndex < width; )//Increment will happen as part of the loop
                {
                    if (horizontalIndex == stairIndex || currentFloor.squareTaken[horizontalIndex])
                    {
                        horizontalIndex++;//Move to next horizontalIndex
                        continue;
                    }
                    if (CanFit3WideRoom(width, currentFloor, stairIndex, horizontalIndex))//We can fit a three width room
                    {
                        if (!topFloor)//Rand between 4 roomtypes
                        {
                            horizontalIndex = AddUpTo3x2Room(random, currentFloor, nextFloor, horizontalIndex);
                        }
                        else//Rand between 2 roomtypes
                        {
                            horizontalIndex = Add2x1Or2x2Room(random, currentFloor, horizontalIndex);
                        }
                    }
                    else if (CanFit2WideRoom(width, currentFloor, stairIndex, horizontalIndex))
                    //We can fit a two width room
                    {
                        if (!topFloor)//Rand between 3 roomtypes
                        {
                            horizontalIndex = AddUpTo2x2Room(random, currentFloor, nextFloor, horizontalIndex);
                        }
                        else//Rand between 2 roomtypes
                        {
                            horizontalIndex = Add2x1Or2x2Room(random, currentFloor, horizontalIndex);
                        }

                    }
                    else//We can only fit a 1x1 room
                    {
                        //Place 1x1 room
                        horizontalIndex = Add1x1Room(currentFloor, horizontalIndex);
                    }
                }
            }
            housesToBuild.Add(houseToBuild);

            //Lets draw one

            for (int floor = 0; floor < height; floor++)
            {
                HouseFloor currentFloor = houseToBuild.floors[floor];
                foreach(Room room in currentFloor.rooms)
                {
                    
                    //GameObject.CreatePrimitive(PrimitiveType.Cube);//;(new Cube(), this.transform.position(), this.transform.rotation);
                    if(room.type == "Stair")
                    {
                        Instantiate(stairs, new Vector3(1 * room.location + leftSideOfCurrentBuilding, 1 * floor, 0), this.transform.rotation);
                    }
                    if (room.type == "1x1")
                    {
                        Instantiate(_1x1, new Vector3(1 * room.location + leftSideOfCurrentBuilding, 1 * floor, 0), this.transform.rotation);
                    }
                    if (room.type == "2x1")
                    {
                        Instantiate(_2x1, new Vector3(1 * room.location + leftSideOfCurrentBuilding, 1 * floor, 0), this.transform.rotation); 
                    }
                    if (room.type == "2x2")
                    {
                        Instantiate(_2x2, new Vector3(1 * room.location + leftSideOfCurrentBuilding, 1 * floor, 0), this.transform.rotation);
                    }
                    if (room.type == "3x2")
                    {
                        Instantiate(_3x2, new Vector3(1 * room.location + leftSideOfCurrentBuilding, 1 * floor, 0), this.transform.rotation);
                    }
                }
            }
            leftSideOfCurrentBuilding = leftSideOfCurrentBuilding + houseToBuild.width + random.Next(1, 3);
        }

        
	}
	
	// Update is called once per frame
	void Update () {
	    
	}

    private static bool CanFit2WideRoom(int width, HouseFloor currentFloor, int stairIndex, int horizontalIndex)
    {
        return horizontalIndex + 1 < stairIndex && horizontalIndex + 1 < width && !currentFloor.squareTaken[horizontalIndex + 1];
    }

    private static bool CanFit3WideRoom(int width, HouseFloor currentFloor, int stairIndex, int horizontalIndex)
    {
        return horizontalIndex + 2 < stairIndex && horizontalIndex + 2 < width && !currentFloor.squareTaken[horizontalIndex + 1] && !currentFloor.squareTaken[horizontalIndex + 2];
    }

    private static int AddUpTo2x2Room(System.Random random, HouseFloor currentFloor, HouseFloor nextFloor, int horizontalIndex)
    //Returns new horizontal index after adding the room
    {
        int roomType = random.Next(0, 3);
        switch (roomType)
        {
            case 0:
                Add1x1Room(currentFloor, horizontalIndex);
                return horizontalIndex++;
            case 1:
                add2x1Room(currentFloor, horizontalIndex);
                return horizontalIndex + 2;
            case 2:
                add2x2Room(currentFloor, nextFloor, horizontalIndex);
                return horizontalIndex + 2;
            default:
                return horizontalIndex + 1;
                break;
                //throw new Exception("Failure attempting to add room");
        }
    }

    private static int Add2x1Or2x2Room(System.Random random, HouseFloor currentFloor, int horizontalIndex)
    //Returns new horizontal index after adding the room
    {
        int roomType = random.Next(0, 2);
        switch (roomType)
        {
            case 0:
                Add1x1Room(currentFloor, horizontalIndex);
                return ++horizontalIndex;
            case 1:
                add2x1Room(currentFloor, horizontalIndex);
                return horizontalIndex + 2;
            default:
                return horizontalIndex + 1;
                break;
            //throw new Exception("Failure attempting to add room");
        }
    }

    private static int AddUpTo3x2Room(System.Random random, HouseFloor currentFloor, HouseFloor nextFloor, int horizontalIndex)
    //Returns new horizontal index after adding the room
    {
        int roomType = random.Next(0, 4);
        switch (roomType)
        {
            case 0:
                Add1x1Room(currentFloor, horizontalIndex);
                return ++horizontalIndex;
            case 1:
                add2x1Room(currentFloor, horizontalIndex);
                return horizontalIndex + 2;
            case 2:
                add2x2Room(currentFloor, nextFloor, horizontalIndex);
                return horizontalIndex + 2;
            case 3:
                add3x2Room(currentFloor, nextFloor, horizontalIndex);
                return horizontalIndex + 3;
            default:
                return horizontalIndex + 1;
                break;
            //throw new Exception("Failure attempting to add room");
        }
    }

    private static int Add1x1Room(HouseFloor currentFloor, int horizontalIndex)//Returns new horizontal index after adding the room
    {
        currentFloor.squareTaken[horizontalIndex] = true;
        currentFloor.rooms.Add(new Room(horizontalIndex, "1x1"));
        return ++horizontalIndex;
    }

    private static void add2x1Room(HouseFloor currentFloor, int horizontalIndex)
    {
        currentFloor.squareTaken[horizontalIndex] = true;
        currentFloor.squareTaken[horizontalIndex + 1] = true;
        currentFloor.rooms.Add(new Room(horizontalIndex, "2x1"));
    }

    private static void add2x2Room(HouseFloor currentFloor, HouseFloor nextFloor, int horizontalIndex)
    {
        currentFloor.squareTaken[horizontalIndex] = true;
        currentFloor.squareTaken[horizontalIndex + 1] = true;
        nextFloor.squareTaken[horizontalIndex] = true;
        nextFloor.squareTaken[horizontalIndex + 1] = true;
        currentFloor.rooms.Add(new Room(horizontalIndex, "2x2"));
    }

    private static void add3x2Room(HouseFloor currentFloor, HouseFloor nextFloor, int horizontalIndex)
    {
        currentFloor.squareTaken[horizontalIndex] = true;
        currentFloor.squareTaken[horizontalIndex + 1] = true;
        currentFloor.squareTaken[horizontalIndex + 2] = true;
        nextFloor.squareTaken[horizontalIndex] = true;
        nextFloor.squareTaken[horizontalIndex + 1] = true;
        nextFloor.squareTaken[horizontalIndex + 2] = true;
        currentFloor.rooms.Add(new Room(horizontalIndex, "3x2"));
    }
}
