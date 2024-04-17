#ifndef CAR_H
#define CAR_H
#pragma once

#include <string>
#include <iostream>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructors
    Car();
    Car(std::string make, std::string model, int year);

    // Destructor
    ~Car();

    // Getter methods
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;

    // Setter methods
    void setMake(std::string make);
    void setModel(std::string model);
    void setYear(int year);

    // Other methods
    void displayInfo() const;
};

#endif // CAR_H