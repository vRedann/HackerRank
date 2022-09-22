#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    map<string, int> m;
    cin >> q;
    
    for (int i=0; i <= q; i++)
    {
        string s, name;
        int queriesType, mark;
        getline(cin, s);
        istringstream ss(s);
        ss >> queriesType;
        if(queriesType == 1)
        {
            ss >> name >> mark;
            auto it = m.find(name);
            if(it == m.end()) m.insert(make_pair(name, mark));
            else it->second += mark; 
        }
        else
        {
            ss >> name;
            auto it = m.find(name);
            if(queriesType == 2)
                    m.erase(name);  
            else if(queriesType == 3) 
                cout << ((it != m.end()) ? it->second : 0) << '\n';
        }
    }
    return 0;
}