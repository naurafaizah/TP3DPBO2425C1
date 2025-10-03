#ifndef MENUITEM_CPP
#define MENUITEM_CPP

#include <iostream>
#include <string>
using namespace std;

// kelas menuitem sebagai parent untuk food dan drink
class MenuItem {
protected:
    int id;         // menyimpan id item
    string name;    // menyimpan nama item
    int price;      // menyimpan harga item

public:
    MenuItem() {}

    // setter dan getter untuk atribut id
    void setId(int id) { 
        this->id = id; 
    }
    int getId() { 
        return id; 
    }

    // setter dan getter untuk atribut name
    void setName(string name) { 
        this->name = name; 
    }
    string getName() { 
        return name; 
    }

    // setter dan getter untuk atribut price
    void setPrice(int price) { 
        this->price = price; 
    }
    int getPrice() { 
        return price; 
    }

    // method virtual untuk menampilkan informasi item
    // bisa dioverride di class turunan (polymorphism)
    virtual void printInfo() {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Price: " << price;
    }
};

#endif
