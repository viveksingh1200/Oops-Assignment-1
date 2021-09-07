#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    
    cout<<"Enter the number till which you want prime numbers\n";
    cin>>n;
    
    cout<<"Prime numbers are:-\n";    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            cout<<i<<" ";
        }
    }
}