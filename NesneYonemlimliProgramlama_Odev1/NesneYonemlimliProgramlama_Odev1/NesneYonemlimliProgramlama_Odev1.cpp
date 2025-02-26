#include <iostream>
using namespace std;

int main()
{
	/*Bir program yazýnýz, kullanýcýdan adýný, soyadýný, yaþýný, boyunu (float) ve cinsiyetini (char) isteyiniz. 
	Ardýndan bu bilgileri düzenli bir þekilde ekrana yazdýrýnýz. 
	Çýktýnýzda tab (\t) karakterini kullanarak hizalama yapýnýz ve isim soyisim bilgisini çift týrnak (") içinde gösteriniz.
	*/


	string ad, soyad;
	int yas;
	float boy;
	char cinsiyet;

	cout << "---- KULLANICI BÝLGÝLERÝ ----\n";
	cout << "- Adýnýzý Girin: ";
	cin >> ad;
	cout << "- Soyadýnýzý Girin: ";
	cin >> soyad;
	cout << "- Boyunuzu Metre Cinsinden Girin: ";
	cin >> boy;
	cout << "- Yaþýnýzý Girin: ";
	cin >> yas;
	cout << "- Cinsiyetinizi Girin: ";
	cin >> cinsiyet;
	cout << "\n\n\n";

	cout << ad << "\t" << soyad << "\t" << "Boy: " << boy << "M\t" << "Yaþ: " << yas << "\t" << "Cinsiyet: " << cinsiyet;





	return 0;
}

