#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void inputArray(int a[], int size)
{
    for(auto i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void outputArray(const int a[], const int size)
{
    for ( int i = size; i > 0; i--)
    {
        cout << a[i-1] << " ";
    }
    
}

int main()
{
    int size;
    cin >> size;
    int* iArray = new int[size];
    inputArray(iArray, size);
    outputArray(iArray, size);
    return 0;
}
