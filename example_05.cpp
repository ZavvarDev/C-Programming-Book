#include <iostream>
using namespace std;

int binary_searching(int b[], int n, int key)
{
    int mid = 0, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (b[mid] == key)
                return mid;
        else if (b[mid] < key)
                low = mid + 1;
        else
                high = mid - 1;
    }
    return n;
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
    cout << "Enter number for search: ";
    int key;
    cin >> key;
    cout << "==============================\n\n";
    int index;
    index= binary_searching(a, 10, key);
    if (index == 10)
            cout << "Not found\n";
    else
            cout << "index = " << index << endl;
    return 0;
}