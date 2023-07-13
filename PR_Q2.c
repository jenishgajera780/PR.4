#include<stdio.h>

void main()

{

int o,l,i,p;
int sum=0;

 printf("Enter the array's row size :- ");
 scanf("%d",&l);
   
 printf("EEnetr the array's colum size :- ");
 scanf("%d",&o);

 int a[l][o];

    
    for(i=0;i<l;i++)
 {
    for(p=0;p<o;p++)
 {
    printf("a[%d][%d] : ",i,p);
    scanf("%d",&a[i][p]);
       
 }
 }

    for(i=0;i<o;i++)
    {
    for(p=0;p<o;p++)
    {
    if(a[i][p]>sum)
    {
    sum = a[i][p];
    }
    }
    }

    printf("Max number :- %d",sum);
}