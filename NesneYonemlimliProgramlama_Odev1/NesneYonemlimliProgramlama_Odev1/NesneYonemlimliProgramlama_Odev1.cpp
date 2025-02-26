#include <iostream>
using namespace std;

int main()
{
	/*Bir program yaz�n�z, kullan�c�dan ad�n�, soyad�n�, ya��n�, boyunu (float) ve cinsiyetini (char) isteyiniz. 
	Ard�ndan bu bilgileri d�zenli bir �ekilde ekrana yazd�r�n�z. 
	��kt�n�zda tab (\t) karakterini kullanarak hizalama yap�n�z ve isim soyisim bilgisini �ift t�rnak (") i�inde g�steriniz.
	*/


	string ad, soyad;
	int yas;
	float boy;
	char cinsiyet;

	cout << "---- KULLANICI B�LG�LER� ----\n";
	cout << "- Ad�n�z� Girin: ";
	cin >> ad;
	cout << "- Soyad�n�z� Girin: ";
	cin >> soyad;
	cout << "- Boyunuzu Metre Cinsinden Girin: ";
	cin >> boy;
	cout << "- Ya��n�z� Girin: ";
	cin >> yas;
	cout << "- Cinsiyetinizi Girin: ";
	cin >> cinsiyet;
	cout << "\n\n\n";

	cout <<"Ad Soyad: \""<< ad << " " << soyad << "\"\t" << "Boy: " << boy << "M\t" << "Yaş: " << yas << "\t" << "Cinsiyet: " << cinsiyet;





	return 0;
}

