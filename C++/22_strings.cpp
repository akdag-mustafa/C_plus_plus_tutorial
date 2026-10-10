#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main()
{
    // 1. C TİPİ METİNLER
    char str1[30] = "Mustafa"; // Birleştirme için yeterli alan.
    char str2[] = " Akdag";
    char str3[30];

    strcpy(str3, str1);                 // str1'i str3'e kopyalar.
    cout << "strcpy: " << str3 << endl; // Mustafa

    strcat(str1, str2);                 // str2'yi str1'in sonuna ekler.
    cout << "strcat: " << str1 << endl; // Mustafa Akdag

    cout << "strlen: " << strlen(str1) << endl; // 13

    // 2. STRING TANIMLAMA VE KOPYALAMA
    string metin = "Merhaba";
    string kopya = metin;

    cout << "Kopya: " << kopya << endl; // Merhaba

    // 3. BİRLEŞTİRME
    string ad = "Mustafa";
    string soyad = "Akdag";

    cout << "Birlesim: " << ad + " " + soyad << endl;

    metin = "Merhaba";
    metin += " dunya";
    cout << "+=: " << metin << endl; // Merhaba dunya

    metin.append("!");
    cout << "append: " << metin << endl; // Merhaba dunya!

    metin.append(3, '.');
    cout << "append adet: " << metin << endl; // Merhaba dunya!...

    // 4. UZUNLUK VE BOŞLUK KONTROLÜ
    metin = "Kalem";

    cout << "size: " << metin.size() << endl;     // 5
    cout << "length: " << metin.length() << endl; // 5

    cout << boolalpha; // bool sonuçlarını true/false olarak yazdırır.

    cout << "empty: " << metin.empty() << endl; // false

    string bos = "";
    cout << "Bos metin: " << bos.empty() << endl; // true

    string bosluk = " ";
    cout << "Bir bosluk: " << bosluk.empty() << endl; // false

    // 5. KARAKTERLERE ERİŞİM
    metin = "Kalem";

    cout << "[0]: " << metin[0] << endl;        // K
    cout << "at(1): " << metin.at(1) << endl;   // a
    cout << "front: " << metin.front() << endl; // K
    cout << "back: " << metin.back() << endl;   // m

    metin[0] = 'k';
    cout << "Karakter degistirme: " << metin << endl; // kalem

    // 6. SONA KARAKTER EKLEME VE SİLME
    metin = "Merhaba";

    metin.push_back('!');
    cout << "push_back: " << metin << endl; // Merhaba!

    metin.pop_back();
    cout << "pop_back: " << metin << endl; // Merhaba

    // 7. ARAYA EKLEME
    metin = "Merhaba dunya";

    metin.insert(8, "guzel ");           // 8. indeksten önce ekler.
    cout << "insert: " << metin << endl; // Merhaba guzel dunya

    // 8. İÇERİĞİ DEĞİŞTİRME
    metin.assign("Yeni metin");
    cout << "assign: " << metin << endl; // Yeni metin

    metin = "Merhaba dunya";
    metin.replace(8, 5, "Mustafa");       // 8. indeksten 5 karakteri değiştirir.
    cout << "replace: " << metin << endl; // Merhaba Mustafa

    // 9. SİLME
    metin = "Merhaba guzel dunya";

    metin.erase(8, 6);                  // 8. indeksten itibaren 6 karakter siler.
    cout << "erase: " << metin << endl; // Merhaba dunya

    metin.clear();
    cout << "clear sonrasi uzunluk: " << metin.size() << endl; // 0

    // 10. UZUNLUĞU DEĞİŞTİRME
    metin = "Mustafa";

    metin.resize(4);
    cout << "Kisaltma: " << metin << endl; // Must

    metin.resize(7, '*');
    cout << "Genisletme: " << metin << endl; // Must***

    // metin.resize(10); yazsaydık sona 3 adet '\0' eklenirdi.

    // 11. KAPASİTE
    metin = "Selam";

    metin.reserve(100);                               // En az 100 char için kapasite ister.
    cout << "Uzunluk: " << metin.size() << endl;      // 5
    cout << "Kapasite: " << metin.capacity() << endl; // En az 100

    metin.shrink_to_fit(); // Fazla kapasitenin azaltılmasını ister.
    cout << "Yeni kapasite: " << metin.capacity() << endl;
    cout << "Teorik sinir: " << metin.max_size() << endl;

    // 12. METİN İÇİNDE ARAMA
    metin = "elma armut elma";

    cout << "find: " << metin.find("elma") << endl;   // 0
    cout << "rfind: " << metin.rfind("elma") << endl; // 11

    if (metin.find("muz") == string::npos)
        cout << "Muz bulunamadi." << endl;

    metin = "abc123xyz";

    cout << "Ilk rakam: "
         << metin.find_first_of("0123456789") << endl; // 3

    cout << "Son rakam: "
         << metin.find_last_of("0123456789") << endl; // 5

    metin = "   Merhaba   ";

    cout << "Ilk bosluk olmayan: "
         << metin.find_first_not_of(' ') << endl; // 3

    cout << "Son bosluk olmayan: "
         << metin.find_last_not_of(' ') << endl; // 9

    // 13. METİNDEN PARÇA ALMA
    metin = "Mustafa Akdag";

    cout << "substr: " << metin.substr(8, 5) << endl; // Akdag
    // 8. indeksten başlayarak 5 karakter alır.

    // 14. KARŞILAŞTIRMA
    string a = "elma";
    string b = "armut";

    cout << "Esit mi: " << (a == b) << endl;                     // false
    cout << "Farkli mi: " << (a != b) << endl;                   // true
    cout << "elma sonra mi: " << (a > b) << endl;                // true
    cout << "Ayni metin compare: " << a.compare("elma") << endl; // 0
    // compare: önceyse negatif, eşitse 0, sonraysa pozitif.

    // 15. İKİ METNİN İÇERİĞİNİ TAKAS ETME
    a = "Bir";
    b = "Iki";

    a.swap(b);

    cout << "a: " << a << endl; // Iki
    cout << "b: " << b << endl; // Bir

    // 16. C TİPİ KARAKTER DİZİSİNE ERİŞİM
    metin = "Merhaba";

    const char *cMetin = metin.c_str();
    cout << "c_str: " << cMetin << endl; // Merhaba

    cout << "data: " << metin.data() << endl; // Merhaba

    // 17. CHAR DİZİSİNE KOPYALAMA
    char hedef[20] = {};

    metin.copy(hedef, 3, 0); // 0. indeksten 3 karakter kopyalar.
    hedef[3] = '\0';         // copy otomatik sonlandırıcı eklemez.

    cout << "copy: " << hedef << endl; // Mer

    // 18. İTERATÖRLERLE DOLAŞMA
    metin = "ABC";

    cout << "Duz: ";
    for (auto it = metin.begin(); it != metin.end(); ++it)
        cout << *it; // ABC
    cout << endl;

    cout << "Ters: ";
    for (auto it = metin.rbegin(); it != metin.rend(); ++it)
        cout << *it; // CBA
    cout << endl;

    cout << "Salt okunur: ";
    for (auto it = metin.cbegin(); it != metin.cend(); ++it)
        cout << *it; // ABC, it üzerinden karakter değiştirilemez.
    cout << endl;

    cout << "Salt okunur ters: ";
    for (auto it = metin.crbegin(); it != metin.crend(); ++it)
        cout << *it; // CBA
    cout << endl;

    // 19. METİNDEN SAYIYA DÖNÜŞÜM
    cout << "stoi: " << stoi("123") + 1 << endl; // 124
    cout << "stol: " << stol("12345") << endl;
    cout << "stoll: " << stoll("12345678900") << endl;
    cout << "stoul: " << stoul("12345") << endl;
    cout << "stoull: " << stoull("12345678900") << endl;
    cout << "stof: " << stof("3.5") << endl;
    cout << "stod: " << stod("3.14159") << endl;
    cout << "stold: " << stold("3.14159") << endl;

    // 20. SAYIDAN METNE DÖNÜŞÜM
    string sayiMetni = to_string(42);

    cout << "to_string: " << sayiMetni + "!" << endl; // 42!

    // 21. KARAKTER KONTROLLERİ
    // != 0, fonksiyon sonucunu bool'a dönüştürür.
    cout << "isalnum('7'): " << (isalnum('7') != 0) << endl;   // true
    cout << "isalpha('A'): " << (isalpha('A') != 0) << endl;   // true
    cout << "isdigit('5'): " << (isdigit('5') != 0) << endl;   // true
    cout << "islower('a'): " << (islower('a') != 0) << endl;   // true
    cout << "isupper('A'): " << (isupper('A') != 0) << endl;   // true
    cout << "iscntrl('\n'): " << (iscntrl('\n') != 0) << endl; // true
    cout << "isgraph(' '): " << (isgraph(' ') != 0) << endl;   // false
    cout << "isprint(' '): " << (isprint(' ') != 0) << endl;   // true
    cout << "isspace('\n'): " << (isspace('\n') != 0) << endl; // true
    cout << "isblank('\t'): " << (isblank('\t') != 0) << endl; // true
    cout << "ispunct('!'): " << (ispunct('!') != 0) << endl;   // true
    cout << "isxdigit('F'): " << (isxdigit('F') != 0) << endl; // true

    // char değişkeniyle güvenli kullanım:
    char karakter = 'A';
    cout << "Harf mi: "
         << (isalpha(static_cast<unsigned char>(karakter)) != 0)
         << endl;

    // 22. BÜYÜK / KÜÇÜK HARFE DÖNÜŞÜM
    cout << "tolower: " << static_cast<char>(tolower('A')) << endl; // a
    cout << "toupper: " << static_cast<char>(toupper('a')) << endl; // A

    // 23. YEREL AYAR
    // Ortamın yerel ayarını kullanmayı dener.
    setlocale(LC_ALL, "");

    // setlocale(LC_ALL, "Turkish");
    // "Turkish" adı her sistemde desteklenmez.
    // UTF-8 Türkçe harfler, cctype ile bayt bayt işlenemez.

    // 24. SATIR OKUMA VE BOŞLUK KONTROLÜ
    string giris;

    cout << "Adinizi ve soyadinizi girin: ";
    getline(cin, giris);

    if (giris.empty())
        cout << "Bos metin girdiniz." << endl;
    else
        cout << "Girdiginiz metin: " << giris << endl;

    // 25. C++20 — KULLANMAK İÇİN C++20 İLE DERLENMELİ
    /*
    metin = "Merhaba dunya";

    cout << metin.starts_with("Merhaba") << endl; // true
    cout << metin.ends_with("dunya") << endl;     // true

    metin = "banana";
    std::erase(metin, 'a');
    cout << metin << endl; // bnn

    metin = "a1b2c3";
    std::erase_if(metin, [](char c) {
        return c >= '0' && c <= '9';
    });
    cout << metin << endl; // abc
    */

    // 26. C++23 — DERLEYİCİ VE KÜTÜPHANE DESTEĞİ GEREKİR
    /*
    metin = "Merhaba dunya";
    cout << metin.contains("dunya") << endl; // true

    metin.resize_and_overwrite(5, [](char* alan, size_t boyut) {
        for (size_t i = 0; i < boyut; i++)
            alan[i] = '*';

        return boyut;
    });
    cout << metin << endl; // *****
    */

    return 0;
}