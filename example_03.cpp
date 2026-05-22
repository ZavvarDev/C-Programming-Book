#include <iostream>
using namespace std;

int sum(int b[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
            s += b[i];
    return s;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << " \n";
        cin >> a[i];
    }
    cout << "==============================\n\n";
    cout << "Sum = " << sum(a, 10);
    return 0;
}