// Online C compiler to run C program online
#include <stdio.h>

int main() {
    FILE *filepointer;
    filepointer=open("student1.txt","w");
    if(filepointer==NULL){
        printf(\n File Opening failed \n);
        exit(1);
    }
    fprintf(filepointer,"%s \n %d","Joe Biden",81);
     fprintf(filepointer,"%s \n %d","Kamala Harris",61);
    fclose(filepointer);
}
