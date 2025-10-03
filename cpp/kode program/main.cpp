#include <iostream>
#include <string>
#include "Order.cpp"
using namespace std;

int main() {
    int orderCounter = 101;

    // order pertama (hardcode) untuk customer naura
    Order order1;
    order1.setOrderId(orderCounter++);
    order1.setCustomerName("Naura");
    order1.setStatus("Pending");

    // buat object food dan isi datanya
    Food f1;
    f1.setId(1);
    f1.setName("Burger");
    f1.setPrice(25000);
    f1.setSpicyLevel(2);
    f1.setCalories(500);

    // buat object drink dan isi datanya
    Drink d1;
    d1.setId(2);
    d1.setName("Iced Tea");
    d1.setPrice(10000);
    d1.setSize("Medium");
    d1.setType("Cold");

    // tambahkan food dan drink ke dalam order pertama
    order1.addItem(&f1);
    order1.addItem(&d1);

    // tampilkan order pertama
    cout << "=== DATA AWAL (Order Pertama) ===" << endl;
    order1.display();

    cout << "\n=====================================\n" << endl;

    // variabel untuk input order customer baru
    char lagi;
    string prevCustomer = "";
    Order order;
    int itemCounter = 1;

    // loop input agar bisa menambah banyak order
    do {
        string custName;
        cout << "Masukkan nama customer: ";
        cin >> ws;
        getline(cin, custName);

        // jika customer berbeda dari sebelumnya maka buat order baru
        if (custName != prevCustomer) {
            // tampilkan data order lama kalau ada
            if (prevCustomer != "") {
                cout << "\n=== DATA ORDER SELESAI ===" << endl;
                order.display();
                cout << "\n=====================================\n" << endl;
            }

            // buat order baru dengan id baru
            order = Order();
            order.setOrderId(orderCounter++);
            order.setCustomerName(custName);
            order.setStatus("Pending");
            itemCounter = 1;
            prevCustomer = custName;

            cout << "=== MEMBUAT ORDER BARU ===" << endl;
        }

        // pilih jenis menu (food atau drink)
        char type;
        cout << "Mau tambah Food (f) atau Drink (d)? ";
        cin >> type;

        string name;
        double price;

        if (type == 'f') {
            // input detail food
            int spicy, calories;
            cout << "Masukkan nama makanan: ";
            cin >> ws;
            getline(cin, name);
            cout << "Masukkan harga: ";
            cin >> price;
            cout << "Masukkan tingkat kepedasan: ";
            cin >> spicy;
            cout << "Masukkan jumlah kalori: ";
            cin >> calories;

            // buat food baru secara dinamis
            Food *f = new Food();
            f->setId(itemCounter++);
            f->setName(name);
            f->setPrice(price);
            f->setSpicyLevel(spicy);
            f->setCalories(calories);

            // tambahkan food ke order
            order.addItem(f);
        } 
        else if (type == 'd') {
            // input detail drink
            string size;
            bool cold;
            cout << "Masukkan nama minuman: ";
            cin >> ws;
            getline(cin, name);
            cout << "Masukkan harga: ";
            cin >> price;
            cout << "Masukkan size (Small/Medium/Large): ";
            cin >> ws;
            getline(cin, size);
            cout << "Apakah disajikan dingin? (1 = ya, 0 = tidak): ";
            cin >> cold;

            // buat drink baru secara dinamis
            Drink *d = new Drink();
            d->setId(itemCounter++);
            d->setName(name);
            d->setPrice(price);
            d->setSize(size);
            d->setType(cold ? "Cold" : "Hot");

            // tambahkan drink ke order
            order.addItem(d);
        }

        // tampilkan data order sementara
        cout << "\n=== DATA ORDER SEMENTARA ===" << endl;
        order.display();

        // tanya apakah mau tambah order lagi
        cout << "\nMau tambah order lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    // tampilkan order terakhir ketika loop selesai
    if (prevCustomer != "") {
        cout << "\n=== DATA ORDER SELESAI ===" << endl;
        order.display();
    }

    // akhir program
    cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}
