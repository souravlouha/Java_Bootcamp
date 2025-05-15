//Same function name works in different ways.

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};
