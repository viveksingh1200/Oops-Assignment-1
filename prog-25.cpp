#include<iostream>
using namespace std;

int main(){
    int n,sum=0,digit;
    cout<<"Enter number: ";
    cin>>n;
    int count=0;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n=n/10;
        count++;
    }
    cout<<"The number of digits is: "<<count<<endl;
    cout<<"The sum of number is: "<<sum;
    return 0;
}