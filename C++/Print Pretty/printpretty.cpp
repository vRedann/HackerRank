#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << showbase << hex << left << nouppercase << long(A) << '\n';
        cout << setw(15) << right << setfill('_') << fixed << showpos << setprecision(2) << B << '\n';
        cout << scientific << uppercase << noshowpos << setprecision(9) << C << '\n';
	}
	return 0;
}