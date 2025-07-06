/*A class is like a blueprint or template for creating objects.

It groups data (variables) and functions (methods) together.

Example: Class is like a "Car design".

🔑 Key Points:
Defined using class keyword.

Contains variables (called data members).

Contains functions (called member functions).
*/

#include <iostream>
#include <string>
using namespace std;

// Class declaration
class Car {
public:
    string brand;       // data member
    int speed;

    // member function
    void drive() {
        cout << "Driving " << brand << " at speed " << speed << " km/h" << endl;
    }
};
