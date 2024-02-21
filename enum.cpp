#include<bits/stdc++.h>
using namespace std;


enum day_of_week { sun,mon,tue,wes,thu,fri,sat};

int main()
{
  day_of_week day1,day2;
  day1=mon;
  day2=thu;
  
  
  int diff=day2-day1;
  cout<<"Days between ="<<diff<<endl;
  if(day1<day2)
     cout<<"day 1 comes before day2\n";
  return 0;	
}
