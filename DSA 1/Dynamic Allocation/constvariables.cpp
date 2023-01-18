#include <iostream>
using namespace std;
int main()
{
    const int i = 10; // A constant variable needs to be initialized at the time of declatration...
                      // i=1; Error as const variable can't be changed...

    /* int const i=10;
       const int i=10;
       Both are same...
       */

    // Const reference from a non const int.
    int j = 12;
    const int &k = j;
    //  k++;
    //  j++;
    cout << j << endl;
    cout << k << endl;

    //Const reference from a const int 
    // int cosnt j2=12;
    // int const &k2=j2;

    //reference from a const integer...
    int const j3=123;
    int &k3 = j3; //Not allowed...

}