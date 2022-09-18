#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int input, number, posErase, rErase1, rErase2;
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        cin >> number; v.push_back(number);
    }
    
    cin >> posErase; posErase -= 1;
    v.erase(v.begin()+ posErase);
    
    cin >> rErase1 >> rErase2; rErase1 -= 1; rErase2 -= 1;
    v.erase(v.begin() + rErase1, v.begin() + rErase2);
    
    cout << v.size() << '\n';
    for( int i : v)
        cout << i << ' ';
    
    return 0;
}
