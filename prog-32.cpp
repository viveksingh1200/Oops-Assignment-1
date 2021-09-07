#include<iostream>
using namespace std;

int main(){
    int income;
    cout<<"Enter income per month:";
    cin>>income;
    int inc_per_day=income/30;
    cout<<"Income per day is: "<<inc_per_day;
    return 0;
}