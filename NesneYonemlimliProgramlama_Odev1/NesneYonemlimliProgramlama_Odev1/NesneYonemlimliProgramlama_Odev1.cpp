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


	//-------------------------------------------------------------------------------------------------------------------------------------------



	/*Bir alışveriş hesaplayıcı programı geliştiriniz. Kullanıcıdan bir ürün adı (string), adedi (int) ve birim fiyatını (float) alınız.
	Toplam tutarı hesaplayarak sonuçları düzenli bir şekilde ekrana yazdırınız.
	Çıktınızda tab (\t) karakteri ile hizalama yapınız, çift tırnak (") kullanınız ve ters eğik çizgi (\) karakterini gösteriniz.
	*/

	string urun;
	int adet;
	float bfiyat;

	cout << "---- ALISVERIS HESAPLAMA ----\n";
	cout << "- Urun Adini Girin: ";
	cin >> urun;
	cout << "- Urun Adedi Girin: ";
	cin >> adet;
	cout << "- Birim Fiyati Girin: ";
	cin >> bfiyat;
	cout << "\n\n\n";

	cout << "Urun: \"" << urun << "\"\tToplam Tutar = \\ " << adet * bfiyat<<" TL \\";



	//-------------------------------------------------------------------------------------------------------------------------------------------



	/*Bir sıcaklık dönüşüm programı yazınız. Kullanıcıdan Celsius cinsinden bir sıcaklık değeri (float) alınız ve bu değeri Fahrenheit birimine dönüştürünüz.
	Hesaplama sonucunu tab (\t) karakteri kullanarak düzenli bir şekilde gösteriniz ve çıktınızda yeni satır (\n) karakterini kullanarak okunabilirliği artırınız.
	Programınızda formül açıklamasını çift tırnak (") içinde belirtiniz.
	*/

	float celcius, fahrenheit;

	cout << "---- Sicaklik Donusum Programi ----\n";
	cout << "Hesaplama Formulu:\"F=(C*1.8)+32\"\n";
	cout << "Santigrat (Celsius) derecesini Girin: ";
	cin >> celcius;
	cout << "\n";

	fahrenheit = (celcius * 1.8) + 32;

	cout << "Fahrenheit cinsinden:\t\n" << fahrenheit << "'F\n";



	return 0;
}

