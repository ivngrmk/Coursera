#include <iostream>
#include <cmath>

using std::sqrt;
using std::cout;
using std::cin;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double D = b*b - 4*a*c;
	double x1, x2;
	if (D > 0.0) {
		cout << (-b - sqrt(D)) / 2.0 / a << " " << (-b + sqrt(D)) / 2.0 / a;
	} else if (D == 0.0) {
		cout << -b / 2.0 / a; 
	} else cout << "No roots.";
}

