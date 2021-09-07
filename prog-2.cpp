#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter radius: ";
    cin>>r;

    float area=3.14*r*r;
    float perimeter=2*3.14*r;

    cout<<"Area is: "<<area<<endl;
    cout<<"Perimeter is: "<<perimeter<<endl;
    return 0;
}