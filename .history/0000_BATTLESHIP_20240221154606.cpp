#include <iostream>
using namespace std;
///vector
class Vector{
    private:
        int x;
        int y;
        int z;
    public:
        Vector(int x,int y){
            this->x=x;
            this->y=y;
        }
};
///Battlefield
class BAttleField{
public:
    
};



///Ship
class Ship{
    private:
        Vector Position;
        Vector Speed;//steps that can be taken ina given turn
        Vector Weapon_Range;//Effective firing range
        Vector Size;//space occupied
        int Weapon_Damage;
        int Health;
        string ShipType; 

};























