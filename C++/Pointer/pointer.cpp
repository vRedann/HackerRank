#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void update(int *a, int *b)
{
    int aTemp = *a + *b;
    *b = abs((*a) - (*b));
    *a = aTemp;
}

int main()
{
    int a = 0, b = 0;
    int *aPtr = &a, *bPtr = &b;
    cin >> a >> b;
    update(aPtr, bPtr);
    cout << a << endl <<  b;
    return 0;
}