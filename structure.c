
#include <string.h>
#include <stdio.h>
int main(){
struct readings{
char cabinet_name[20];
int active_power ;
int reactive_power;
char employee_name[20];
}logs;


strcpy(logs.cabinet_name ,"N1");
logs.active_power=12345;
logs.reactive_power=2345;
strcpy(logs.employee_name,"Felex");
 printf("this cabinet %s  data it has Active Power of %d and Rective Power of %d Logged By %s ",logs.cabinet_name,logs.active_power,logs.reactive_power,logs.employee_name);




return 0;
}
