#include "iostream"
#include "windows.h"
#include "math.h"


using namespace std;

int main()
{

	double y, z,x;

	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;

	z = x / 1000 * y;
	
	cout << "z=" << z << "\n";
	system("pause");
	return 0;
}
