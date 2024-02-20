#include<stdio.h>

int main(){
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	marks<=30 ? printf("Fail\n"):printf("Pass");
	return 0;
}