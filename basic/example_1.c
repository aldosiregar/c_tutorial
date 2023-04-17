#include <stdio.h>

//make constant with define 
#define TEMP 10

extern int temporary;

void extern_function(void){
    printf("extern value is : %d\n", temporary);
}


int main(int argc, char** argv){
    int a = 2;
    int b = 3;
    int c = a + b;
    
    //make constant value with constant
    const int temp = 5;

    printf("a + b = %d \n", c);
    printf("define value is : %d\n", TEMP);
    printf("const value is : %d\n", temp);
    printf("product beetween two const is : %d\n", TEMP * temp);

    int g[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //block array = 9 , and one int is 4 byte
    //so this array consume 36 byte memory
    printf("%ld\n", sizeof(g) / 4);

    return 0;
}