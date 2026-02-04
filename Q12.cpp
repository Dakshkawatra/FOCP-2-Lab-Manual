#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter the 1st side : ";
    cin>>s1;
    cout<<"Enter the 2nd side : ";
    cin>>s2;
    cout<<"Enter the 3rd side : ";
    cin>>s3;
    if(s1==s2 && s2==s3)
    cout<<"The triangle is equilateral"<<endl;
    else if(s1==s2 ||s1==s3 ||s2==s3)
    cout<<"The triangle is isosceles"<<endl;
    else
    cout<<"The triangle is scalene"<<endl;
    return 0;
}