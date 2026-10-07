#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1. KULLANICIDAN SAYI ALMA
    const float pi = 3.1415f;
    float radius = 0.0f; // Ondalıklı yarıçap da girilebilir.

    cout << "Enter the radius: ";
    cin >> radius; // Kullanıcıdan alınan değeri değişkene aktarır.

    // Dairenin alanı: pi * r²
    // Çemberin çevresi: 2 * pi * r
    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;

    cout << "Your radius was: " << radius << '\n';
    cout << "Area of circle: " << area << '\n';
    cout << "Circumference of circle: " << circumference << '\n';

    // 2. TEK KELİME OKUMA
    // string için cin >>, baştaki boşlukları atlar.
    // Sonraki boşluk, sekme veya satır sonunda okumayı durdurur.
    string myMessage;

    cout << "\nEnter one word: ";
    cin >> myMessage;

    cout << "Your message is \"" << myMessage << "\"\n";

    // 3. SATIR OKUMA
    // getline, satırı içindeki boşluklarla birlikte okur.
    // ws, önceki girişten kalan Enter dahil baştaki
    // tüm boşluk karakterlerini atlar.
    string myMessage2;

    cout << "\nEnter your message: ";
    getline(cin >> ws, myMessage2);

    cout << "Your message is \"" << myMessage2 << "\"\n";

    return 0;
}