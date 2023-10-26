#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100],dest[100];
     char patt[6]={'0','1','1','1','1','1'};
  
    
     int i=0,j;
     int k=0,count=0;
     printf("Enter bits:");
     scanf("%s",str);
    int strlength=strlen(str);
    for(i=8;i<(strlength-8);i++)
    {
      if(str[i]==patt[k])
      {
          count++;
          k++;
       }
    else
        count=0;
    dest[j++]=str[i];

    if(count==6)
    {
         dest[j]=str[i++];
        count=0;
    }
}
     dest[j] ='\0'; 
    
   printf("%s",dest);
return 0;
}
