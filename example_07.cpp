#include <iostream>
using namespace std;

void insertion_sorting(int b[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j, temp = b[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < b[j])
            {
                b[j + 1] = b[j];
            }
            else
                    break;
        }
        b[j + 1] = temp;
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number for Array[" << i << "]: ";
        cin >> a[i];
    }
    cout << "==============================\n\n";
    insertion_sorting(a, 10);
    cout << "Sorted Array:\n\n";
    for (int j = 0; j < 10; j++)
            cout << "number array[" << j << "] = " << a[j] << endl;
    return 0;
}