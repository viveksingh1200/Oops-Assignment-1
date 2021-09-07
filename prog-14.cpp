#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter character:";
    cin>>a;
    if(a>=65 && a<=90){
        cout<<"You have entered upper case"<<endl;
        char b=tolower(a);
        cout<<"lowercase= "<<b;
    }
    else if(a>=97 && a<=122){
        cout<<"You have entered lower case"<<endl;
        char c=toupper(a);
        cout<<"uppercase= "<<c;
    }
    else if(a>=48 && a<=57){
        cout<<"You have entered digit";
    }
    else
    cout<<"You have entered special character";
    return 0;
}