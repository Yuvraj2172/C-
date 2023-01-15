#include "template.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Pair<Pair<int,int> , int> p2;
    p2.setY(10);
    Pair <int , int> p4;
    p4.setX(15);
    p4.setY(16);
    p2.setX(p4);
    cout<<p2.getY()<<endl;
     cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<endl;
     Pair<Pair<int,double>, char> p5;
     Pair<int, double> p6;
     p6.setX(18);
     p6.setY(20.23);
     p5.setX(p6);
     p5.setY('a');
     cout<<"character : "<< p5.getY()<<endl;
     cout<<p5.getX().getX()<<" "<<p5.getX().getY()<<endl;
    // cout<<p2.getX()<<endl;
    // Pair<int> p1;
    // p1.setX(10);
    // p1.setY(20.9);
    // cout<<p1.getX()<<"\n";
    // cout<<p1.getY()<<"\n";
    // Pair<float> p2;
    // p2.setX(2);
    // p2.setY(30.32);
    // cout<<p2.getX() + p2.getY()<<endl;
    // Pair<char> p3;
    // p3.setX(97);
    // p3.setY(56);
    // cout<<p3.getX()<<" "<<p3.getY()<<endl;
}
