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

cin>>ns;
struct snakee snake[ns];

   for(int i=0;i<ns;i++)
   cin>>snake[i].head>>snake[i].tail;

cout<<endl;


cin>>nl;
struct ladderr ladder[nl];

   for(int i=0;i<nl;i++)
   cin>>ladder[i].start>>ladder[i].end;
cout<<endl;

cin>>np;
struct players player[np];

   for (int i=0;i<np;i++)
   { cin>>player[i].name;
     player[i].pos=0; }


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