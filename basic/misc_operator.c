//dalam bahasa c, ada operator yang disupport oleh bahasa c yaitu misc operator
#include <stdio.h>

int main(int argc, char** argv){
    //yang pertama adalah sizeof(), dimana operator ini akan mengembalikan data berupa besar bit dari data tersebut
    int sizeof_a = 26;
    long sizeof_b = 1024021;
    printf("sizeof dari variabel a adalah %ld\n", sizeof(sizeof_a));
    printf("sizeof dari variabel b adalah %ld\n\n", sizeof(sizeof_b));

    //yang kedua adalah operator & atau refrence, berbeda dengan operator and, operator ini tidak dibatasi spasi saat ingin menggunakannya
    //operator ini memberikan alamat dari variable yang kita berikan
    //refrence hanya bisa dipanggil dengan menspesifikkan alamat dari variable yang ingin kita ambil alamatnya
    int* refrence_a = &sizeof_a;
    printf("refrence dari variabel a adalah %p\n\n", &refrence_a);

    //yang ketiga adalah operator pointer, ini digunakan ketika kita ingin mengarahkan suatu operasi ke memori yang sudah berisi
    int* pointer_a = refrence_a;
    printf("pointer dari variabel a adalah %d\n\n", *pointer_a);

    //yang keempat adalah operator ternary (?:), ini digunakan ketika kita ingin membangun fungsi sederhana yang menghasilkan
    //nilai a jika kondisinya memungkinkan atau b jika kondisinya tidak memungkinkan
    int ternary_a = 20;
    int ternary_b = (ternary_a == 10) ? 2 : 1;
    //baca : jika nilai ternary_a == 10 maka nilai b = 2, jika tidak nilainya 1
    printf("ternary dari variabel b adalah %d\n", ternary_b);
}