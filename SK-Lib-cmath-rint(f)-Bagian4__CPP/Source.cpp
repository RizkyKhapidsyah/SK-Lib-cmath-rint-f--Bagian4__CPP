
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float x = 3.76542, y = 3.37562, hasil;
	
	fesetround(FE_DOWNWARD);

	hasil = rintf(x);
	cout << "x = " << x << endl; 
	cout << "Hasil rinf()  = " << hasil << endl << endl;
	
	fesetround(FE_UPWARD);

	hasil = rintf(y);
	cout << "y = " << y << endl;
	cout << "Hasil rinf()  = " << hasil << endl;

	_getch();
	return 0;
}
