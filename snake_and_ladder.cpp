//SNAKE AND LADDER//


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct snakee
{
    int head;
    int tail;
};

struct ladderr
{
    int start;
    int end;
};

struct players
{
    string name;
    int pos;
};

int main()
{
int ns,nl,np,dice,init;
cout<<"Enter number of snakes:- ";
cin>>ns;
struct snakee snake[ns];

   for(int i=0;i<ns;i++)
   {    
       cout<<"Snake "<<i+1<<" head position:- "
       cin>>snake[i].head;
       cout<<"tail position:- ";
       cin>>snake[i].tail;
       cout<<endl;
   }
cout<<endl;

cout<<"Enter number of Ladders:- ";
cin>>nl;
struct ladderr ladder[nl];

   for(int i=0;i<nl;i++)
   {   cout<<"ladder "<<i+1<<" start position:- ";
       cin>>ladder[i].start;
       cout<<"end position:- ";
       cin>>ladder[i].end;
       cout<<endl;
    
   }
    
cout<<endl;
cout<<"Enter no of players:- ";
cin>>np;
struct players player[np];

   for (int i=0;i<np;i++)
   {   cout<<"Name of "<<i+1<<" player:- ";
       cin>>player[i].name;
     player[i].pos=0; }

cout<<endl<<"    !!!!!!!  GAME started  !!!!!!!!";
    
srand(time(0)); 

while(1)
{

for(int i=0;i<np;i++)
{   
     init=player[i].pos;
     dice=(rand()%6)+1;

    if(player[i].pos+dice<=100)
    {player[i].pos=player[i].pos+dice;
     
    for(int j=0;j<nl;j++)
    {
        if(ladder[j].start==player[i].pos)
        {
            player[i].pos=ladder[j].end;
        }
    } 

    for(int j=0;j<ns;j++)
    {
        if(snake[j].head==player[i].pos)
        {
            player[i].pos=snake[j].tail;
        }
    }
     

    cout<<player[i].name<<" rolled a "<<dice<<"and moved from "<<init<<" to "<<player[i].pos<<endl;

    if(player[i].pos==100)
    { cout<<endl<<endl<<player[i].name<<" wins !!!";
        goto ab;
    }
 }}

ab:
return 0;
}
