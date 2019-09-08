/*   Spiral matrix
          

          ___________            sample input:- 5       
           ________  |
          |  _____ | |
          | |______| |                   output:-               1  2  3  4  5
          |__________|                                         16 17 18 19  6
                                                               15 24 25 20  7
                                                               14 23 22 21  8
                                                               13 12 11 10  9        */
         



#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

   
   int w=0,x,y,z=0,a=1,j=0,i=0,size;

   cout<<"Enter the order of the square matrix:- ";
   cin>>size;

   int ar[size][size]={};

   x=size-1;
   y=size-1;

   for(i=0;i<size-1;i++)
   
  {    for(j=z;j<=x;j++)
      {
         ar[z][j]=a++;
      }  w++;

      for(j=w;j<=y;j++)
      {
         ar[j][y]=a++;
      }  x--;

      for(j=x;j>=z;j--)
      {
         ar[y][j]=a++;
      } y--;

      for(j=y;j>=w;j--)
      {
         ar[j][z]=a++;
      } z++;


  }




for(i=0;i<size;i++)
{
   for(j=0;j<size;j++)
  { cout<<setw(3)<<ar[i][j];}
  cout<<"\n";
}
getch();

}