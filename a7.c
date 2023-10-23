//Assigning Array to an Array

#include<stdio.h>
void main(){
    int arr1[3];

     arr1[0]=10; 
     arr1[1]=20;
     arr1[2]=30;  
    printf("array 1:\n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr1[i]);
    }

    int arr2[3];
    //arr2 = arr1;
    for(int i=0;i<3;i++){
         arr2[i]=arr1[i]+10; //for incrementing the values by 10
         arr2[i]=arr1[i]+10;
         arr2[i]=arr1[i]+10; 
    }
    printf("array 2:\n");
     for(int i=0;i<3;i++){
     printf("%d\n",arr2[i]);
     }
}