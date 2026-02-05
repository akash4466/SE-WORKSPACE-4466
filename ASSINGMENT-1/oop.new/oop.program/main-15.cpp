#include <iostream>
using namespace std;

int x = 10;   // Global variable

void show() {
    int x = 20;   // Local variable
    cout << x << endl;
}

int main() {
    show();
    cout << x;
    return 0;
}
