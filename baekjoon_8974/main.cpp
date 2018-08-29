#include <iostream>
using namespace std;

int a, b, tmp, m, t = 1;
int main() {
	cin >> a >> b;
	tmp = a;
	while (tmp > t) tmp -= t++;
	while (true) {
		for (int i = tmp; i <= t; i++) {
			m += t;
			if (b == a) {
				cout << m << endl;
				return 0;
			}
			a++;
		}
		tmp = 1; t++;
	}
}