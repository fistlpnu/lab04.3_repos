#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 1 && c != 0)
			F = a * pow(x, 2) + b / c;
		else
			if (x > 1, 5 && c == 0)
				F = x - a / pow(x - c, 2);
			else
				F = pow(x, 2) / pow(c, 2);
		cout << "|" << setw(2) << setprecision(3) << x
		<< " |" << setw(7) << setprecision(3) << F
		<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
