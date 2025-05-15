/*
They control access to class members:

public: Can be accessed from outside the class.

private: Can only be accessed inside the class.

*/


class Student {
private:
    int marks; // private member

public:
    void setMarks(int m) {
        marks = m;
    }

    void showMarks() {
        cout << "Marks: " << marks << endl;
    }
};
