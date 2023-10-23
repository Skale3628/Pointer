//pointer to array 

#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int *ptr1=arr;  //it only store address of one element of an array
    //int *ptr=&arr; //as it cannot store address of all elements of an array
    //int *ptr2[5]=&arr;   //invalid initilizer
    int *ptr2=&arr[2];
    int (*ptr3)[5]=&arr;    //correct form to ptint address of all elements of an array
   
    //int (*ptr4)[3]=&arr; //warning: initialization from incompatible pointer type

    printf("%d\n",arr);
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    printf("%p\n",*ptr3);
    printf("%d\n",**ptr3);



}