#include "MenuItem.cpp"

// kelas food adalah turunan dari menuitem
class Food : public MenuItem {
private:
    int spicyLevel;   // tingkat kepedasan makanan
    int calories;     // jumlah kalori makanan

public:
    Food() {}

    // setter dan getter untuk spicy level
    void setSpicyLevel(int spicyLevel) { 
        this->spicyLevel = spicyLevel; 
    }
    int getSpicyLevel() { 
        return spicyLevel; 
    }

    // setter dan getter untuk calories
    void setCalories(int calories) { 
        this->calories = calories; 
    }
    int getCalories() { 
        return calories; 
    }

    // override method printinfo dari parent
    // menampilkan informasi lengkap makanan termasuk spicy level dan calories
    void printInfo() override {
        MenuItem::printInfo();
        cout << " | Spicy Level: " << spicyLevel
             << " | Calories: " << calories << endl;
    }
};
