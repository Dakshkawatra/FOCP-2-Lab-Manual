#include<iostream>
using namespace std;
int main()
{
    int n,netsalary;
    cout<<"Enter no of enmpoyyes : ";
    cin>>n;
    int salary[n];
    cout<<"enter employee salary : ";
    for(int i=1;i<=n;i++)
    {  
    cin>>salary[i];
    
    }
    for(int i=1;i<=n;i++)
    {
         netsalary=salary[i]+(salary[i]*12/100);
         cout<<"Salary after 12% bonus : "<<netsalary<<endl;;
    }
    return 0;  
}