#include<iostream>
using namespace std;
int main()
{
    int n,q;
    float p,amount,discount;
    cout<<"Enter Item Number : ";
    cin>>n;
    cout<<endl<<"Enter Quantity : ";
    cin>>q;
    cout<<endl<<"Enter Unit Price : ";
    cin>>p;
    amount=(q*p);

    discount=(80.0/100)*amount;
    cout<<"Total Amount : "<<amount<<endl;
    cout<<"Bill after 20% discount : "<<discount<<endl;
    return 0;

}