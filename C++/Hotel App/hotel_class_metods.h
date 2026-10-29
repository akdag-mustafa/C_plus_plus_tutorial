Hotel::Hotel()
{
    counter1 = 0;
    counter2 = 0;
    room_manegement();
}
void Hotel::room_manegement()
{
    int number;
    for (int i = 0; i < 20; i++) // tüm odaları boşalttık
    {
        rooms[i] = empty_room;
    }
    do
    {

        cout << "\n\t-- Hotel Akdağ --";
        cout << "\n\t1-Room Reservation";
        cout << "\n\t2-Clear Room";
        cout << "\n\t3-Full Room Count";
        cout << "\n\t4-Room Report";
        cout << "\n\t5-Total Revenue";
        cout << "\n\t6-Exit";
        cout << "\n\t-- Enter Your Choise:";
        cin >> number;

        switch (number)
        {
        case 1:
            room_reservation();
            break;
        case 2:
            room_evaquation();
            break;
        case 3:
            number_of_rooms();
            break;
        case 4:
            room_report();
            break;
        case 5:
            income();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "Enter a number less than 7";
            break;
        }

    } while (number != 6);
}
void Hotel::room_reservation()
{
    int number, days, i = 1, j = 13;
    string name, surname;
    cout << "\n\t Please choise a Room Type";
    cout << "\n\t 1-Single Bed 600$";
    cout << "\n\t 2-double Bed 1000$";
    cin >> number;
    switch (number)
    {
    case 1:
        for (; i < 12; i++)
        {
            if (rooms[i] != full_room)
            {
                cout << "\n\t Enter Your Name:";
                cin >> name;

                cout << "\n\t Enter Your Surname:";
                cin >> surname;

                cout << "\n\t Enter Number of Days:";
                cin >> days;

                customer_name[i] = new string(name);
                customer_surname[i] = new string(surname);
                *customer_name[i] = name;
                *customer_surname[i] = surname;
                rooms[i] = full_room;
                sum += days * 600;
                counter1++;

                cout << "Customer: " << *customer_name[i]
                     << " " << *customer_surname[i] << "\n"
                     << days << " days reserved" << endl;

                break; // Bir oda ayırdıktan sonra for döngüsünü bitir.
            }
        }
        if (i == 12)
        {
            cout << "All single rooms Full";
        }
        break;
    case 2:
        for (; j <= 20; j++)
        {
            if (rooms[j] != full_room)
            {
                cout << "\n\t Enter Your Name:";
                cin >> name;

                cout << "\n\t Enter Your Surname:";
                cin >> surname;

                cout << "\n\t Enter Number of Days:";
                cin >> days;

                customer_name[j] = new string(name);
                customer_surname[j] = new string(surname);
                *customer_name[j] = name;
                *customer_surname[j] = surname;
                rooms[j] = full_room;
                sum += days * 1000;
                counter2++;

                cout << "Customer: " << *customer_name[j]
                     << " " << *customer_surname[j] << "\n"
                     << days << " days reserved" << endl;

                break; // Bir oda ayırdıktan sonra for döngüsünü bitir.
            }
        }
        if (i == 20)
        {
            cout << "All double rooms Full";
        }
        break;
    default:
        cout << "\n\tWrong Type Selected!!";
        break;
    }
};
void Hotel::room_evaquation()
{
    int number;
    cout << "\nEnter the Number of Room:";
    cin >> number;
    if (rooms[number] != empty_room)
    {
        rooms[number] = empty_room;
        delete customer_name[number];
        delete customer_surname[number];
        if (number > 0 && number < 13)
        {
            counter1--;
        }
        else if (number > 12 && number < 21)
        {
            counter2--;
        }
        cout << "\nthe room cleared";
    }
    else
    {
        cout << "\nThe room already empty";
    }
};
void Hotel::number_of_rooms()
{
    cout << "\n\tSingle full room number:" << counter1;
    cout << "\n\tSingle empty room number:" << 12 - counter1;
    cout << "\n\tDouble full room number:" << counter2;
    cout << "\n\tDouble  empty room number:" << 8 - counter2;
};
void Hotel::room_report()
{
    if (counter1 == 0 && counter2 == 0)
    {
        cout << "\n\tAll rooms are empty!!";
    }
    else
    {
        cout << "\nRoom Number\tName\tSurname";
        for (int i = 1; i <= 20; i++)
        {
            if (rooms[i] == full_room)
            {
                cout << "\n\t" << i << "\t" << *customer_name[i] << "\t" << *customer_surname[i];
            }
        }
    }
};
void Hotel::income()
{
    cout << "\n Total Revanue --> " << sum;
};
