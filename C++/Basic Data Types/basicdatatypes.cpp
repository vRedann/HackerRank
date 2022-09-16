#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout.setf(std::ios::fixed, std::ios::floatfield);
    cout.precision(3);
    cout  << d << endl;
    cout.precision(9);
    cout << e << endl;
    return 0;
}