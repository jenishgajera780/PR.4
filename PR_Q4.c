#include<stdio.h>

void main(){

int i,j,m,d;

       printf("Enter the size of Row =   ");
       scanf("%d",&i);

       printf("Enter the size of column =   ");
       scanf("%d",&j);

int a[i][j];

       printf("Enter the array A's elements\n");
   
for(m=0;m<i;m++){
   for(d=0;d<j;d++){
    
       printf("a[%d][%d] =  ",m,d);
       scanf("%d",&a[m][d]);}}

int p,q,sum=0,o=0;
       
       printf("Enetr row number : ");
       scanf("%d",&p);

       printf("Elements of row %d: ",p);
   
    for(m=0;m<i;m++){
    if(m==p){
    for(d=0;d<j;d++){ 
    
       printf("%d ",a[m][d]);
            
sum = sum + a[m][d]; } } }
     
      printf("\nThe sum of %d row is : %d\n",p,sum );

      printf("Enter the column number : ");
      scanf("%d",&q);

      printf("Elements of coloum %d: ",q);

for(d=0;d<j;d++){
 if(d==q){
for(m=0;m<i;m++){ 
    
        printf("%d ",a[m][d]);
       
        
        o = o + a[m][d];
      
          }
    }
}

printf("\nThe sum of %d raw is : %d",q,o);

}