#include <iostream>
using namespace std;

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
float divi(int a,int b){ return (float)a/b; }

int main() {
    int a,b,ch;
    cin >> a >> b >> ch;

    if(ch==1) cout << add(a,b);
    else if(ch==2) cout << sub(a,b);
    else if(ch==3) cout << mul(a,b);
    else if(ch==4) cout << divi(a,b);

    return 0;
}
