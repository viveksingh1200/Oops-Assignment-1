#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
         fact*=i;
    }
    cout<<"Fctorial is: "<<fact;
    return 0;
}