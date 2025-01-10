#include <stdio.h>
#include "_mefunctions.h"


//------------------------------------Arrays
//gets the correspoding total no. of existing elements in an array
int getext(int x[], int size){
    int no = 0;
        for(int i=0;i<size;i++){
            if(x[i] != 0){
                no++;
            }
        }
    return no;
}

//gets the corresponding total no. of non existing elements in an array
int getnext(int x[], int size){
    int no = 0;
        for(int i=0;i<size;i++){
            if(x[i] == 0){
                no++;
            }
        }
    return no;
}

//----------------------------------_text_