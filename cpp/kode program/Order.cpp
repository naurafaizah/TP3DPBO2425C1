#include <iostream>
#include <vector>
#include "Food.cpp"
#include "Drink.cpp"
using namespace std;

// kelas order merepresentasikan sebuah pesanan
class Order {
private:
    int orderId;             // id unik untuk order
    string customerName;     // nama customer
    string status;           // status order (misalnya: pending, completed)
    vector<MenuItem*> items; // daftar menu yang dipesan (relasi has-a)

public:
    Order() {}

    // setter dan getter untuk order id
    void setOrderId(int orderId) { 
        this->orderId = orderId; 
    }
    int getOrderId() { 
        return orderId; 
    }

    // setter dan getter untuk customer name
    void setCustomerName(string customerName) { 
        this->customerName = customerName; 
    }
    string getCustomerName() { 
        return customerName; 
    }

    // setter dan getter untuk status
    void setStatus(string status) { 
        this->status = status; 
    }
    string getStatus() { 
        return status; 
    }

    // method untuk menambahkan item ke dalam order
    void addItem(MenuItem* item) {
        items.push_back(item);
    }

    // method untuk menampilkan detail order
    void display() {
        cout << "Order ID: " << orderId 
            << " | Customer: " << customerName 
            << " | Status: " << status << endl;

        // jika belum ada item, tampilkan pesan
        if (items.empty()) {
            cout << "order masih kosong!" << endl;
            return;
        }

        // tampilkan semua item yang ada dalam order
        // menggunakan polymorphism agar sesuai dengan tipe objek (food/drink)
        for (auto item : items) {
            item->printInfo();
        }
    }
};
