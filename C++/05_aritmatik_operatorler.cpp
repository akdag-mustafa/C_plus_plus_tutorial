#include <iostream>
using namespace std;

int main()
{
    // 1. ARİTMETİK OPERATÖRLER
    int num1 = 18;
    int num2 = 5;

    int sum = num1 + num2;   // Toplama: 23
    int sub = num1 - num2;   // Çıkarma: 13
    int multi = num1 * num2; // Çarpma: 90
    int mod = num1 % num2;   // Bölümden kalan: 3

    // İki int bölünürse sonuç tam sayı olur: 18 / 5 = 3
    // Ondalıklı sonuç için birini float'a dönüştürmek yeterlidir.
    float div = static_cast<float>(num1) / num2; // 3.6

    cout << num1 << " + " << num2 << " = " << sum << '\n';
    cout << num1 << " - " << num2 << " = " << sub << '\n';
    cout << num1 << " * " << num2 << " = " << multi << '\n';
    cout << num1 << " / " << num2 << " = " << div << '\n';
    cout << num1 << " % " << num2 << " = " << mod << '\n';

    // 2. ARTIRMA VE AZALTMA
    // Değişkenin kendi değerini değiştirir.
    // Önde kullanıldığında önce değiştirir, sonra yeni değeri verir.
    int increase = ++num1; // num1 = 19, increase = 19
    int decrease = --num2; // num2 = 4, decrease = 4

    cout << "\nArtirma sonrasi num1: " << num1 << '\n';
    cout << "increase: " << increase << '\n';
    cout << "Azaltma sonrasi num2: " << num2 << '\n';
    cout << "decrease: " << decrease << '\n';

    // 3. BİLEŞİK ATAMA OPERATÖRLERİ
    // İşlemler sırayla çalışır; her satır x'in değerini değiştirir.
    int x = 7;

    x += 12; // x = x + 12; -> 19
    x -= 12; // x = x - 12; -> 7
    x *= 3;  // x = x * 3;  -> 21
    x /= 3;  // x = x / 3;  -> 7
    x %= 5;  // x = x % 5;  -> 2

    cout << "\nAtama islemleri sonrasi x: " << x << '\n';

    // 4. BİTSEL OPERATÖRLER
    // Her örnekte aynı başlangıç değerlerini kullanıyoruz.
    unsigned int a = 5; // İkilik: 0101
    unsigned int b = 3; // İkilik: 0011

    // AND (&): İki bit de 1 ise sonuç biti 1.
    cout << "5 & 3 = " << (a & b) << '\n'; // 0001 -> 1

    // OR (|): En az bir bit 1 ise sonuç biti 1.
    cout << "5 | 3 = " << (a | b) << '\n'; // 0111 -> 7

    // XOR (^): İki bit farklıysa sonuç biti 1.
    cout << "5 ^ 3 = " << (a ^ b) << '\n'; // 0110 -> 6

    // Sağa kaydırma: Alt taraftaki bitler atılır.
    cout << "5 >> 1 = " << (a >> 1) << '\n'; // 0010 -> 2

    // Sola kaydırma: Sağdan sıfırlar eklenir.
    cout << "5 << 1 = " << (a << 1) << '\n'; // 1010 -> 10

    // BİLEŞİK BİTSEL ATAMA
    // Yukarıdaki ifadeler a'yı değiştirmedi.
    // Aşağıdaki işlemler ise x'i değiştirir.
    x = 5;
    x &= 7; // x = x & 7;  -> 5
    x |= 7; // x = x | 7;  -> 7
    x ^= 7; // x = x ^ 7;  -> 0

    x = 16;
    x >>= 2; // x = x >> 2; -> 4
    x <<= 3; // x = x << 3; -> 32

    cout << "Son x degeri: " << x << '\n';

    return 0;
}