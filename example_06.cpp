#include <iostream>
using namespace std;

void bubble_sorting(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (b[j + 1] < b[j]) 
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
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
    bubble_sorting(a, 10);
    cout << "Sorted Array:\n";
    for (int j = 0; j < 10; j++)
            cout << "number array[" << j << "] = " << a[j] << endl;
    return 0;
}