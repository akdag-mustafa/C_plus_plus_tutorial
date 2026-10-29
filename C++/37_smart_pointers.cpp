#include <iostream>
#include <string>
#include <memory>
#include <utility>

using namespace std;

class Employee
{
public:
    string name = "Mustafa";
    int salary = 5000;
    int id = 112112333;

    Employee(string name, int salary, int id)
    {
        this->name = name;
        this->salary = salary;
        this->id = id;

        cout << "Constructor called: " << this->name << endl;
    }

    Employee()
    {
        cout << "Empty constructor called" << endl;
    }

    ~Employee()
    {
        cout << "Destructor called: " << name << endl;
    }
};

int main()
{
    // 1. UNIQUE_PTR
    // Nesnenin tek sahibi vardır.
    // Kopyalanamaz, sahipliği move ile taşınabilir.
    {
        unique_ptr<int> uPtr = make_unique<int>(7);
        cout << "My value: " << *uPtr << endl;

        unique_ptr<int> uPtr2 = std::move(uPtr);

        // Taşınan pointer artık boştur, dereference edilmez.
        if (!uPtr)
            cout << "uPtr artik bos." << endl;

        cout << "uPtr2 value: " << *uPtr2 << endl; // 7

        // Blok sonunda uPtr2'nin yönettiği bellek otomatik bırakılır.
    }

    // 2. UNIQUE_PTR İLE CLASS
    cout << "\n--- unique_ptr class ---\n";
    {
        unique_ptr<Employee> uPtrc =
            make_unique<Employee>("Tolgahan", 3000, 222333);

        cout << uPtrc->name << endl;
        cout << uPtrc->salary << endl;
        cout << uPtrc->id << endl;

        // Employee nesnesinin sahipliğini taşıyoruz.
        unique_ptr<Employee> uPtrc2 = std::move(uPtrc);

        if (!uPtrc)
            cout << "uPtrc artik bos." << endl;

        cout << "Yeni sahip: " << uPtrc2->name << endl;

        // Blok sonunda Employee destructor'ı çağrılır.
    }

    // 3. YALNIZCA STRING TAŞIMA
    cout << "\n--- Sadece name tasima ---\n";
    {
        auto employee1 = make_unique<Employee>("Ali", 4000, 123);
        auto employee2 = make_unique<Employee>();

        employee2->name = std::move(employee1->name);

        cout << "Hedef isim: " << employee2->name << endl; // Ali

        // employee1 hâlâ kendi Employee nesnesinin sahibidir.
        // Yalnızca name alanının içeriği taşındı.
        // Kaynak string'e yeniden değer atanabilir.
        employee1->name = "Veli";

        cout << "Kaynak yeni isim: " << employee1->name << endl;
        cout << "Kaynak maas: " << employee1->salary << endl; // 4000
    }

    // 4. SHARED_PTR
    // Bir nesnenin birden fazla sahibi olabilir.
    cout << "\n--- shared_ptr ---\n";
    {
        shared_ptr<int> sPtr = make_shared<int>(10);
        cout << "Sahip sayisi: " << sPtr.use_count() << endl; // 1

        shared_ptr<int> sPtr2 = sPtr;                         // Sahiplik paylaşılır.
        cout << "Sahip sayisi: " << sPtr.use_count() << endl; // 2

        *sPtr2 = 25;

        // İkisi de aynı int değerini gösterir.
        cout << "sPtr: " << *sPtr << endl;   // 25
        cout << "sPtr2: " << *sPtr2 << endl; // 25

        sPtr.reset(); // Bu pointer sahipliği bırakır, boşalır.

        cout << "Kalan sahip: " << sPtr2.use_count() << endl; // 1
        cout << "Deger: " << *sPtr2 << endl;                  // Nesne hâlâ var.
    }

    // 5. SHARED_PTR İLE CLASS
    cout << "\n--- shared_ptr class ---\n";
    {
        auto employee1 = make_shared<Employee>("Ayse", 6000, 456);
        auto employee2 = employee1;

        employee2->salary = 7000;

        cout << employee1->salary << endl;                         // 7000
        cout << "Sahip sayisi: " << employee1.use_count() << endl; // 2

        employee1.reset();
        cout << "Ilk sahip birakti, nesne hala var." << endl;

        employee2.reset(); // Son sahip bırakınca destructor çalışır.
        cout << "Son sahip de birakti." << endl;
    }

    // 6. WEAK_PTR
    // shared_ptr ile yönetilen nesneyi sahip olmadan izler.
    // Nesnenin hayatta kalmasını sağlamaz.
    cout << "\n--- weak_ptr ---\n";
    {
        weak_ptr<Employee> observer;

        {
            auto owner = make_shared<Employee>("Zeynep", 8000, 789);
            observer = owner;

            cout << "Sahip sayisi: " << owner.use_count() << endl; // 1

            // weak_ptr ile doğrudan -> veya * kullanılamaz.
            // lock(), nesne yaşıyorsa geçici bir shared_ptr verir.
            if (auto access = observer.lock())
            {
                cout << "Isim: " << access->name << endl;
                cout << "Gecici sahip dahil: "
                     << access.use_count() << endl; // 2
            }

            // access bitti; sahip sayısı tekrar 1.
        }

        // owner bitti; Employee yok edildi.
        if (observer.expired())
            cout << "Izlenen nesne artik yok." << endl;

        if (auto access = observer.lock())
            cout << access->name << endl;
        else
            cout << "lock bos shared_ptr dondurdu." << endl;
    }

    return 0;
}