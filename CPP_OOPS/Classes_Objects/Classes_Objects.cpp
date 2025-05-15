#include <iostream>
#include <string>
using namespace std;

// Define a class named Car
class Car {
public: // Public members can be accessed from outside
    string brand;   // Attribute: brand of the car
    int year;       // Attribute: year of manufacture

    // Method: Display car info
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1; // Create an object of Car (object instantiation)
    car1.brand = "Toyota"; // Set attribute values
    car1.year = 2020;

    car1.displayInfo(); // Call method to display info

    Car car2; // Another object of Car
    car2.brand = "Honda";
    car2.year = 2022;

    car2.displayInfo(); // Call method for second object

    return 0;
}
