#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];
    char str[4];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    cin >> str;
    sort(a,a+3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[str[i]- 'A'] << " ";
    }
    

    return 0;
}