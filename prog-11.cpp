#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number:";
    cin>>a;

    if(a%2==0){
        cout<<"Number is even";
    }
    else if(a%2==!0){
        cout<<"Number is odd";
    }
    return 0;
}