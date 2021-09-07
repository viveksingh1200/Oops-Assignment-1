#include<iostream>
using namespace std;

int main(){
    int k=5;
    for(int i=0;i<5;i++){
        for(int j=k;j>0;j--){
            cout<<j<<" ";
        }
        k=k-1;
        cout<<endl;
    }
    return 0;
}