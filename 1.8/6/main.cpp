#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a;
        b=1;
        for (int j=0; j<2000; ++j) {
            b*=2;
            if (b<=a && b*2>a) {
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}
