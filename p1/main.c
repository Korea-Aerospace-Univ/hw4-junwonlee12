#include <stdio.h>

int main()
{
    int a,b=5;
   do{
       scanf("%d",&a);
     if(a<b){
       printf("a<?");
        
     }  
     
     else if(a>b){
         printf("a>?");
     }
     else{
         printf("%d\n",b);
         printf("%d==?",b);
     }
        
          
   }while(a);

    return 0;
}
