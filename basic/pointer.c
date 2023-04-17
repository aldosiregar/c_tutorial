#include <stdio.h>

//ps :
//pengarahan pointer ke alamat selanjutnya seperti pointer + 1 atau pointer++ berbeda
//jika kita menggunakan increment (++), ini mengarahkan ke alamat selanjutnya YANG sudah dipesan (mengarah tepat ke block memori selanjutnya)
//sedangkan jika menggunakan pointer + 1, ini mengarahkan pointer ke alamat selanjutnya YANG masih kosong
//oleh karena itu jika kita melakukan ini ke pointer bukan array (tidak spesifik dipesan blok alamatnya) kedua cara ini tidak akan membawa kita
//ke blok selanjutnya, terutama  pointer + 1, kecuali spesifik kita bind alamatnya ke pointer sekarang

//oleh karena itu, gunakan pointer++ atau pointer + 1 jika kita memanipulasi array yang diarahkan ke fungsi


//pointer merupakan sebuah metode yang ada di bahasa c
//pointer adalah sebuah operator yang digunakan untuk merujuk ke sebuah blok alamat yang telah dipesan di ram
//pointer digunakan bersama dengan operator ampersand (&) yg digunakan untuk mengetahui dimana lokasi dari suatu variabel  

//variabel yang dibuat menggunakan operator pointer akan merujuk ke alamat dari variabel tanpa memesan alamat baru

//inilah yang membuat pointer biasanya digunakan untuk program dengan pengalokasian memori yang dinamis


int main(int argc, char** argv){
    int contoh = 20;
    //pointer dibentuk dengan menggunakan tanda * sebelum nama variabel ditentukan
    int* p;
    char* b;
    //type data dalam pointer tidak merujuk ke berapa memori yang akan pesan sesuai dengan tipe data yang dituju
    //tetapi merujuk ke seberapa blok yang harus kita geser ketika kita bekerja dengan pointer

    //dalam menggunakan pointer, ada 3 operasi yang dilakukan saat ingin menggunakan pointer
    //1. kita mendefinisikan variabel pointer
    //2. letakkan alamat variabel ke dalam variabel pointer
    //3. akses variabel yang tersedia di variabel pointer
    //ini dilakukan dengan menggunakan operator unary * , lalu mengembalikan nilai dari variabel yang ada di alamat tersebut
    
    p = &contoh;
    printf("alamat dari variabel contoh adalah : %p\n", &contoh);
    printf("isi dari variabel pointer (tanpa operator unary) : %p\n", p);
    printf("nilai di variabel pointer : %d\n\n", *p);

    //ada baiknya jika kita memberikan nilai NULL pada pointer jika tidak mempunyai alamat yang ingin dituju
    //NULL merupakan sebuah nilai kosong yang bisa kita pakai untuk mengisi nilai pointer yang belum akan ada isinya
    //NULL pointer adalah constant yang bernilai 0 
    int* null_ptr = NULL;
    printf("nilai dari null pointer adalah : %p\n", null_ptr);
    //dalam sebagian besar system operasi, program tidak diizinkan untuk mendapat alamat 0 
    //karena alamat itu telah dipakai oleh sistem operasi
    
    //kita bisa mengecek isi dari pointer menggunakan statement if
    printf("isi pointer sekarang ini : %s\n\n", null_ptr != NULL ? "berisi" : "kosong");

    //dalam mengakses pointer, kita bisa menggunakan proses increment seperti saat menambah nilai variabel
    int temp[] = {10, 20, 30, 40, 50};
    int length = sizeof(temp) / 4;
    int* array_pointer = temp;
    for(int i = 0; i < length; i++){
        printf("alamat pointer sekarang : %p\n", array_pointer);
        printf("nilai dalam pointer : %d\n", *array_pointer);
        array_pointer++;
    }

    printf("\n");
    
    //atau kita juga bisa mengakses mundur nilai dari array dengan operator decrementing
    int* decrement_array = &temp[length - 1];
    for(int i = length; i > 0; i--){
        printf("alamat pointer sekarang : %p\n", decrement_array);
        printf("nilai dalam pointer : %d\n", *decrement_array);
        decrement_array--;
    }

    printf("\n");

    //pointer juga bisa dibandingkan menggunakan operator relasi (seperti == , >=, <=, dll)
    int* compare_array = &temp[length-1];
    int* pointer_now = temp;
    while(pointer_now <= compare_array){
        printf("alamat pointer sekarang : %p\n", pointer_now);
        printf("nilai dalam pointer : %d\n", *pointer_now);
        pointer_now++;
    }
}    