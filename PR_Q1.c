#include<stdio.h>

void main (){

int k,o;

    printf("Enter array size =  ");
    scanf("%d",&o);

int a[o];
 
    printf("Enter array A's elemets \n");
    
    for(k=0;k<o;k++)
    
    {
        
    printf("a[%d]= ",k);
    scanf("%d",&a[k]);
      
    }

    printf("The negative elemets is : ");
    for(k=0;k<o;k++)
     
    {
    
    
    if(a[k]<0)
    
    {
       
         printf("%d",a[k]);
       
         }
         }
}