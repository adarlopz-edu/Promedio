#include <iostream>

using namespace std;

int main()
{
	double nd, x{}, p, s{}, d;
	cout << "Introduce la cantidad de datos:";
	cin >> nd;
	if (nd <= 0) {
		cout << "Introduce un valor correcto" << endl;
	}
	else {
		d = 1;
		do
		{
			cout << "Escribe el siguiente dato:\n";
			cin >> x;
			s = s + x;
			d++;
		} while (d <= nd);
		s = s / nd;
		cout << "El promedio es: " << s;
	}
}