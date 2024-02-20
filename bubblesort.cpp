#include<stdio.h>
int main(){
	int n;
	int a[5];
	printf("Enter size of array:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int j=0;j<=n;j++){
		printf("%d,",a[j]);
	}
	return 0;
	
}