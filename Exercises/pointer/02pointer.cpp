#include <iostream>

using namespace std;

int main()
{
    int set,value,max=0;

    cout << "Enter set : ";
    cin >> set;

    int arr[set]{};

    cout << "Enter integer : ";
    for (int i = 0; i < set; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < set; i++)
    {
        if (arr[0]<arr[i])
        {
            max = arr[i];
        }
    }
    int *ptr = &max;
    cout << *ptr;

    return 0;
}