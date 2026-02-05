#include <iostream>

using namespace std;

class Engine {

};

class Passenger {
    private:
        int weight; 
        string name;
        string seatAssignment;
};

class Seat {
    int row;
    char position;
    Passenger person;
    Passenger childOnLap;
};

// enum PlaneType;

class Airplane {
    private: 
        string lifecyle;
        int speed;
        int altitude;
        Engine engines[4];
        bool landingGearDeployed;
        int passengerCount;
        char fuelLevel;
        Seat seats[25][6];
        // PlaneType type;

    public:
        // Airplane()
        // {
        //     switch (type)
        //     {
            
        //     }
        // }

        // Name: board
        // Parameters: passenger, the passenger baording the plane
        // This function adds a passenger to the plane and places them in their seat. 
        void board(Passenger p)
        {
            // 22 C
            int row;
            char pos;
            char start = 'A';

            seats[row][pos-start].person = p; // Remember that chars are just numbers, so if I take the position and subtract 65 I get the index

        }
    
};

// Airplane& operator+=(Airplane& plane, const Passenger& passenger) {
//     // Implementation to add a passenger to the airplane
//     return plane;
// }


// osteam& operator<<(ostream& os, const Airplane& plane) {
//     // Implementation to output airplane details
//     // Airplane:\n\tstate: flying\n\tspeed: 500, altitude: 30000, passengers: 150
//     return os;
// }

int main() {
    
    cout << "Hello, World!" << endl;
    
    Airplane myPlane;

    // Passenger p1;
    // Passenger p2;
    // Passenger p3;
    // Passenger p4;
    // Passenger p5;

    // myPlane.board(p1);
    
    
    // myPlane += p1 + p2 + p3 + p4 + p5;

    // myPlane -= p1;


    // cout << myPlane << endl;


    return 0;
}   