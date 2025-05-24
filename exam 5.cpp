#include<stdio.h>
#include<string.h>

  struct house
  {
  
        int room;
        int year;
        char city[50];
        int floor;
        
};

int main()
 {
 	
 	printf("house detailes:\n\n");
 	
        struct house s1;
         s1.room=3;
         s1.year=2025;
       strcpy (s1.city, "surat");
         s1.floor=2;
        	
        	printf("room:%d\nyear:%d\ncity:%s\nfloor:%d\n",s1.room,s1.year,s1.city,s1.floor);
}
/*
house detailes:

room:3
year:2025
city:surat
floor:2
*/

