#include "car.hpp"

// Constructors
Car::Car() {
    make = "";
    model = "";
    year = 0;
}

Car::Car(std::string make, std::string model, int year) {
    this->make = make;
    this->model = model;
    this->year = year;
}

// Destructor
Car::~Car() {
    // Destructor code here
}

// Getter methods
std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

// Setter methods
void Car::setMake(std::string make) {
    this->make = make;
}

void Car::setModel(std::string model) {
    this->model = model;
}

void Car::setYear(int year) {
    this->year = year;
}

// Other methods
void Car::displayInfo() const {
    std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
}