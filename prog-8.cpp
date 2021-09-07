#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter length:";
    cin>>a;
    cout<<"Enter breadth:";
    cin>>b;
    int area=a*b;
    int per=2*(a+b);
    int d=sqrt(a*a+b*b);

    cout<<"Diagonal= "<<d<<endl;
    cout<<"Area= "<<area<<endl;
    cout<<"Perimeter= "<<per;
    return 0;
}