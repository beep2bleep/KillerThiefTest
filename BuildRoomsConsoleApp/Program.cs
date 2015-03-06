using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuildRoomsConsoleApp
{
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

    //5 room types

    public class Room
    {
        public Room(int _location, string _type)
        {
            location = _location;
            type = _type;
        }
        int location;
        string type;
    }

    class Program
    {
        
        static void Main(string[] args)
        {
            Console.ReadLine();
            Console.WriteLine("Building 1 building");
            Random random = new Random();
            int height = random.Next(8, 13);
            int width = random.Next(4, 9);

            House houseToBuild = new House(height, width);
            //bool startFromBottom = random.Next(0, 2) == 0 ? true : false;
            //Setup now lets build it

            //House is container of floors

            //Lets just always worth from bottom left

            for (int i = 0; i < height; i++ )
            {
                int stairIndex = random.Next(0, width);
                houseToBuild.floors[i].squareTaken[stairIndex] = true;
                houseToBuild.floors[i].rooms.Add(new Room(stairIndex, "Stair"));
                //Totally works to build the house with stairs, now I need to work to add the regular rooms while building
                //stairs
            }
            //else//Start from top
            //{

            //}
            

            Console.ReadLine();
        }



        //for (int i = 0; i < 100; i++)
        //{
        //    int height = random.Next(8, 13);
        //    Console.WriteLine(height);
        //}
    }
}
