#include <cmath>
#include <iostream>

using namespace std;
int main() {
	int A, B;
	double C;
	cin >> A >> B >> C;
	cout << sqrt(pow((A + B + C), 2) - pow((A - B - C), 2));

	system("pause");
	return 0;
}