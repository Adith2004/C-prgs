#include<stdio.h>

int main(){
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	printf("%d",a>9 && a<100);
	return 0;
}