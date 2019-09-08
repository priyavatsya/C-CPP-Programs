#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
int i=0,j=0,max=0,len,len2;
int input[10];

cout<<"                                         SELECTION SORTING"<<endl<<endl<<endl;
cout<<"ENTER THE NUMBER OF ELEMENTS"<<endl;
cin>>len;
cout<<"ENTER THE ELEMENTS"<<endl;

len2=len;


for(i=0;i<len;i++)      //getting the input 
{
    cin>>input[i];
}

while(len)       
{

max=input[0];   //initializing the first element as max element

for(i=0;i<len;i++)  //this loop will find the max element and it's position
{
   if(input[i]>=max)
       {
           max=input[i];
           j=i;                    
        }
}


input[j]=input[len-1];
input[len-1]=max;


len--;
}
cout<<endl<<"RESULT:- ";


for(i=0;i<len2;i++)
{
    cout<<input[i]<<" ";
}





getch();
}