#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    double s, x1, x2;;
    cin >> a >> b >> c;
    d = b*b-4*a*c;
//    cout << d << endl;
    if (d<0)
    {
        cout << "No real roots";
    }
    else if (d==0)
    {
        x1 = -b/2*a;
        cout << x1 << ' ' << x1;
    }
    else
    {
        s=sqrt(b*b-4*a*c);
        x1 = ((-b+s)/(2*a));
        x2 = ((-b-s)/(2*a));
        cout << x1 << ' ' << x2;
    }
    return 0;
}
