#include "Vehicle.cpp"
using namespace std;
class Car : public Vehicle {
    public: 
    int numGears;
    void print(){
        cout<<"Num Tyres : "<< numTyres<<"\n";
        cout<<"Color : " << color<<"\n";
        cout<<"Number of Gears : " << numGears<<"\n";
        // cout<<"Max Speed : "<<maxSpeed;
    }
};
int main(){
    Car c;
    c.color = "Black";
    c.numGears = 5;
    c.numTyres = 10;
    c.print();
     
}