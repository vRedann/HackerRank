#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); 
    }
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        if(v[it - v.begin()] == y)
            cout << "Yes " << it - v.begin() + 1<< '\n';
        else 
            cout << "No " << it - v.begin() + 1<< '\n';
    }
    return 0;
}
