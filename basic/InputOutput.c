#include <stdio.h>

//ketika kita membicarakan input, itu berarti kita memasukkan data ke dalam program,input bisa berupa file ataupun dari command line
//c memiliki built-in function untuk menerima input, dan memasukkan input tersebut ke dalam program

//ketika kita membahas output, itu berarti kita ingin menampilkan data tersebut ke dalam layar, printer, atau ke dalam file
//c memiliki built-in function untuk meng-output datanya ke layar komputer, juga men-save datanya ke bentuk text atau binary file


//standard file
//c menganggap semua device sebagai file
//jadi device seperti display dianggap sebagai sebuah file 
//dan 3 file ini akan langsung dibuka ketika program dijalankan untuk menyediakan access ke keyboard dan layar

//standard file : standar input
//file pointer : stdin
//device : keyboard

//standard file : standard output
//file pointer : stdout
//device : screen

//standard file : standard error
//file pointer : stderr
//device : our screen

//file pointer maksudnya adalah untuk mengakses file untuk proses read and write

int main(int argc, char** argv){
    //getchar() dan putchar()
    
    //int getchar(void) function membaca character selanjutnya yang ada di layar dan mengembalikannya sebagai interger
    //fungsi ini hanya membaca satu huruf pada satu waktu, kita bisa menggunakan loop jika ingin membaca kata lebih dari satu character di screen
    int c;

    //int putchar(int c) function untuk menaruh karakter di layar
    //fungsi ini hanya akan menampilkan satu huruf saja, kita bisa menggunakan loop jika ingin menampilkan kata lebih dari satu

    printf("masukkan kata : ");
    while( (c = getchar()) != '\n' && c != EOF){
        putchar(c);
    }

    printf("\n\n");

    //putchar hanya akan menampilkan kata dari alamat c, sisanya akan berada di stdin
    //jika kita tidak segera menghabiskan isi dari stdin, memori dalam stdin akan mengganggu input selanjutnya
    //dan stdout akan menampilkan data dari getchar yang tidak terambil tadi

    //gets() and puts()
    
    //char* gets(char* s) function membaca line dari stdin ke buffer pointer ke variabel s sampai dibuat baris baru atau EOF (end of file)
    //gets() sudah dianggap usang, jadi kita bisa menggunakan fgets()
    char str[100];
    printf("masukkan kaiimat : ");
    fgets(str, 100, stdin);

    //char* puts(const char* s) function menulis string s lalu ditampilkan ke layar (stdout)
    printf("kalimat yang dimasukkan : ");
    puts(str);

    printf("\n");

    //scanf() and printf()

    char str2[100];
    int i;

    //int scanf(const char* format, ...) function membaca input standard input stream stdin dan meng-scan input tersebut tergantung dari format yang diberikan
    
    //int printf(const char* format, ...) function menampilkan data dari standard output stream stdout dan menghasilkan output sesuai dengan format yang diberikan

    //format disini bisa berupa constant string
    //seperti %s, %d, %l, dll
    //untuk membaca dan menampilkan interger, float, atau data data lain
    printf("masukkan nilai : ");
    scanf("%s %d", str, &i);

    printf("\nnilai yang dimasukkan : %s %d\n", str, i);

    //seperti yang terlihat diatas, scanf akan behenti membaca sampai format yang telah ditentukan telah terisi

    return 0;
} 