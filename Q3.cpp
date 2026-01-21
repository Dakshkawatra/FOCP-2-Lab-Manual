#include<iostream>
using namespace std;
int main()
{
    float T,y;
    char x;
    cout<<"In which unit you want to convert"<<endl<<"If Celsius to Fahernite then press 'F' "<<"If Fehernite to Celsius then press 'c : ";
    cin>>x;
    cout<<"Enter Temperature : ";
    cin>>T;
   
    
    if(x=='F'||'f')
    {
      y=(T*9/5.0 )+32;
      cout<<"celsius="<<T<< "fahernite="<<y<<endl;
      
     
    }
    else if(x=='C'||'c')
    {
        y=(T-32)*5.0/9;
        cout<<"fahernite="<<T<<"celsius="<<y<<endl;
    }
    else
    cout<<"You entered the wrong input"<<endl;
    return 0;
} 