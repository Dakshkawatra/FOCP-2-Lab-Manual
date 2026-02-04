#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year%400==0)
    cout<<"Year is a leap year and february has 29 days "<<endl;
    else if(year%100==0)
    cout<<"Year is not a leap year and february does not have 29 days"<<endl;
    else if(year%4==0)
    cout<<"Year is a leap year and february has 29 days "<<endl;
    else
    cout<<"Year is not a leap year and february does not have 29 days"<<endl;
    return 0;
    
}