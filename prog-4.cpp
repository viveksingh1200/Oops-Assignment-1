#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Enter Data structure marks: "<<endl;
    cin>>a;
    cout<<"Enter Descrete structure marks: "<<endl;
    cin>>b;
    cout<<"Enter Oops marks: "<<endl;
    cin>>c;
    cout<<"Enter Digital circuit marks: "<<endl;
    cin>>d;
    cout<<"Enter Java lab marks: "<<endl;
    cin>>e;

    int total=a+b+c+d+e;
    int percentage=(total*100)/500;
    cout<<"Total marks obtained is: "<<total<<endl;
    cout<<"Total percentage gained is: "<<percentage<<"%"<<endl;

    if(percentage>0 && percentage<=30){
        cout<<"Your grade is: C";
    }
    else if(percentage>30 && percentage<=60){
        cout<<"Your grade is: B";
    }
    else if(percentage>60 && percentage<=90){
        cout<<"Your grade is: A";
    }
    else if(percentage>90 && percentage<=100){
        cout<<"Your grade is: A+";
    }
    
    return 0;
}