/*
Constructor
A constructor is a special function called automatically when an object is created.
*/

class Book {
public:
    string title;

    // Constructor
    Book(string t) {
        title = t;
    }

    void show() {
        cout << "Book: " << title << endl;
    }
};

int main() {
    Book b("C++ Basics"); // Constructor is called here
    b.show();

    return 0;
}
