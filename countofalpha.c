#include <stdio.h>
#define MAX_SIZE 100
int main() {
  char str[MAX_SIZE];
  int alpha,no,other,i;
  alpha=no=other=i=0;
  printf("enter the string:");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
      alpha++;
      }
      else if(str[i]>='0'&&str[i]<='9'){
      no++;
      }
      else
      {
          other++;
      }
  }
      printf("no of alpha:%d",alpha);
      printf("\n no of no:%d",no);
      printf("\n no of others:%d",other);
      
      
      
  

    return 0;
}
