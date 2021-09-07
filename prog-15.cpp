#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;
    char opr;
    cout<<"Enter operator + , - , * , / , % "<<endl;
    cin>>opr;

    switch(opr){
        case '+':
         cout<<"Addition= "<<a+b;
         break;
         case '-':
         cout<<"Subtraction= "<<a-b;
         break;
         case '*':
         cout<<"Multiplication= "<<a*b;
         break;
         case '/':
         cout<<"Division= "<<a/b;
         break;
         case '%':
         cout<<"Remainder= "<<a%b;
    }
    return 0;
}