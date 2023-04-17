#include <stdio.h>

//typedef adalah sebuah metode untuk menamai type data nama yang baru
//typedef biasanya dinamai dengan uppercase letter untuk membedakannya dengan type yang baru 
//tetapi kita tetap bisa menggunakan lowercase letter untuk penamaannya 

typedef unsigned int BYTE;
typedef unsigned int byte;

//kita juga bisa menggunakan typedef untuk type data buatan kita, seperti structure
typedef struct Data{
    int number;
    char* name;
}Data;

//lalu ada juga define untuk mendefinisikan type data kita
//define bisa langsung menginisiasi nilainya secara langsung, berbeda dengan typedef yang hanya mendefinisikan aliasnya saja
//typedef ditangani oleh compiler sedangkan define ditangani oleh pre-processor

#define true 1
#define false 0

int main(int argc, char** argv){
    BYTE b1, b2;
    
    Data data1;
    data1.number = 22;
    data1.name = "samsul";

    printf("nomer : %d\n", data1.number);
    printf("nama : %s\n\n", data1.name);
    
    printf("nilai dari true : %d\n", true);
    printf("nilai dari false : %d\n", false);
}