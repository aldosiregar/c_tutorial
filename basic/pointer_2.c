#include <stdio.h>

int main(int argc, char** argv){
    //kita bisa menyimpan array didalam array
    //yaitu dengan menyimpan alamat dari variabel ke dalam kumpulan array
    int variabel_target[5] = {1,2,3,4,5};

    //pesan juga besar alamat dari sisi pointer agar datanya array bisa dimasukkan secara berurutan
    //untuk lengkapnya kenapa, lihat di source code pointer.c bagian ps
    int* ptr_var[5];

    //salin alamat dari array ke ptr_var
    for(int i = 0; i < 5; i++){
        ptr_var[i] = &variabel_target[i];
    } 

    //tampilkan data
    for(int i = 0; i < 5; i++){
        printf("value %d dan alamat %p\n", *ptr_var[i], &ptr_var[i]);
    }

    //pointer ke pointer
    //merupakan konsep manipulasi pointer dimana kita mem-point alamat dari pointer atau
    //pointer2 -> pointer1 -> value , atau **value
    //ini juga bisa diartikan sebagai &pointer1 (alamat dari pointer1)
    int a = 15;
    int* ptr_a = &a;
    int** ptr_ptr = &ptr_a;

    printf("\nalamat dari a : %p, alamat dari ptr_a : %p\n", ptr_a, ptr_ptr);
    printf("nilai a yang kita akses dari ptr_a : %d\n", *ptr_a);
    printf("nilai a yang kita akses dari ptr_ptr : %d\n\n", **ptr_ptr);

    //dari sini bisa kita bahwa kita bisa mengakses nilai dari suatu alamat yang disimpan di pointer
    //ini memudahkan kita saat melakukan proses di struktur data nantinya

    //untuk contoh memasukkan pointer ke fungsi dan me-return pointer sudah ada di source code array.c

}