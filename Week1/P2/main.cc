#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(){
 string a[3];
 cin >> a[0] >> a[1] >> a[2];
 if (a[0] <= a[1] && a[0] <= a[2]) {
 	cout << a[0];
 }	
 else if (a[1] <= a[0] && a[1] <= a[2]) {
 	cout << a[1];
 } else cout << a[2];
 return 0;
}
