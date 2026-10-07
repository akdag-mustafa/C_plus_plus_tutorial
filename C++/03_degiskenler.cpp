#include <iostream> // cout ve endl için
#include <string>   // string veri tipi için

using namespace std;

int main()
{
    // 1. DEĞİŞKEN TANIMLAMA
    // Genel yapı: veri_tipi degisken_adi = deger;
    // Değişkenlere tanımlandıkları yerde başlangıç değeri veriyoruz.

    int myNumber = 4; // Tam sayı
    int secondNumber = 10;
    bool myCheck = true;              // Mantıksal değer: true veya false
    char myChar = 'A';                // Tek karakter: tek tırnak kullanılır
    float floatNumber = 14.2f;        // Ondalıklı sayı: f eki float belirtir
    double doubleNumber = 123.123132; // float'tan daha yüksek hassasiyet
    string myText = "Keeping string"; // Metin: çift tırnak kullanılır

    // 2. ARİTMETİK İŞLEM VE EKRANA YAZDIRMA
    int sum = myNumber + secondNumber;

    cout << "Toplam: " << sum << '\n';
    cout << "Çarşı pazar karıştı!\n";

    // 3. SABİT TANIMLAMA
    // const ile tanımlanan değişkenin değeri sonradan değiştirilemez.
    const float pi = 3.14f;

    // 4. İŞARETLİ VE İŞARETSİZ TAM SAYILAR
    unsigned int number = 7;   // Sıfır ve pozitif tam sayıları tutar
    signed int numberTwo = -6; // Negatif, sıfır ve pozitif değerleri tutar
                               // int zaten işaretli bir türdür.

    // 5. TÜR DÖNÜŞÜMÜ (CASTING)
    // float değerini int türüne dönüştürüyoruz.
    // Ondalık kısım atılır; yuvarlama yapılmaz. 14.2 -> 14
    int buffer = static_cast<int>(floatNumber);

    cout << "Float degeri: " << floatNumber << '\n';
    cout << "Int degeri: " << buffer << '\n';

    // 6. BELLEKTE KAPLADIĞI ALAN VE ADRESİ
    // sizeof: Bir türün veya değişkenin boyutunu bayt cinsinden verir.
    // &     : Değişkenin bellekteki adresini verir.

    cout << "\n--- Bellek boyutlari ---\n";

    cout << "int: " << sizeof(myNumber) << " bayt\n";
    cout << "bool: " << sizeof(myCheck) << " bayt\n";
    cout << "char: " << sizeof(myChar) << " bayt\n";
    cout << "float: " << sizeof(floatNumber) << " bayt\n";
    cout << "double: " << sizeof(doubleNumber) << " bayt\n";

    // Değişken yerine doğrudan tür adı da yazılabilir.
    cout << "sizeof(int): " << sizeof(int) << " bayt\n";

    cout << "\n--- Deger ve adres ---\n";

    cout << "Deger: " << myNumber << '\n';
    cout << "Adres: " << &myNumber << '\n';
    cout << "Boyut: " << sizeof(myNumber) << " bayt\n";

    // string nesnesinin boyutu ile metnin uzunluğu farklıdır.
    cout << "\nstring nesnesi: " << sizeof(myText) << " bayt\n";
    cout << "Metnin uzunlugu: " << myText.size() << " char birimi\n";

    return 0; // Programın başarıyla tamamlandığını belirtir
}