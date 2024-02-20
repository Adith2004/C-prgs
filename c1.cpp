#include<stdio.h>
#include<math.h>

int main(){
int a[3][3];
int b[3][3];
for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
   scanf("%d",a[i][j]);
   }
   }
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    b[i][j]=pow(a[i][j],2);
    printf("%d",b[i][j]);
    }
    printf("\n");
    }
    }
