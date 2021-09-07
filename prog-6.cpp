#include<iostream>
using namespace std;

int main(){
    int c,f;
    cout<<"Enter temperature in celsius: ";
    cin>>c;
    int ftemp=(c*9/5)+32;
    cout<<"Temperature in fahrenheight is: "<<ftemp<<endl;
    cout<<endl;
    cout<<"Enter temperature in fahrenheight:";
    cin>>f;
    int ctemp=(f-32)*5/9;
    cout<<"Temperature in celsius is: "<<ctemp<<endl;
    return 0;
}