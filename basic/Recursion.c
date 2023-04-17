#include<stdio.h>

//recursion adalah proses dimana kita menggunakan fungsi yang bisa memanggil dirinya sendiri
//ketika membuat fungsi recursion, kita harus berhati-hati dalam men-define status agar fungsi tersebut bisa berhenti

unsigned long long int recursion_function(unsigned int i);

int main(int argc, char** argv)
{
    int i = 20;
    printf("faktorial dari %d adalah %llu\n", i, recursion_function(i));
    return 0;
}

//fungsi recursive mencari faktorial
unsigned long long int recursion_function(unsigned int i)
{
    if(i <= 0)
    {
        return 1;
    }
    return i * recursion_function(i - 1);
}