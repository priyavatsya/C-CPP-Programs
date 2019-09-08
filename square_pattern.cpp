/*    sample: input=5

      output:-           5 5 5 5 5 5 5 5 5
                         5 4 4 4 4 4 4 4 5
                         5 4 3 3 3 3 3 4 5
                         5 4 3 2 2 2 3 4 5 
                         5 4 3 2 1 2 3 4 5 
                         5 4 3 2 2 2 3 4 5 
                         5 4 3 3 3 3 3 4 5 
                         5 4 4 4 4 4 4 4 5            */

                         
#include <iostream>
#include<conio.h>

using namespace std;


int main() {

  int value;
  cin>>value;


 int count=value+(value-1);

for(int i=0;i<value;i++)
{
  for(int j=0;j<i;j++)
  cout<<value-j<<" ";

  for(int j=0;j<count;j++)
  {
    cout<<value-i<<" ";
  }

  for(int j=(value-i+1);j<=value;j++)
  cout<<j<<" ";

  count-=2;

cout<<endl;
}

int newcount=3;
for(int i=0;i<value-1;i++)
{
  for(int j=value;j>i+2;j--)
  cout<<j<<" ";


for(int j=0;j<newcount;j++)
cout<<i+2<<" ";


for(int j=i+3;j<=value;j++)
cout<<j<<" ";

newcount+=2;

  cout<<endl;
}

 return 0;
}

