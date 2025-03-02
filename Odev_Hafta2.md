## Soru 1 (Veri Tipleri ve Aritmetik Operatörler):

Kullanıcıdan iki farklı sayı alan (bir tam sayı ve bir ondalıklı sayı) ve bu sayılar üzerinde toplama, çıkarma, çarpma, bölme ve mod alma işlemlerini gerçekleştiren bir C++ programı yazınız. Aşağıdaki çıktı formatına uygun olarak sonuçları gösteriniz. Program ayrıca her veri tipinin bellekte kapladığı alanı da (sizeof kullanarak) göstermelidir.
```
Bir tam sayı giriniz: 10
Bir ondalıklı sayı giriniz: 3.5

Sonuçlar:
10 + 3.5 = 13.5
10 - 3.5 = 6.5
10 * 3.5 = 35
10 / 3.5 = 2.85714
10 % 3 = 1 (Not: Mod işlemi sadece tam sayılarda uygulanır)

Veri Boyutları:
int veri tipi: 4 byte
double veri tipi: 8 byte
```
Kod 
```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
int tam_sayi;
double ondalikli_sayi;

cout << "Bir tamsayı girin: ";
cin >> tam_sayi;
cout << "Bir ondalıklı sayı girin: ";
cin >> ondalikli_sayi;
cout << "\n";

cout << "Sonuçlar: " << endl;
cout << tam_sayi << " + " << ondalikli_sayi << " = " << tam_sayi + ondalikli_sayi << endl;
cout << tam_sayi << " - " << ondalikli_sayi << " = " << tam_sayi - ondalikli_sayi << endl;
cout << tam_sayi << " * " << ondalikli_sayi << " = " << tam_sayi * ondalikli_sayi << endl;
cout << tam_sayi << " / " << ondalikli_sayi << " = " << tam_sayi / ondalikli_sayi << endl;
cout << tam_sayi << " % " << int(ondalikli_sayi) << " = " << tam_sayi % int(ondalikli_sayi) << "\n\n"; // double türündeki ondalikli_sayi int türüne çevrildi.

cout << "Veri Boyutları:\n";
cout << "int veri tipi: " << sizeof(int) << " byte alan kaplar.\n";
cout << "double veri tipi: " << sizeof(double) << " byte alan kaplar.";
}
```
## Soru 2 (String İşlemleri ve getline()):

Kullanıcıdan ad, soyad ve meslek bilgilerini ayrı satırlarda alan (getline() kullanarak) ve sonra bu bilgileri birleştirerek bir tanıtım cümlesi oluşturan bir program yazınız. Programınız ayrıca ad ve soyadın toplam uzunluğunu hesaplamalı ve özel karakterler kullanarak bir çerçeve içinde bilgileri göstermelidir. Örnek çıktı:

```
Adınızı giriniz: Ahmet
Soyadınızı giriniz: Yılmaz
Mesleğinizi giriniz: Bilgisayar Mühendisi

************************
* Kişi Bilgileri       *
************************
* Ad: Ahmet            *
* Soyad: Yılmaz        *
* Meslek: Bilgisayar Mühendisi *
* Ad-Soyad Uzunluğu: 11 *
************************

Merhaba, ben Ahmet Yılmaz. Bilgisayar Mühendisi olarak çalışıyorum.
```
Kod
```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
string ad, soyad, meslek;

cout << "Adinizi Girin: ";
cin >> ad;
cout << "Soyadinizi Girin: ";
cin >> soyad;
cin.ignore();
cout << "Mesleginizi Girin: ";
getline(cin, meslek);
cout << "\n";

cout << "********************************\n";
cout << "*  Kişi Bilgileri" << setw(16) << "*\n";
cout << "********************************\n";
cout << "* Ad: " << left << setw(25) << ad << "*\n";
cout << "* Soyad: " << left << setw(22) << soyad << "*\n";
cout << "* Meslek: " << setw(21) << meslek << "*\n";
cout << "* Ad-Soyad Uzunluk: " << setw(11) << ad.length() + soyad.length() << "*\n";
cout << "********************************\n";

cout << "Merhaba, ben " << ad.append(soyad) << " " << meslek << " olarak calisiyorum.";
}
```
## Soru 3 (Karşılaştırma ve Mantıksal Operatörler):

