#include <iostream>
#include<string>
using namespace std;
int main() {
	
		string s;
		int flag=1,i,j;
		cin>>s;
		
		for( i=0,j=s.length()-1;i<j;i++,j--)
		{
			if(s[i]!=s[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"YES";
		else
		cout<<"NO";
		return 0;	
}