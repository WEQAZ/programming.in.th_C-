#include <iostream>
#include <ctype.h>


using namespace std;

int main()
{
    string s;
    cin >> s;
    bool upper = false;
    bool lower = false;

    for(char c:s)
    {
        if (isupper(c))
        {
            upper = true;
        }
        if (islower(c))
        {
            lower = true;
        } 
    }

    if (lower && upper == true)
    {
        cout << "Mix";
    }
    else if (lower == true)
    {
        cout << "All Small Letter";
    }
    else
    {
        cout << "All Capital Letter";
    }
    return 0; 
    
}