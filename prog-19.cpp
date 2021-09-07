#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    int area=l*b;
    int rect=2*(l+b);
    float diag=sqrt((l*l)+(b*b));

    cout<<"Enter 1 for area:"<<endl;
    cout<<"Enter 2 for rectangle"<<endl;
    cout<<"Enter 3 for diagonal"<<endl;
    int a;
    cin>>a;
    if(a==1){
        cout<<area<<endl;
    }
    else if(a==2){
        cout<<rect<<endl;
    }
    else if(a==3){
        cout<<diag<<endl;
    }
    else
    cout<<"Wrong input";
    return 0;
}