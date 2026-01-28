#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the value of N : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        cout<<"BUZZ FUZZ"<<endl;
        else if(i%3==0)
        cout<<"BUZZ"<<endl;
        else if(i%5==0)
        cout<<"FUZZ"<<endl;
        else
        cout<<i<<endl;
    }
    return 0;
}