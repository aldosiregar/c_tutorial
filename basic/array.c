#include <stdio.h>

//ada banyak cara untuk menaruh array di fungsi, salah satunya adalah dengan menggunakan pointer
//pemindahannya cukup tricky, yaitu dengan membuat array menerima array
void print_array2d(int* array, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){ 
            printf("nilai dari array baris ke %d kolom ke %d adalah %d\n", (i+1), (j+1), *((array+i*column) + j));
        }
    }
}


//ini adalah fungsi untuk mengalikan element array dengan target
int* multiply_all(int* array, int target, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){y
            //pointer array kita simpan di variabel pointer agar tidak perlu definisi variabel baru
            //lokasi array diakses dengan menambahkan pointer arra
            int* temp = (array + i * column) + j; 
            *temp *= target;
        }
    }

    return array;
}

int main(int argc, char** argv){
    //array merupakan deretan alamat yang berisi variable bertipe sama yang diletakkan secara berdekatan 
    //array digunakan agar kita bisa memasukkan nilai tanpa perlu membuat variabel baru terus menerus
    //array diakses dari bahasa c menggunakan index yang dimulai dari 0

    //array bisa diinisasi dengan banyak cara, beberapa caranya ada dibawah ini

    //contoh pembuatan array bawaan c tidak berisi (inisiasi)
    int array_a_initiation[5];

    //ini array yang isinya langsung di berikan saat inisiasi
    int array_a_direct[5] = {1,2,3,4,5};

    //inisiasi array tanpa menspesifikkan banyak variable terlebih dahulu
    int array_a[] = {1,2,3,4,5};

    //menampilkan nilai array
    for(int i=0; i<5; i++){
        printf("nilai dari array adalah %d\n", array_a[i]);
    }

    printf("\n");

    //selain itu kita bisa membuat sebuah array dalam array, sehingga kita bisa membuat array lebih dari satu dimensi
    int array_2d[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //disini kita membuat array 2 dimensi dengan 3 baris dan 4 kolom
    //cukup menggunakan cara diatas kita bisa membuat array berdimensi apapun

    //walau array itu sudah merupakan set alamat, jika kita menggunakan dimensi yang lebih tinggi
    //maka kita harus menambahkan satu pointer untuk merujuk ke alamat tersebut
    //jika tidak maka alamat dibawah berbentuk *[jumlah kolom] 
    print_array2d(*array_2d, 3, 4);

    printf("\n");

    //atau jika kita ingin mengembalikan proses array dari sebuah fungsi
    print_array2d(multiply_all(*array_2d, 2, 3, 4) , 3, 4);

    printf("\n");
}