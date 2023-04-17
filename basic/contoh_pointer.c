#include <stdio.h>

int main(int argc, char** argv){
    int a = 20;
    int* p = &a;
    *p *= 2;
    printf("a * 2 from pointer : %d\n", *p );
    printf("a value : %d\n", a);
    printf("a location : %p\n", &a);
    printf("p location : %p\n", p);
    printf("%ld\n", sizeof(int));

    int variabel_target[5] = {1,2,3,4,5};
    int* ptr_var;
    int* base = ptr_var;

    printf("alamat ptr_var = %p, alamat base = %p\n", ptr_var, base);
    printf("alamat selanjutnya ptr_var = %p, alamat selanjutnya base = %p\n\n", ptr_var + 1,base + 1);

    for(int i = 0; i < 5; i++){
        *ptr_var = &variabel_target[i];
        printf("alamat temp : %p\n", ptr_var);
        ptr_var += 1;
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("value %d dan alamat %p\n", *base, base);
        base += 1;
    }
}