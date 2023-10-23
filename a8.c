//comparing array with if 

/*#include<stdio.h>
void main(){
   
    int arr1[3]={10,20,30};
    int arr2[3]={10,20,30};
    
    //for(int i=0;)
    if(arr1[0]==arr2[0] && arr1[1]==arr2[1] && arr1[2]==arr2[2]){
        printf("array is equal\n");
    }
    else{
        printf("array is not equal\n");
    }
}  */

//comparing array with for loop

#include<stdio.h>
void main(){
    int arr1[3]={10,20,30};
    int arr2[3]={10,20,30};   //tthe arrays are equal 

   /* int arr1[3]={10,20,30};
    int arr2[3]={10,25,30};   //the array is equal as it check or consider the last value even if th middle value is not equal
*/

   /* int arr1[3]={10,20,30};
    int arr2[3]={10,20,35};  //it is not equal 
*/

    int flag=0;
    for(int i=0;i<3;i++){
        if(arr1[i]==arr2[i]){
            flag = 1;
        }
        else{
            flag = 0;
        }

    }
    if(flag == 1){
        printf("are equal\n");
    }
    else{
        printf("not equal\n");
    }

}