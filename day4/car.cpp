#include <iostream>

class Engine 
{
    private:
      int horsepower;
      int rpm;
      int cylinders;
    public:
        void Start();
        void Stop();
        int getFuelUsage(int distanceInMiles);
};

class Car {
    private:
    // What is a car?
    // Body
    // Drive train
    // Wheels
    // Engine
    Engine engine;
    // Fuel tank
    float fuelLevel; // 0 to 1
    // Transmission
    // Lights
    // Steering system
    // Brakes

    public:
        // Car()
        // {
        //     std::cout << "Car created" << std::endl;
        // }

        // Car(const Car &other)
        // {
        //     std::cout << "Car copied" << std::endl;
        // }

        // Car (int fuelLevel) 
        // {
        //     std::cout << "Car created with fuel" << std::endl;
        // }

        // ~Car()
        // {
        //     std::cout << "Car destroyed" << std::endl;
        // }
    // What does a car do?
    // Drive
    // Stop
    // Turn
    // Honk
    // Refuel
    // Shift gears
    // Crash
    // Breakdown
    // Turn lights on/off


};



int main() {
    std::cout << "Starting the car" << std::endl;

    Car myCar;
    Car anotherCar = myCar;
    // Car thirdCar(27);

    std::cout << "Terminating program" << std::endl;
    return 0;
}