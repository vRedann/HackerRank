#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int maxValue(vector<int> v)
{
    int i;
    return i = *(max_element(v.begin(), v.end()));
}

void inputFn(vector<int>& v)
{
    for(auto i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}

int main()
{
    vector<int> iVector(4);
    inputFn(iVector);    
    cout << maxValue(iVector) << endl;
    return 0;
}
