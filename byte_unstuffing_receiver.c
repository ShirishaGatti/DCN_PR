#include <stdio.h>

int main() {
  char str[100];
  char dest[100];
  int i=0,j=0;
  printf("Enter string:");
  scanf("%s",str);
  while(str[i]!='\0')
  {
          if(str[i]=='#'||str[i]=='@')
          {
              i++;
              dest[j]=str[i];
              j++;
              i++;
              
          }
          else
          {
              dest[j]=str[i];
              j++;
              i++;
          }
      
      
  }
  
  str[i]='\0';
  printf("%s",dest);
   
   
    return 0;
}
