/*Tyler Allen
CS111
3-10-15
Lab 8-1
This program will simulate a game of craps.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  srand(time(0));
  const int NUM_GAMES =100000;
  int numWin=0;
  int numLose=0;
  for(int i=1;i<=NUM_GAMES;i++)
    {
 int roll = (rand()%6+1)+(rand()%6+1);
       int roll2;     
       if(roll==2||roll==3||roll==12)
	 {
	   numLose++;
	 }
       else if(roll==7||roll==11)
	 {
	   numWin++;
	 }
       else
	 {
	   
	   roll2=(rand()%6+1)+(rand()%6+1);
	   while(roll2!=7&&roll2!=roll)
              {
                roll2=(rand()%6+1)+(rand()%6+1);
	      }
	    if(roll2==7)
	      {
	        numLose++;
	      }
	    else if(roll2==roll)
	      {
     	        numWin++;
	      }
	 }
    }
  cout<<setw(6)<<"win%"<<setw(7)<<"lose%"<<endl;
  cout<<left<<setw(6)<<fixed<<setprecision(3)<<(double)numWin/NUM_GAMES*100;
  cout<<right<<setw(7)<<fixed<<setprecision(3)<<(double)numLose/NUM_GAMES*100;

       return 0;
}
