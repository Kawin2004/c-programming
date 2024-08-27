#include <stdio.h>
#include<limits.h>

int main() {
int arr[100];
int N,sum,l;
printf("enter the size elements:");
scanf("%d",&N);
int a;
a=INT_MIN;


for(int i=1;i<=N;i++)

{
    scanf("%d",&arr[i]);
}

for(int j=1;j<=N;j++)
{
    if(arr[j]>a)
    {
    a=arr[j];
    }
  
    
}
printf("largest no:%d",a);

    return 0;
}
