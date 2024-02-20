#include<stdio.h>
int main()
{
	int n,A[20],i;
	printf("Enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number");
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			printf("%d\t",A[i]);
		}
	}
}