Aşağıdaki C++ programını analiz ediniz. Programda bulunan tüm hataları tespit edip düzeltiniz ve sonra programın ne yaptığını açıklayınız. Her satırın ne işe yaradığını açıklayan yorumlar ekleyiniz.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    double c = 3.5;
    
    cout << "a == b: " << (a = b) << endl; 
    cout << "a > c: " << a > c << endl;
    cout << "b <= c: " << b <= c << endl;
    
    bool kosul1 = (a > b) && (b < c);
    bool kosul2 = (a == 7) || (c = 3.5);
    
    cout << "Koşul 1: " << kosul1 << endl;
    cout << "Koşul 2: " << kosul2 << endl;
    
    if (kosul1 && kosul2)
        cout << "Her iki koşul da doğru!"
    else if (kosul1 || kosul2)
        cout << "En az bir koşul doğru!"
    else
        cout << "Hiçbir koşul doğru değil!"
    
    return 0;
}
```
Çözümü
```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
int a = 5, b = 7; // a ve b değişkenlerine 5 ve 7 değerleri atanmıştır.
double c = 3.5; // c değişkenine 3.5 değeri atanmıştır.
   
cout << "a == b: " << (a = b) << endl; // Atama işlemi olduğu için sonuç 7 olacaktır.
   cout << "a > c: " << a > c << endl; // a ve c karşılaştırılamaz çünkü a int veri türünde c ise double veri türündedir.
cout << "b <= c: " << b <= c << endl;// b ve c karşılaştırılamaz çünkü b int veri türünde c ise double veri türündedir.
   
bool kosul1 = (a > b) && (b < c);// a > b koşulu yanlış olduğu için ve operatörü ile bağlı olan b < c koşulu kontrol edilmeyecektir ve sonuc false dönecektir.
bool kosul2 = (a == 7) || (c = 3.5);// kod hata verir çünkü c = 3.5 atama işlemi yapılırken == operatörü kullanılmalıdır.
   
   cout << "Koşul 1: " << kosul1 << endl; // false
cout << "Koşul 2: " << kosul2 << endl; // hata verir çünkü yukarıda yanlış operatör kullanıldı.
   
if (kosul1 && kosul2)
	cout << "Her iki koşul da doğru!" // ; eklenmeli
else if (kosul1 || kosul2)
	cout << "En az bir koşul doğru!" // ; eklenmeli
else
	cout << "Hiçbir koşul doğru değil!" // ; eklenmeli
}
```
## Soru 4 (Atama Operatörleri ve Yorumlar):

Kullanıcıdan başlangıç değeri olarak bir tam sayı alan ve sonra aşağıdaki işlemleri sırasıyla gerçekleştiren bir program yazınız. Her adımda sayının güncel değerini görüntüleyiniz ve kodunuza açıklayıcı yorumlar ekleyiniz.

1. Sayıyı 5 artırın (tekli artırma operatörünü kullanın)
2. Sayının değerini 2 ile çarpın (bileşik atama operatörünü kullanın)
3. Sayının değerini 3 azaltın (tekli azaltma operatörünü kullanın)
4. Sayının 10'a bölümünden kalanı bulun (bileşik atama operatörünü kullanın)
5. Son değerin 3'ten büyük VE 7'den küçük VEYA 0'a eşit olup olmadığını kontrol edin (mantıksal operatörleri kullanın)

Örnek çıktı:
```
Başlangıç değerini giriniz: 10

Adım 1: 10 → 15 (5 artırıldı)
Adım 2: 15 → 30 (2 ile çarpıldı)
Adım 3: 30 → 27 (3 azaltıldı)
Adım 4: 27 → 7 (10'a bölümünden kalan)
Adım 5: 7 değeri, 3'ten büyük VE 7'den küçük VEYA 0'a eşit mi? Sonuç: 0 (Yanlış)
```
Kod 
```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
int baslangic;

cout << "Baslangic Degeri Girin: ";
cin >> baslangic;
cout << "\n\n";

cout << "Adim 1: " << baslangic << " -> ";
baslangic = baslangic + 5;
cout << baslangic << " (5 artirildi)\n";

cout << "Adim 2: " << baslangic << " -> ";
baslangic *= 2;
cout << baslangic << " (2 ile carpildi.)\n";

cout << "Adim 3: " << baslangic << " -> ";
baslangic = baslangic - 3;
cout << baslangic << " (3 azaltildi.)\n";

cout << "Adim 4: " << baslangic << " -> ";
baslangic %= 10;
cout << baslangic << " (10 ile bolumunden kalan.)\n";

bool sonuc = (baslangic > 3 && baslangic < 7) || (baslangic == 0);
cout << "Adim 5: " << baslangic << " degeri, 3'ten buyuk ve 7'den kucuk VEYA 0'a esit mi? Sonuc: " << sonuc;
if (sonuc == 0)
{
	cout << " (Yanlis)";
}
else
{
	cout << " (Dogru)";
}

return 0;
}
```
