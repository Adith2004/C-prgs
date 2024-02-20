#include<stdio.h>

int main(){
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch >= 'a' && ch <= 'z'){
		printf("Lowercase");
		
	}
	else if(ch >= 'A' && ch <= 'Z'){
		printf("\nUppercase");
	}
	else{
		printf("Not an english letter");
	}
	return 0;
}