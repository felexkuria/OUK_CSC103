#include <stdio.h>
int main(){
  int i=10;
  int *j=&i;

  int *l;
 
    printf("This is adress of i %d\n",&i);
     printf("This is value of i %d\n",i);
    printf("This memory address of l %p\n",l);
     printf("This value of j %d\n",j); 
      printf("This address of j %p\n",j); 
         printf("This address of i %p\n",&i); 
           *j=23;

//   the value of i 
 printf("This is value of i %d\n",i);
   printf("This value of i through pointer  %d\n",*j);
   
}
