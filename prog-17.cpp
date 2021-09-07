#include<iostream>
using namespace std;
int swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}
int swapnum(int x,int y){
    x=x*y;
    y=x/y;
    x=x/y;
    cout<<"After swapping"<<endl;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
}
int main(){
    cout<<"With temporary variable"<<endl;
    int a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    swap(a,b);

    cout<<"Without using temporary variable"<<endl;
    int x,y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    swapnum(x,y);
    
    return 0;

}