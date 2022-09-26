#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s; 
    int q;
    cin >> q; 
    for(int i = 0; i < q; i++)
    {
        int type, n;
        cin >> type >> n;
        if(type == 1)
            s.insert(n);
        else if(type == 2)
            s.erase(n);
        else
            cout << (s.find(n) != s.end() ? "Yes\n" : "No\n");    
    }  
    return 0;
}