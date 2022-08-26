#include <iostream>
using namespace std;

int main()
{
	int n1=1, n2=2, n3=3;
	cout << "ingresa los 3 numeros\n";
	cin >> n1 >> n2 >> n3;
	if (n1 < n2 && n2 < n3)
	{
		cout << "es creciente\n";
	}
	else
	{
		cout << "no es creciente\n";
	}
	return main();
	system("pause");
}
