#include "MenuItem.cpp"

// kelas drink adalah turunan dari menuitem
class Drink : public MenuItem {
private:
    string size; // ukuran minuman (small, medium, large)
    string type; // jenis minuman (hot / cold)

public:
    Drink() {}

    // setter dan getter untuk size
    void setSize(string size) { 
        this->size = size; 
    }
    string getSize() { 
        return size; 
    }

    // setter dan getter untuk type
    void setType(string type) { 
        this->type = type; 
    }
    string getType() { 
        return type; 
    }

    // override method printinfo dari parent
    // menampilkan informasi lengkap minuman termasuk size dan type
    void printInfo() override {
        MenuItem::printInfo();
        cout << " | Size: " << size
             << " | Type: " << type << endl;
    }
};
