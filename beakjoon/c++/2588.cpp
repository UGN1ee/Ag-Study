#include <iostream>

using namespace std;

int main() {
	int a, b;
	int i, j, k;
	cin >> a >> b;
	i = a*(b % 10);
	k = a*((b % 100) - (b % 10));
	j = a*(b/100);

	cout << i << endl;
	cout << k/10 << endl;
	cout << j << endl;
	cout << i+k+(j*100) << endl;

	return 0;
}
