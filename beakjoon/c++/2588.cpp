#include <iostream>

using namespace std;

int main() {
	int a, b;
	int sam, sa, oh;
	cin >> a >> b;
	sam = a*(b % 10);
	sa = a*((b % 100) - (b % 10));
	oh = a*(b/100);

	cout << sam << endl;
	cout << sa/10 << endl;
	cout << oh << endl;
	cout << sam+sa+(oh*100) << endl;

	return 0;
}
