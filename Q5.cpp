//                 //USING THIRD VARIABLE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10,b=5,temp;
//     temp =a;
//     a=b;
//     b=temp;
//    cout<<"a="<<a<<"b="<<b<<endl;
//     return 0;
// }
                //WITHOUT USING THIRD VARIABLE(subtraction/addition)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10,b=5;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"a="<<a<<"b="<<b<<endl;
//     return 0;
// }      
                //WITHOUT USING THIRD VARIABLE(MULTIPLICATION/DIVISION) 
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}                
