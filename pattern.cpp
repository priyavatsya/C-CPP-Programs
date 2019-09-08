/*  pattern

sample input:- 5

output:-  102030405026027028029030
          **6070809022023024025
          ****10011012019020021
          ******13014017018
          ********15016           */


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int n;
int copy=0,copy2=0,sum=0,k=0,j=0,i=0,y=0,x=0,t=0,h=0;
cin>>n;
copy=n;
copy2=n-1;
sum=n*(n+1);
y=sum-(n-1);
x=1;
for(i=0;i<n;i++)
{for(h=0;h<t;h++)
  {cout<<"*";}
 t=t+2;
  for(k=1;k<=(copy-i);k++)
  {cout<<x<<"0";
      x++;}
for(j=y;j<=(y+copy2);j++)
{
    cout<<j<<"0";
}
y--;
copy2--;
y=y-copy2;
cout<<"\b \b";
cout<<endl;
}

getch();;
}