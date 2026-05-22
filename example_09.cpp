#include <iostream>
using namespace std;

void sum(int b[][2], int m)
{
    int i,j;
    cout << "Row\t\t" << "Sum\t\n";
    cout << "----------------\n";
    for (i = 0; i < m; i++)
    {
        int sum = 0;
        for (j = 0; j < 2; j++)
        sum += b[i][j];
        cout << i + 1 << "\t\t" << sum << "\n";
    }
}

int main()
{
    const int m = 5, n = 2;
    int a[m][n] = {{12, 17}, {33, 14}, {56, 0}, {81, 3}, {18, 5}};
    sum(a, m);
    return 0;
}