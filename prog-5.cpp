#include<iostream>
using namespace std;

int main(){
    int P,T,R;
    cout<<"Enter principal amount:";
    cin>>P;
    cout<<"Enter time period:";
    cin>>T;
    cout<<"Enter rate of intrest:";
    cin>>R;

    int si=(P*T*R)/100;
    int ci=P*(1+(R/100))^T;
    cout<<"The simple intrest is: "<<si<<endl;
    cout<<"The compound intrest is: "<<ci;
    return 0;
}