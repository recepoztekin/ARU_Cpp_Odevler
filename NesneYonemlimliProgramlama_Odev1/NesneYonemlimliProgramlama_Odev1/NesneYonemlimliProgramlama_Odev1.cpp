#include <iostream>
using namespace std;

int main()
{
	/*Bir program yazınız, kullanıcıdan adını, soyadını, yaşını, boyunu (float) ve cinsiyetini (char) isteyiniz.
	Ardından bu bilgileri düzenli bir şekilde ekrana yazdırınız.
	Çıktınızda tab (\t) karakterini kullanarak hizalama yapınız ve isim soyisim bilgisini çift tırnak (") içinde gösteriniz.
	*/


	string ad, soyad;
	int yas;
	float boy;
	char cinsiyet;

	cout << "---- KULLANICI BİLGİLERİ ----\n";
	cout << "- Adınızı Girin: ";
	cin >> ad;
	cout << "- Soyadınızı Girin: ";
	cin >> soyad;
	cout << "- Boyunuzu Metre Cinsinden Girin: ";
	cin >> boy;
	cout << "- Yaşınızı Girin: ";
	cin >> yas;
	cout << "- Cinsiyetinizi Girin: ";
	cin >> cinsiyet;
	cout << "\n\n\n";

	cout <<"Ad Soyad: \""<< ad << " " << soyad << "\"\t" << "Boy: " << boy << "M\t" << "Yaş: " << yas << "\t" << "Cinsiyet: " << cinsiyet;





	return 0;
}

