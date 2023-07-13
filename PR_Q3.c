#include<stdio.h>

void main(){
int g,o,c;
int sum=0;

printf("type size of Row & colum :- ");
scanf("%d",&g);

int a[g][g];

printf("type array's elements\n");


for(o=0;o<g;o++){
for(c=0;c<g;c++){
    
printf("a[%d][%d]= ",o,c);
scanf("%d",&a[o][c]);
   
}
}

for(o=0;o<g;o++){
for(c=0;c<g;c++){
   
printf("%d",a[c][o]); 
}
printf("\n");
}
}