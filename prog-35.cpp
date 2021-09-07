#include<iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter time in seconds:";
    cin>>t;
    int min=t/60;
    int hr=t/3600;

    cout<<"Time in minutes: "<<min<<" min"<<endl;
    cout<<"Time in hour: "<<hr<<" hr";
    return 0;
}