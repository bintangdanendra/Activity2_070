#include <iostream>
using namespace std;

float luasPersegi(float p, float l) {
	return p * l;
}

float luasLingkaran(float r) {
	return 3.14 * r * r;
}

float luasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

int main()
{
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;
	bool menu;
	menu = true;
	while (menu == true)
	{
		cout << "\n\n=================";
		cout << "\n=====M E N U=======";
		cout << "\n===================";
		cout << "\n 1. Luas Persegi Panjang";
		cout << "\n 2. Luas Lingkaran";
		cout << "\n 3. Luas Segitiga";
		cout << "\n 4. Exit";
		cout << "\n Pilihan (1/2/3/4) : ";
		cin >> pilihan;


		switch (pilihan)
		{
		case 1:
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "Masukkan Lebar = ";
			cin >> lebar;
			cout << "\n Luas Persegi Panjang = " << luasPersegi(panjang, lebar);
			break;
		case 2:
			cout << "Masukkan jejari = ";
			cin >> jejari;
			cout << "\n Luas Lingkaran = " << luasLingkaran(jejari);
			break;
		case 3:
			cout << "Masukkan Alas = ";
			cin >> alas;
			cout << "Masukkan Tinggi = ";
			cin >> tinggi;
			cout << "\n Luas Segitiga = " << luasSegitiga(alas, tinggi);
		case 4:
			cout << "Pilihan Salah !!";
			break;
		case 5:
			menu = false;
		default:
			cout << "Pilihan Salah !!";
			break;
		}
	}
}