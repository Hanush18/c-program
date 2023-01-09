#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :");
   scanf("%d",&n);
   printf("Enter names in any order:");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   int ch;
   printf("Choose an order :\n1=Ascending\n2=decending\n");
   scanf("%d",&ch);
   if(ch==1){
   printf("Ascending order :\n");
   for(i=0;i<n;i++){
      printf("%s ",str[i]);
   }
}
else{
	printf("Decending Order :\n");
   for(i=n-1;i>=0;i--){
      printf("%s ",str[i]);
   }
}
}

