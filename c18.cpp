#include<stdio.h>

int main(){
	int day; //m-mon;t-tues;w-wed;T-thur;f-fri;s-sat;S-sun;
	printf("Enter day:");
	scanf("%c",&day);
	switch(day) {
		case 'm' : printf("Monday \n");
		         break;
		case 't' : printf("Tuesday \n");
		         break;   
		case 'w' : printf("Wednesday \n");
		         break;
		case 'T' : printf("Thursday \n");
		         break;   
		case 'f' : printf("Friday \n");
		         break;   
		case 's' : printf("Saturday \n");
		         break;   
		case 'S' : printf("Sunday \n");
		         break;
		default: printf("Not a Valid day! \n");		    		 		 		 		    		       
	}
	
	
	return 0;
}