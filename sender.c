//// Online C compiler to run C program online
//void sender(char s[],int length );
//#include <stdio.h>
//
//
//int main() {
//   char s[10]={'w','e','l','c','o','m','e'};
//   int i,length=6,size=10;
//   for(i=0;i<='\0';i++){
//   printf("%s",s);
//   }
//   printf("\n");
//   sender(s,length);
//   
//    return 0;
//}
//void sender(char s[],int length){   
//    int i;
//   int size=10;
//   char temp;
//    while(length>=1){
//         temp=s[length+1];
//         s[length+1]=s[length];
//         s[length]=temp;	
//         length--;
//         printf("i=%d\n",s[length]);  
//	 }  
//	
//
//}
//// Online C compiler to run C program online
//void sender(char s[],int length );
//#include <stdio.h>
//
//
//int main() {
//   char s[10]={'w','e','l','c','o','m','e'};
//   int i,length=6,size=10;
//   for(i=0;i<='\0';i++){
//   printf("%s",s);
//   }
//   printf("\n");
//   sender(s,length);
//   
//    return 0;
//}
//void sender(char s[],int length){   
//    int i;
//   int size=10;
//   char temp;
//    while(length>=1){
//         temp=s[length+1];
//         s[length+1]=s[length];
//         s[length]=temp;	
//         length--;
//         printf("i=%d\n",s[length]);  
//	 }  
//	
//
//}
 #include<stdio.h>
 void main(){
 	char input[10],sender[30];
 	printf("Enter String :");
 	scanf("%s",input);
 	int k;
 	for( k=0;k!='\0';k++){
 	    printf("%s",input[k]);
 	}
//  	int i=0,j=0;
//  	sender[j]='@';
//  	j++;
//  	while(input[i]!='\0'){
//  		if(input[i]=='@'||input[i]=='$'){
//  			sender[i]='$';
//  			i++;
//  			sender[j]=input[i];
//  			i++;
//  			j++;
// 		 }
// 		 else{
// 		 	sender[j]=input[i];
//  			j++;
//  			i++;
// 		 }
// 	 }
 }

