#include<iostream>
using namespace std;

int main(){
    int arr[5],sum=0,i=0;
    cout<<"Enter five number:";
    while(i<5){
       cin>>arr[i];
       sum+=arr[i];
       i++;
    }
    int avg;
    avg=sum/5;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Avearge = "<<avg<<endl;
    return 0;
}