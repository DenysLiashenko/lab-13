#include <iostream>
using namespace std;

int power4(int f)
{
	if (f == 0)
		return 1;
	return 4 * power4(f - 1);
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "4 ^ " << n << " = " << power4(n) << endl;
}