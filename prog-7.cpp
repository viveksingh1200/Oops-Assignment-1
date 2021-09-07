#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d,x1,x2;
    cout<<"Enter coeffficient of x^2:";
    cin>>a;
    cout<<"Enter coeffficient of x:";
    cin>>b;
    cout<<"Enter constant value:";
    cin>>c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else
         cout<<"Roots are complex an different";
    return 0;
}