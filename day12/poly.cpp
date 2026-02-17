#include <iostream>

using namespace std;

// What is polymorphism?
// The ability of an object to respond differently to the same function call

const int GROUND_LEVEL = 1000000000;

class Vehicle
{
    protected:
        int x;
        int y;
        int speed;
        int storageCapicity;
        string name;
        
    public:
        Vehicle(string name) 
            : x(0), y(0), speed(0), storageCapicity(10), name(name)
        {
            // empty
        }

        virtual void move() = 0;
        // {
        //     cout << "vehicle move" << endl;   
        // }// = 0; // pure virtual or abstract

        string getName()
        {
            return name;
        }
    };
    
class FlyingVehicle : public Vehicle
{
    protected:
        int z;
        FlyingVehicle(string name) : Vehicle(name)
        {

        }
};

class SwimmingVehicle : public Vehicle
{
    protected:
        int z; // Can't be greater than 0
    
    public:
        SwimmingVehicle(string name) : Vehicle(name)
        {

        }

        void move()
        {
            cout << "swimming vehicle move" << endl;
        }
       
};

class Car  : public Vehicle
{
    private:
        
    public:
        Car() : Vehicle("Car")
        {
            
        }

        void move() 
        {
            cout << "car move" << endl;
        }

        string getName()
        {
            return "not the actual name";
        }
    };
    
class Motorcycle : public Vehicle
{
    public:
        Motorcycle() : Vehicle("Motorcycle")
        {
            
        }

};

class Bus : public Vehicle
{
    public:
        Bus() : Vehicle("Bus")
        {
            
        }
};

class Airplane : public FlyingVehicle
{
    public:
        Airplane() : FlyingVehicle("Airplane")
        {
            
        }

        void move()
        {
            cout << "airplane move" << endl;
        }
};

class Submarine : public SwimmingVehicle
{
    public:
        Submarine() : SwimmingVehicle("Submarine")
        {

        }
        void move()
        {
            cout << "submarine move" << endl;
        }

};

class Spaceship : public FlyingVehicle
{
    public:
        Spaceship() : FlyingVehicle("Spaceship")
        {

        }

        void move()
        {
            cout << "spaceship move" << endl;
        }
};

float operator+(string a, const int& b)
{
    return 3.14f;
}

int main()
{
    Spaceship s;
    Submarine sub;

    sub.move();

    SwimmingVehicle* p = &sub;

    p->move();

    Vehicle* v = &sub;

    v->move(); 


    Vehicle* garage[10];
    
    for (int i = 0; i < 10; ++i)
    {
        garage[i] = NULL;
    }

    garage[0] = new Car();
    garage[1] = new Airplane();
    garage[2] = new Spaceship();


    cout << "Welcome to my garage" << endl;
    for (int i = 0; i < 10; ++i)
    {
        if (garage[i] != NULL)
        {
            cout << "Garage[" << i << "] is a " << garage[i]->getName() << endl;
            garage[i]->move();
        }
    }

    string a = "weird";

    float f = a + 4;

    cout << "f " << f << endl;

    return 0;
}