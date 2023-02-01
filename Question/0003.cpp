#include <iostream>
using namespace std;

int main()
{
    int m1 [100][100], m2 [100][100], m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m1[i][j];
        }
        
    }

    //cin metrix m2
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m2[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }
    
    

}