#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	b=a%10;
	a=a/10000;
	c=a%10;
	cout << b + c << endl;
	return 0;
}
