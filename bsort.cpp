#include<stdio.h>

int main(){
	int n;
	int a[n];
	printf("Enter n:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int k=0;k<=n;k++){
		for(int j=0;j<=n;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	for(int j=0;j<=n;j++){
		printf("%d",a[j]);
	}
	return 0;	
	
}