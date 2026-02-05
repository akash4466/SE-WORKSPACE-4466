#include <iostream>
using namespace std;

int main() {
    int a[5], sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / 5.0;
    return 0;
}
