 #include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;
    int area() { return l * b; }
};

int main() {
    Rectangle r;
    cin >> r.l >> r.b;
    cout << "Area: " << r.area();
    return 0;
}
