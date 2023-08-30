#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c, x;
	float y;
	cin >> a >> b >> c;
	x = (a + b) / c;
	y = (a + b) * 1.0 / c;
	cout << x << endl;
	cout << fixed << setprecision(2) << y << endl;
	return 0;
}