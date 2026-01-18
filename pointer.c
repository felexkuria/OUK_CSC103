#include <stdio.h>
int main(){
  int i=10;
  int *j=&i;
 
    printf("This is adress of i %d\n",&i);
     printf("This value of j %d\n",j); 

//   the value of i 
 printf("This is value of i %d\n",i);
   printf("This value of i through pointer  %d\n",*j);
   
}
