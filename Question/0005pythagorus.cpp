#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double cathetus1,cathetus2;

    cin >> cathetus1 >> cathetus2; 
    double ans = (cathetus1*cathetus1) + (cathetus2*cathetus2);
    printf("%lf",sqrt(ans));

    return 0;
}