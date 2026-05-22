#include <iostream>
using namespace std;

int main()
{
    int array1[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
        {
            cout << "enter number for array [" << i << "][" << j << "]: ";
            cin >> array1[i][j];
        }
    cout << "==============================\n\n";
    for (int w = 0; w < 3; w++)
        for (int z = 0; z < 5; z++)
        {
            cout << "array[" << w << "][" << z << "] = " << array1[w][z] << endl;
        }
    return 0;
}