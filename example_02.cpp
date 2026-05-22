#include<iostream>
using namespace std;

int main() {
    int x[] = {10,127,86,951,354};
    int size = sizeof(x) / sizeof(int);
    for(int i=0 ; i<size ; i++)
        cout << x[i] << " * 2 = " << x[i] * 2 << endl;
    return 0;
}