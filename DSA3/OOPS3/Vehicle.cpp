#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    private : 
    int maxSpeed;
    protected:
    // Protected members can only be accessed through object of the child class...
    int numTyres;
    public:
    string color;
};

// int main(){
//     Vehicle v;
//     v.color = "Blue";
//     // v.maxSpeed = 100;
//     // v.numTyres = 4;

// }