#include <stdio.h>

int main(int agrc, char** argv){
    int a = 54321;
    char* b = (char*) a;
    printf("%s\n", b);
    return 0;
}