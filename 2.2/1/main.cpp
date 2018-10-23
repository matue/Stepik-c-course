#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    if (a==0) {
        return b;
    }
    else if (b==0) {
        return a;
    }
    unsigned mx = (a>b)?a:b;
    unsigned mn = (a<b)?a:b;
    unsigned x = (mx % mn);
    if (x==0) {
        return mn;
    }
    else {
        gcd(x, mn);
    }
}

int main()
{
    cout << gcd(500, 60);
}


