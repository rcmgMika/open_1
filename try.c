#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main(){
   int var = 1, counter = 1, temp = 1;


   while(true){
        var = temp;
        while(true){
            if(var == 1){
                printf("Counter: %d || Integer Value: %d ||\n", counter, temp);
                usleep(1000000);
                break;
            }
            if(var % 2 == 0){
                var = var/2;
            }else{
                var = (var*3)+1;
            }
            counter++;
        }
        temp++;
        counter = 1;
   }

  /*
  while(true){
    if(var == 1){
        printf("Sequences: %d", counter);
        break;
    }
    if(var % 2 == 0){
        var = var/2;
    }else{
        var = (var*3)+1;
    }
    printf("counter: %d || var = %d\n", counter, var);
    counter++;
  }
  */
}