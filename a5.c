//enter elements and do addition 
#include<stdio.h>
void main(){
    int iarr[5];
    
    printf("enter array elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&iarr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum =sum+iarr[i];
    }
    printf("addition of array elements are  %d\n",sum);

    }