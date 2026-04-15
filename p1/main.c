#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&b);
   do{
       scanf("%d",&a);
     if(a<b){
       printf("a<?\n");
        
     }  
     
     else if(a>b){
         printf("a>?\n");
     }
     else{
         printf("%d\n",b);
         printf("%d==?",b);
     }
        
          
   }while(a!=b);

    return 0;
}
