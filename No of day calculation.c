#include<stdio.h>


int calculation(int getno){  //paramiter
	
	int no,year,month,week,day;
	no=getno;
	
	year = no/365;
	month =no%365/30;
	week = no%365%30/7;
	day = no%365%30%7/1;
	
	printf("Number of Year:%d\n",year);
	printf("Number of month:%d\n",month);
	printf("Number of week:%d\n",week);
	printf("Number of day:%d",day);
	
}


int main(){
	
	int number;
	
	printf("Enter the number of Days:");
	scanf("%d",&number);
	
	calculation(number);  // user enter number of days pass the calcultation subfnction
}
