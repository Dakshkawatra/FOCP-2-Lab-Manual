#include<iostream>
using namespace std;
int main()
{
    int n,flag=1;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<=1)
    {
    cout<<"The number is not prime "<<endl;
    return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout<<"The number is prime"<<endl;
    else
    cout<<"The number is not prime"<<endl;
    return 0;
}