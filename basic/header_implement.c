//header adalah sebuah file ekstensi c berbentuk .h yang digunakan untuk mendistribusikan function dan macro ke berbagai file c lain
//ada 2 jenis header, pertama adalah header yang ditulis programmer dan yang kedua adalah header yang berasal dari proses compiling

//kita bisa memasukkan header dengan menggunakan #include preprocessor, stdio.h adalah contoh header yang berasal dari compiler

//men-include header sama dengan men-copy isi dari header ke dalam source code kita
//negatifnya, ini bisa menyebabkan error dan bukan ide yang bagus untuk men-copy content yang ada di header file ke source code, terutama jika kita punya banyak source code

//simple practice dalam c dan c++ adalah kita menyimpan semua constant, macro, dan system wide global variabel, dan function prototype dalam header lalu kita panggil kapanpun kita butuh


//include syntax
//saat men-include, kita menggunakan preprocessor #include dalam prosesnya
//include memiliki 2 bentuk dengan fungsi yang berbeda

#include <stdio.h>

//yang pertama adalah menggunakan <>, disini program akan mencari file di standard list dari system directory

#define header "header.h"

#include header

//yang kedua adalah menggunakan "" untuk mencari header yang kita buat, disini program akan mencari file dari header di current directory dari file kita sekarang, jadi /header.c

//include akan menambahkan content dari header sesuai dengan urutan dideklarasikannya preprocessor include, jadi jika diatas include ada line code lain, maka content dari header akan ditambahkan setelah line code diatasnya

//once-only headers
//jika header yang sudah diinclude muncul lagi dalam line code dibawahnya, ini bisa memicu error dalam compile
//kita bisa memanfaatkan preprocessor untuk mencegah itu terjadi

#ifndef header
    #include header
#endif

//selain itu, kita bisa menspesifikkan kondisi dari kapan kita ingin meng-include file tersebut dengan menggunakan flow-control preprocessing

int main(int argc, char** argv){
    print_kata();
    printf("\n");
}