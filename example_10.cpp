#include <iostream>
using namespace std;

int main()
{
    int a[3][4], b[4][5], c[3][5], i, j, k;
    cout << "Please Enter Number For Matrix [3,4] :\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "[" << i + 1 << " , " << j + 1 << "]=";
            cin >> a[i][j];
        }
        cout << endl;
    }
    //************************
    cout << "Please Enter Number For Matrix [4,5] :\n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "[" << i + 1 << " , " << j + 1 << "] = ";
            cin >> b[i][j];
        }
        cout << endl;
    }
    //************************
    int t = 0;
    cout << endl
         << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
        {
            t = 0;
            for (k = 0; k < 4; k++)
            {
                t += a[i][k] * b[k][j];
                c[i][j] = t;
            }
        }
    //*************************
    cout << "Result :\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
    return 0;
}