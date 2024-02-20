#include<stdio.h>

int main(){
	int a[5];
	for(int i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	for(int k=0;k<=4;k++){
		for(int j=0;j<=4;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	for(int j=0;j<=4;j++){
			printf("%d",a[j]);
		}
	
}