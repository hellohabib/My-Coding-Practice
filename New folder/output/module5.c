#include <stdio.h>
#include <string.h>
int main(){
   //--------Start
   char hs[10000];
   scanf("%s", hs);

   char all[27];
   //int i;
   for(int i=0; i<26; i++){
      all[i]='a'+i;
      //printf("%c \n", all[i]);
   }
   //all[i]='\0';
   int k;
   int j;
   for(j=0; j<26; j++){
      
      int count=0;
      for(k=0; k<strlen(hs); k++){
         if(all[j]==hs[k]){            
            count++;
            //int cn=count;           
         }         
      }    
      if(count>0){
         printf("%c - %d \n", all[j], count);
      }
   }

   //--------End
   return 0;
}