#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter num1"<<endl;
    cin>>a;
    switch(a%2){
        case 0:
          cout<<"Number is even"<<endl;
          break;
          case 1:
          cout<<"Number is odd"<<endl;
    }
    cout<<"Enter num2"<<endl;
    cin>>b;
    switch(a%b){
        case 0:
        cout<<"num1 is divisible by num2";
        break;
        default:
        cout<<"num1 is not divisible by num2";
    }
    return 0;
}