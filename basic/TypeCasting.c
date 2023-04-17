#include <stdio.h>

//men-convert satu type data ke type data lain disebut dengan type casting atau type conversion
//sebagai contoh, jika kita ingin menyimpan sebuah nilai "long" menjadi interger sederhana maka kita bisa type cast "long" menjadi "int"
//kau juga bisa men-convert dari satu type ke type lain secara langsung menggunakan cast operator sebagai berikut
//(type_name) expression

//interger promotion
//interger promotion adalah proses dimana value dari interger type lebih "kecil" daripada int atau unsigned int akan dikonversi ke int ataupun unsigned int

//usual arithmetic conversion
//usual arithmetic conversion dilakukan secara implisit untuk merubah valuenya ke tipe umum
//pertama compiler akan melakukan interger promotion, jika operand masih memiliki type yang lain, maka mereka akan di convert ke yang berada di hirarki tertinggi dalam hirarki seperti dibawah
//int -> unsigned int -> long -> unsigned long -> long long -> unsigned long long -> float -> double -> long double
//biasanya unusual arithmethic conversion tidak dilakukan untuk operator penugasan, atau operator logika && dan ||

int main(int argc, char** argv){
    int a = 17, b = 5;
    double mean = (double) (a + b) / 2;
    printf("nilai mean dari a dan b : %lf\n\n", mean);

    //dalam proses diatas, bagian (a+b) lah yang di casting ke dalam bentuk double, baru setelah itu dibagi 2 menghasilkan double value
    //type conversion bisa dilakukan secara tidak langsung, yang dimana dilakukan oleh compiler secara otomatis, atau bisa di spesifikkan secara langsung menggunakan cast operator
    //bisa menjadi langkah yang bagus dalam menggunakan cast operator saat melakukan konversi type data kapanpun diperlukan

    //interger promotion
    int c = 5;
    char d = 'v'; //ascii character with 118 interger value
    int sum = c + d;
    printf("value dari sum c and d : %d\n\n", sum);

    //disini nilai dari sum antara c dan d adalah 123 karena compiler melakukan proses interger promotion dan men-convert nilai dari 'v' menjadi ascii sebelum proses aritmatika berlangsung
 
    //unusual arithmethic conversion
    int e = 3;
    char f = 'c'; //ascii character with 99 interger value
    double now = e + f;
    printf("value dari e + f : %lf\n", now);

    //dalam proses ini, pertama c dirubah ke bentuk interger, tetapi value finalnya adalah double
    //terjadi proses unusual arithmethic conversion dan compiler men-convert e dan f ke dalam bentuk double ddan dari proses penambahan keluar hasil "double"

}