#include <stdio.h>

//preprocessor bukanlah bagian dari operasi yang diproses compiler, tapi merupakan langkah terpisah dalam proses compiling
//dalam kata lain, preprocessing adalah langkah yang dilakukan sebelum dilakukannya proses compiling code atau pre-processing
//semua perintah preprocessing dimulai dengan simbol hash(#) 

//dalam c ada yang disebut dengan macro, macro adalah sebuah proses text substitution code (penggantian kata dalam code) agar kita bisa mengganti kata yang kita gunakan saat membuat code
//biasanya macro digunakan untuk memudahkan dokumentasi agar kode lebih mudah dibaca

//dalam c, ada beberapa directive yang penting seperti
//#define : mengganti sebuah preprocessor macro
//#include : memasukkan header tertentu dari file luar
//#undef : undefined sebuah preprocessor macro
//#ifdef : return true jika macro ini telah terdefinisi
//#ifndef : return true jika macro ini belum terdefinisi
//#if : test apakah compile time condition benar
//#else : alternatif dari #if
//#elif : #else dan #if dalam satu statement
//#endif : menghentikan preprocessing conditional
//#error : print error message di stderr
//#pragma : issue special command kepada compiler, menggunakan standarized method

//predefined macro
//ANSI C men-define beberapa  macro
//walaupun semua macro ini bisa digunakan dalam proses programming, sebaiknya predefined macro tidak di utak atik secara langsung

//__DATE__ : menampilkan tanggal sekarang dengan bentuk character dengan format "MM DD YYYY"
//__TIME__ : menampilkan waktu sekarang dengan bentuk character dengan format "HH:MM:SS"
//__FILE__ : ini menampilkan nama file kita sekarang dalam bentuk string character
//__LINE__ : menampilkan banyak line code dari program yang kita kerjakan sekarang dalam bentuk constant desimal
//__STDC__ : akan menampilkan 1 jika compiler mengcompile dengan standar ANSI


//preprocessor operator
//c preprocessor menyediakan operator untuk memudahkan proses membuat macro

//macro continuation (\) operator
//saat mendefinisikan macro, biasanya hanya dilakukan dalam satu baris
//jika baris code terlalu panjang kita bisa menggunakan operator (\)

//stringsize operator (#)
//dengan operator ini, kita bisa menconvert macro parameter menjadi string

//parameterize operator
//salah satu kelebihan dalam c preprocessing adalah kemampuan untuk mensimulasikan fungsi menggunakan parameterized operator
//seperti di bawah ini

#define message_uji(a,b) \
    printf(#a "dan" #b ": contoh penggunaan operator continuation\n")

//token pasting (##) operator
//dengan operator ini, kita bisa 2 token yang berbeda saat definisi macro menjadi satu token

#define tokenpaster(n) printf("token" #n " = %d\n",token##n)

//defined() operator
//defined() operator digunakan ketika kita ingin mengetahui apakah operator ini sudah didefinisikan saat proses #define
//jika macro sudah didefinisikan, value yang di return adalah true (non-zero), jika symbol belum di definisikan maka akan me-return nilai false (zero)

#if !defined(MESSAGE) 
    #define MESSAGE "done"
#endif

//contoh preprocessor
#define max_array 5

#define begin {
#define end }

void print_max_array();

#undef max_array

#ifndef max_array
    #define max_array 42
#endif

int main()
begin
    int i = 0;

    print_max_array();
    //seperti yang terlihat diatas, preprocessor akan dieksekusi terlebih dahulu sebelum code di compile

    //contoh continuation operator, stringsize operator, dan parameterized operator
    message_uji(budi, saleh);

    //contoh token pasting
    int token21 = 25;
    tokenpaster(21);

    printf(MESSAGE);
    printf("\n");

end

void print_max_array()
begin
    printf("max array tadi adalah : %d\n", max_array);
end