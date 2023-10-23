#include <stdio.h>
int main() {
    int iarr[5]={10,20,30,40,50};
    int x=10;
    char ch='A';

    printf("%d\n",x);   //10
    printf("%c\n",ch);  //A

    printf("%p\n",&x);  //200 temporary address
    printf("%p\n",&ch); //300 temporary address
    

    printf("%d\n",iarr);       
    printf("%p\n",iarr);    //100
    printf("%p\n",&iarr);   //100 (this is not the proper way to print address if array "&" should not be there..  )
  
}
 





