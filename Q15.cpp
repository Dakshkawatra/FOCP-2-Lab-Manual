#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"How many entries : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the entries : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"Maximum :"<<max<<endl;
    return 0;
}