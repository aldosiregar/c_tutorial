#include <stdio.h>

//ada 4 jenis storage yang disediakan c
/*
auto
register
static
extern
*/

//static untuk definisi global variabel
static int i = 5; //global value

//extern adalah storage yang digunakan untuk mendefinisikan variabel/fungsi yang
//ada diluar file 
//biasanya ini dipakai ketika kita bekerja di file yang berbeda
extern void extern_function(); 
int temporary = 5;

int main(int argc, char** argv){
    //auto merupakan default storage dari c
    //storage auto hanya bisa digunakan dalam fungsi dimana dia didefinisikan
    auto int auto_storage;

    //register merupakan storage yang datanya "mungkin" akan disimpan dalam register
    //register biasanya digunakan untuk akses cepat dalam cpu seperti counter program
    //storage register tidak bisa menerima proses unary "&" karena datanya tak ada di ram
    //data akan disimpan di register tergantung spesifikasi hardware dan arsitektur
    register int register_storage;

    //static adalah storage yang memperbolehkan kita menyimpan data diluar
    //ini dilakukan agar kita tidak perlu mendefinisikan ulang variabel yang ad
    //didalam fungsi tersebut
    static int static_storage;

    //implementasi storage extern
    extern_function();

    return 0;   
}