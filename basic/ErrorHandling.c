#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

//errno kita extern sebelum bisa digunakan valuenya
extern int errno;

//bahasa pemrograman c tidak menyediakan error handling secara langsung ketika terjadi kesalahan dalam kode
//namun sebagai bahasa pemrograman sistem, c memberikan kita akses ke bagian terendah berupa return value
//sebagian besar bahasa c bahkan unix men-return -1 atau NULL manabila terjadi error dan men-set error code errno
//ini diatur sebagai variabel global dan mengindikasikan bahwa terjadi error ketika proses pemanggilan fungsi
//kita bisa menemukan berbagai pendefinisian error code dalam <error.h>

//jadi kita bisa mengcek return value tersebut dan mengambil langkah yang diperlukan tergantung dari return value yang diberikan
//sebuah practice yang bagus untuk men-set errno ke 0 ketika menginisiasi program, value 0 mengindikasikan tidak ada error dalam program

//errno, perror(), dan strerror()
//bahasa pemrograman c menyediakan fungsi perror() dan strerror() yang dimana bisa digunakan untuk menampilkan pesan text yang berhubungan dengan errno

//fungsi perror(), menampilkan string yang kita berikan, diikuti colon, sebuah space, lalu text yang di presentasikan berkaitan dengan error yang terjadi
//fungsi strerror(), yang dimana men-return pointer ke representasi text dari nilai errno sekarang  


//Divided by zero errors
//sangat sering terjadi ketika membagi bilangan, programmer tidak memeriksa jika pembaginya adalah nol sehingga menyebabkan terjadi runtime error


//program exit status
//biasanya ketika mengekspresikan status berhentinya program, kita menggunakan macro seperti EXIT_SUCCESS dan EXIT_FAILURE
//EXIT_SUCCESS adalah macro dan terdefinisi sebagai 0
//EXIT_FAILURE adalah macro dan terdefinisi sebagai -1

void perror_example();

void divide_by_zero(int a, int b);

int main(int argc, char** argv)
{
    perror_example();
    printf("\n");
    divide_by_zero(10, 0);
}

//ini adalah contoh penggunaan perror dan strerror
void perror_example()
{
    FILE* fp;
    int errnum;
    fp = fopen("file_doesnt_exist.txt", "r");

    //jika file fp tidak ada, maka fp akan NULL
    if(fp == NULL)
    {
        //simpan status errno dalam errnum
        errnum = errno;

        //tampilkan error dari errno tadi
        fprintf(stderr, "value of errno : %d\n", errno);

        //print error menggunakan perror
        perror("error printed by perror");

        //print error menggunakan strerror
        fprintf(stderr, "error opening file : %s\n", strerror(errnum));
    } 
    else
    {
        fclose(fp);
    }
}


//contoh membagi dengan 0 dan exit status
void divide_by_zero(int dividend, int divisor)
{
    int quotinent;
    if(divisor == 0)
    {
        fprintf(stderr, "division by zero!!! exiting...\n");
        exit(EXIT_FAILURE);
    }

    quotinent = dividend / divisor;
    fprintf(stderr, "value of qoutinent : %d\n", quotinent);
    exit(EXIT_SUCCESS);
}