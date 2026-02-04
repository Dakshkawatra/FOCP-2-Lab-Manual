#include<iostream>
using namespace std;
int main()
{
    int items,price,discount;
    cout<<"Enter the no of items you bought : ";
    cin>>items;
    cout<<"Enter the amount :";
    cin>>price;
    discount=price-0.1*(price);
    if(items>1000)
    {
        cout<<"You got 10% discount on your total expense "<<endl;
        cout<<"Total expense"<<price<<endl;
        cout<<"Expense after applying discount :"<<discount<<endl;
    }
    else
    {
    cout<<"You did not get any discount"<<endl;
    cout<<"Total expense"<<price<<endl;
    }
    return 0;
}