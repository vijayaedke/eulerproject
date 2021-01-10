/*
You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int daysOfWeek = 3; // Wednesday 1st Jan, 1901 
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sundayCount=0;
	
	for(int year=1901; year<=2000; year++){
	   //printf("Year %d", year);
	   //check for leap year
	   if( (year%4==0) || (year %100 ==0 && year%400==0) ){
	        months[1] = 29;
	       // printf("leap year");
	   }
	   
	   for(int i=1;i<=12;i++){
	       //add the days of previous month to get current month day. Eg: 1st Jan, 1900 falls on Monday(1 = daysOfWeek), 
	       //hence 1st Feb occurs on (1-8-15-22-29) 29 + 3 = 1 st Feb on thursday (4 = daysOfWeek).
	       //Since weeks consists of 7 days, daysOfWeek(3) + current_month % 7 = current_month day.
	       daysOfWeek = daysOfWeek + (months[i-1]) % 7;
	       if(daysOfWeek > 7)
	            daysOfWeek = daysOfWeek % 7;
	       else if(daysOfWeek == 7)
	            sundayCount++;
	   }//for
	}//for
	
	printf("Sunday count %d", sundayCount);
	
	return 0;
}

//output:
//Sunday count 171
