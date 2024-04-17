#include "Example.hpp"
#include "car.hpp"

#include <iostream>

int MAC(int x, int y, int* sum){
    *sum += x * y;
    return *sum;
}

int Square(int x){
    return x*x;
}

int BadSquareImplementation(int x){
    return x*2;
}

int RunCars(){
    // Create instances of the Car class
    Car myCar1;
    Car myCar2("Toyota", "Corolla", 2020);

    // Set attributes using setter methods
    myCar1.setMake("Honda");
    myCar1.setModel("Civic");
    myCar1.setYear(2018);

    // Display car information using getter methods and displayInfo() function
    std::cout << "Car 1 Information:" << std::endl;
    std::cout << "Make: " << myCar1.getMake() << ", Model: " << myCar1.getModel() << ", Year: " << myCar1.getYear() << std::endl;
    myCar1.displayInfo();

    std::cout << "\nCar 2 Information:" << std::endl;
    std::cout << "Make: " << myCar2.getMake() << ", Model: " << myCar2.getModel() << ", Year: " << myCar2.getYear() << std::endl;
    myCar2.displayInfo();

    return 0;
}