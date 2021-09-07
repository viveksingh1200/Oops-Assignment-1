#include<iostream>
using namespace std;

int main(){
    int y;
    cout<<"Enter year:";
    cin>>y;

    if(y%4==0){
        cout<<"Entered year is leap year";
    }
    else
    cout<<"Not a leap year";
    return 0;
}