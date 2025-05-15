/*

An object is a real thing created from a class.

Example: "MyCar" is an object made from "Car" class.

🔑 Key Points:
Created using class name.

Access class members using dot . operator.

*/

int main() {
    Car myCar;               // Creating object
    myCar.brand = "Toyota";  // Assigning values
    myCar.speed = 100;

    myCar.drive();           // Calling function

    return 0;
}
