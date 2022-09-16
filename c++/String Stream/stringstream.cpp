#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v;
    istringstream ss(str);
    string s;
    while(getline(ss, s, ','))
        v.push_back(stoi(s));
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << "\n";   
    return 0;
}
