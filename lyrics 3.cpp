#include<iostream>
#include<windows.h>
using namespace std;
void downtime(string time)
{
 for(int y=0; y< time.length();y++)
 {
     cout<<time[y];
    Sleep(1000);
    system("cls");

 }
system("cls");

}
void chronixx(   const string  lyrics,int pausetime,  int nxtlinetime)
{
  for( int i=0; i < lyrics.length(); i++)
  {
     cout<<lyrics[i];
  Sleep(pausetime);
  }

  Sleep(nxtlinetime);
}
int main ()
{
downtime("5") ;cout<<endl;
downtime("4" );cout<<endl;
downtime("3");cout<<endl;
downtime("2");cout<<endl;
downtime("1");cout<<endl;
system("cls");
chronixx("hey  my friend this is a  lyrics app made by Bancushi with c++",100,100 );
cout<<endl;
chronixx("-----------------------------------------------------------",10,100 );
system("cls");

chronixx("CAN YOU HERE  ME WHAT I SAY ,",100,660 );
cout<<endl;
chronixx(" PUT YOUR LIGHTER IN THE AIR ,  MMH ,  LIGHTER IN THE AIR ",100,660);
cout<<endl;
chronixx("THEN' I REMEMBER ITS SMOOTH LIKE A WHISTLE  ",100,600);
system("cls");
cout<<"THANK YOU AM STILL WORKING ON IT ";
    return 0;
}
