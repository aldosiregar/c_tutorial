#include <stdio.h>

double sum(double a, double b);

double difference(double a, double b);

double product(double a, double b);

double division(double a, double b);

int main(int argc, char** argv)
{
    if(argv[0] == "tambah")
    {
        printf("sum : %d\n", sum( (double) ))
    }
}

double sum(double a, double b)
{
    return a + b;
}

double difference(double a, double b)
{
    return a - b;
}

double product(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}