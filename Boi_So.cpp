// Boi_So.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int so,n, boiso;
	cout << "Nhap so dau";
	cin >> so;
	cout << "Nhap so cuoi";
	cin >> n;
	int i = 1;
	boiso = so;
	while (boiso < n) {
		boiso = so * i;
		i++;
		cout << "Boi la" << boiso << " " << endl;
	}
	return 0;
}