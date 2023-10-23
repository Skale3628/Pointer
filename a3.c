#include<stdio.h>
void main(){
    int carr[4];

    /*carr[0]='A';
    carr[1]='B';
    carr[2]='C';
    carr[3]='D';*/
    printf("enter array elements:\n");
   /* scanf("%d\n",&carr[0]);
    scanf("%d\n",&carr[1]);
    scanf("%d\n",&carr[2]);
    scanf("%d\n",&carr[3]); */

    for(int i=0;i<=4;i++){
        scanf("%d",&carr[i]);
    
    }

    printf("array elements are:\n");
   /* printf("%d\n",carr[0]);
    printf("%d\n",carr[1]);
    printf("%d\n",carr[2]);
    printf("%d\n",carr[3]);
    printf("%d\n",carr[20]); */

    for(int i=0;i<4,i++){
        printf("%d\n",carr[i]);
    }
    

}