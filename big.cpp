#include<stdio.h>
int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

int main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	isPrime(n);
	isArmstrong(n);
	isPerfect(n);
	return 0;
	
}

int isPrime(int n){
	int prime=0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			prime=1;
		}
	}
	if(prime==1){
		printf("Prime number");
	}
	else{
		printf("Not prime");
	}
	return prime;
}

int isArmstrong(int n){
	int r,c,arm=0;
	c=n;
	while(n>0){
		r=n%10;
		arm=r*r*r+arm*10;
		n=n/10;
	}
	if(c==arm){
		printf("Is Armtrong");
	}
	else{
		printf("Not Armstrong");
	}
	return arm;
}

int isPerfect(int n){
	int sum=0,j=1;
	if(j=1;j<=n;j++){
		if(n%j==0){
			sum=sum+j;
		}
	}
	if(n==sum){
		printf("Perfect number");
	}
	else{
		printf("Not perfect");
	}
	return sum;
}