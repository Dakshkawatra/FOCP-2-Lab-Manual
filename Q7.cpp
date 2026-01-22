#include<iostream>
using namespace std;
int main ()
{
    int n=3,score[n],i,winnerindex,maxscore;
    
    cout<<"Enter score of each player : ";
    for( i=0;i<=n-1;i++)
    {
        cin>>score[i];
      

    }
    for(i=0;i<=n-1;i++)
    {
        maxscore=score[0];
        if(score[i]>maxscore)
        {
            maxscore=score[i];
            winnerindex=i+1;
        }
    }
    cout<<"Player "<<winnerindex<<" Wins"<<endl;
}