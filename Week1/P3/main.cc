#include <iostream>
#include <cmath>

using std::sqrt;
using std::cout;
using std::cin;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double D = b*b - 4*a*c;
	if (a == 0.0) {
		if (b != 0.0) cout << - c / b;
	} else if (D > 0.0) {
		cout << (-b - sqrt(D)) / 2.0 / a << " " << (-b + sqrt(D)) / 2.0 / a;
	} else if (D == 0.0) cout << -b / 2.0 / a;
}


