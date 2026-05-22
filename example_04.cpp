#include <iostream>
using namespace std;

int linear_searching(int b[], int n, int key)
{
    for (int i = 0; i < n; i++)
                if (b[i] == key)
                        return i;
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
    int key; cin >> key;
    cout << "==============================\n\n";
    int index;
    index = linear_searching(a, 10, key);
    if (index == 10)
            cout << "Not found\n";
    else
            cout << "index = " << index << endl;
    return 0;
}