#include<stdio.h>
void main()
{ 
  int total_min,hours, minutes,total_hr;
  
  
  hours=4;
  minutes=420;
  total_min= hours*60+minutes;
  total_hr= minutes/60;
  
  printf("  %d in minutes\n",total_min);
  printf("%d in hours " ,total_hr);
}
    
 
