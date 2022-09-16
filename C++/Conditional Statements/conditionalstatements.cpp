#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
    const int size = 10;
    int input = 0;
    int iArray[size]{ 0,1,2,3,4,5,6,7,8,9};
    string sArray[size]{ "","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> input;

    if ( find(begin(iArray), end(iArray), input) != end(iArray) )
        cout << sArray[input];
    else
        cout << "Greater than 9";
    return 0;
}
