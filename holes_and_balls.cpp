/*
     


  balls release from the top

       OOO>  
             \_
     holes:- 1 \_
          >   2  \_
            >   3  \_
               >  4  \                */






#include<iostream>
using namespace std;
int main()
{   double hole[55];
    int holecount[55];
    double ball[1100];
    int ballposition[1100];
    int holenum;
    int ballnum;
   int i=0,j=0;
   cin>>holenum;
   for(i=1;i<=holenum;i++)
    {cin>>hole[i];}
     
     cin>>ballnum;
   for(i=1;i<=ballnum;i++)
     {cin>>ball[i];}                                  
  for(i=1;i<=ballnum;i++)
    ballposition[i]=0;
  for(i=1;i<=holenum;i++)
    holecount[i]=0;
 for(i=1;i<=ballnum;i++)
    {for(j=holenum;j>0;j--)
        {if((hole[j]>=ball[i])&&(holecount[j]<j))                                                                       
            {holecount[j]++;
            ballposition[i]=j;
            break;}}
            if(j==0)
         {ballposition[i]=0;}}
cout<<endl;
for(i=1;i<=ballnum;i++)
     {cout<<ballposition[i]<<" ";}
     return 0;
}

