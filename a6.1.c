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

int flag =0;

for(int i=0;i<size;i++){
    if( arr[i] % 4==0 && arr[i] % 5==0){
        flag = 1;
        break;
}
}
if(flag==1){
    printf("found\n");
}
else{
    printf("not found\n");
}
}
