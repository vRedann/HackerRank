#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n = 0, q = 0;
    string input;
    getline(cin, input);
    istringstream inputSS(input);
    inputSS >> n >> q;
    vector<vector<int>> a(n);

    for (auto i = 0; i < n; i++)
    {
        input.clear(); inputSS.clear();
        getline(cin, input);
        inputSS.str(input);
        int k_size = 0, k_member = 0;
        inputSS >> k_size;
        vector<int> k(k_size);
        for (auto j = 0; j < k_size; j++)
        {
            inputSS >> k_member;
            k[j] = k_member;
        }
        a[i] = k;
    }

    for (auto i = 0; i < q; i++)
    {
        input.clear(); inputSS.clear();
        getline(cin, input);
        inputSS.str(input);
        int x = 0, y = 0;
        inputSS >> x >> y;
        cout << a[x][y] << endl;
    }
    

    return 0;
}
