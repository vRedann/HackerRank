#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class HotelRoom{
    public:
        HotelRoom(int _bedrooms, int _bathrooms) : bedrooms(_bedrooms), bathrooms(_bathrooms){}
    virtual int getTotal(){
        return bedrooms * bedroomCost + bathrooms * bathroomCost;
    }
    private:
    int bedrooms;
    int bathrooms;
    const int bedroomCost = 50;
    const int bathroomCost = 100;
};

class HotelApartment : public HotelRoom{
    public:
    HotelApartment(int _bedrooms, int _bathrooms) : HotelRoom(_bedrooms, _bathrooms){}
    virtual int getTotal() override {
        return HotelRoom::getTotal() + 100;
    }
};

int main() {
    vector<HotelRoom> hr;
    vector<HotelApartment> ha;
    int sel = 0;
    cin >> sel;
    for(int i = 0; i < sel; i++){
        string name;
        cin >> name;
        if(name == "standard"){
            int bedroom = 0, bathroom = 0;
            cin >> bedroom >> bathroom;
            hr.push_back(HotelRoom(bedroom, bathroom));
        }
        else if(name == "apartment"){
            int bedroom = 0, bathroom = 0;
            cin >> bedroom >> bathroom;
            ha.push_back(HotelApartment(bedroom, bathroom));
        }
    }
    int total = 0;
    for(auto x : hr)
        total += x.getTotal();
    for(auto x : ha)
        total += x.getTotal();
    cout << total << endl;
    return 0;
}
