
class Hotel
{
    std::string *customer_name[100] = {};
    std::string *customer_surname[100] = {};
    int sum = 0, counter1, counter2;
    enum status
    {
        empty_room,
        full_room
    } rooms[20];

public:
    Hotel();

    void room_manegement();  // oda yönetimi
    void room_reservation(); // oda rezervasyonu
    void room_evaquation();  // oda tahliyesi boşaltma
    void number_of_rooms();  // oda sayısı
    void room_report();      // oda durum yapısı
    void income();           // gelirler
};