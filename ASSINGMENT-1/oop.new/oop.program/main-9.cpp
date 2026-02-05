#include <iostream>
using namespace std;

int main() {
    int guess, num = 50;

    while(true) {
        cin >> guess;
        if(guess > num) cout << "Too High\n";
        else if(guess < num) cout << "Too Low\n";
        else { cout << "Correct!"; break; }
    }
    return 0;
}
