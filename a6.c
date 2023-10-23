#include<stdio.h>
void main(){
    int size;
    printf("enter the size of array you want:\n");
    scanf("%d",&size);
    
    int arr[size];
    printf("enetre elements :\n");

    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
//int search;
int flag =0;
//printf("search the  element you want :\n");
//scanf("%d",&search);

for(int i=0;i<size;i++){
    if( arr[i] %4==0 && arr[i]%5==0){
        flag =1;
}
}
if(flag==1){
    printf("found\n");
}
else{
    printf("not found\n");
}
}
