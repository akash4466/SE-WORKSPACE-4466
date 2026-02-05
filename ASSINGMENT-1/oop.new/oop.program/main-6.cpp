#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.5;

    float x = a;            // Implicit
    int y = (int)b;         // Explicit

    cout << x << endl << y;
    return 0;
}
