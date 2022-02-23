//Time function

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;

class Time
{
    public:
    
    int hour,mint,sec;
   
   void setTime()
   {
       time_t tt;
       struct tm *ti;
       time (&tt);
       ti = localtime (&tt);
      
      cout <<asctime(ti) <<endl;
     cout <<"Hour" << (5+ti->tm_hour)%24 <<endl;
     cout <<"Mint" << (30+ti->tm_min) <<endl;
     cout <<"Hour" << (ti->tm_sec) <<endl;
     
     //asinging values to local variable
     
     hour = (5+ti->tm_hour)%24;
     mint = 30+ti->tm_min;
     sec = ti->tm_sec;
   }
   
   Time getTime()
   {
       Time temp;
       temp.hour = hour;
       temp.mint = mint;
       temp.sec = sec;
       return temp;
   }
   
   Time sleepTime(Time naptime, Time wakeup)
   {
       Time temp;
       temp.hour = wakeup.hour - naptime.hour;
       temp.mint = wakeup.mint - naptime.mint;
       temp.sec = wakeup.sec - naptime.sec;
       return temp;
   }
   
   Time sleepattime(Time naptime,Time wakeup)
   {
       Time temp;
       temp.hour = wakeup.hour - naptime.hour;
       temp.mint = wakeup.mint - naptime.mint;
       temp.sec = wakeup.sec - naptime.sec;
       return temp;
   }
};
       
       
   int main()
   {
       
       Time t1,t3;
       Time timeatsleep, timeatwake;
       t1.setTime();
       t3 = t1.getTime();
       cout << "Values returned from gettime\n";
       cout << "Hour: " << t3.hour <<"Mint: " << t3.mint <<"sec: " <<t3.sec <<endl;
       cout <<"Calculating sleep time" <<endl;
       
//read time before sleep
    t1.setTime();
    timeatsleep = t1.getTime();
//goto sleep
    sleep(4);
//read time after waking wakeup
    t1.setTime();
    timeatwake = t1.getTime();
//find difference
    t3 = t1.sleepTime(timeatsleep,timeatwake);
    cout <<"Time spent sleeping" <<endl;
    cout <<"Hour: " << t3.hour << "Mint: " << t3.mint << "sec: " << t3.sec <<endl;
    return 0;
   }
   
