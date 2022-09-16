#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string printEnglish(int input)
{
    const int size = 10;
    const int iArray[size]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const string sArray[size]{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string s;
    if (find(begin(iArray), end(iArray), input) != end(iArray))
    {
        return sArray[input];
    }
    else
    {
        return "Greater than 9";
    }
}

int main()
{

    int input = 0, input2 = 0;
    cin >> input;
    cin >> input2;

    for (int i = input; i <= input2; i++)
    {
        if (i < 10)
        {
            cout << printEnglish(i) << endl;
        }
        else if (i > 9)
        {
            cout << ((i%2) == 0 ? "even" : "odd") << endl;
        }
    }

    return 0;
}