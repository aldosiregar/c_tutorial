#include <stdio.h>

//structure merupakan suatu metode dalam membuat type data baru
//biasanya struct digunakan untuk menyimpan beberapa tipe data dalam satu variabel
//struct berisi struktur tag, isi tag, dan struktur variable
//struktur variable ini opsional, digunakan ketika kita ingin langsung memesan variabel
//tanpa perlu mendeklarasikannya secara tradisional

struct data{
    int umur;
    char* nama;
    long gaji;
} data_diri, data_karyawan;

//bit field, merupakan salah satu fitur c dimana kita bisa mengatur banyaknya pemesanan bit dalam suatu tipe data
//bit field biasanya di assign di struct atau union
struct bit_field{
    unsigned int a : 5;
    int b : 4;
    unsigned long c : 32;
};

int main(int argc, char** argv){
    //deklarasi variabel data secara tradisional
    struct data data_1;

    //deklarasi variabel data menggunakan pointer
    struct data* data_2 = &data_1;

    //kita mengakses isi dari struct dengan . (dot) atau -> jika dideklarasi menggunakan pointer
    data_1.umur = 20;

    printf("umur dari pegawai 1 adalah : %d\n\n", data_1.umur);

    //deklarasi isi menggunakan cara pointer
    data_2->umur = 25;

    printf("umur dari pegawai 2 adalah : %d\n\n", data_2->umur);

    //kita lihat berapa besar penyimpanan yang diambil oleh struct tadi
    struct bit_field field;

    //sizeof dari field
    printf("besar field yang diambil dari struct adalah : %lu bytes\n\n", sizeof(struct bit_field));
    //dari sini bisa kita lihat bahwa , dari gabungan tipe data int dan long hanya terpesan 8 bytes
    //jika kita tidak pesan bit field nya, yang terpesan bisa sebesar 16 bytes

    //memasukkan value ke dalam member struct
    field.a = 30;
    field.b = 10;
    field.c = 200000;

    printf("nilai dari member struct a adalah : %d\n", field.a);
    printf("nilai dari member struct b adalah : %d\n", field.b);
    printf("nilai dari member struct c adalah : %d\n\n", field.c);

    //ada perbedaan disini, ketika kita memberikan nilai di a yang tipe datanya unsigned, kita dapat nilai yang sesuai dengan besar field yang dipesan
    //namun berbeda dengan nilai di member b, kita tak bisa meng-assign bit di type data yang fieldnya sudah fix, seperti int, jika kita teruskan kita akan mendapat nilai negatif, komputer membaca nilainya dengan bentuk msb
    //dan kita juga tak bisa menaruh nilai diluar dari jumlah bit yang telah dipesan, compiler akan memberikan peringatan bahwa nilai yg di assign sudah melebihi batas pemesanan sehingga tak akan di compile

    //yang terakhir adalah alamat dari bit field
    //kita tak akan bisa mengambil alamat dari suatu variabel yang dipesan bit fieldnya
    //hal itu dikarenakan bit field yang dipesan tidak punya bit boundary sehingga tak bisa diambil alamatnya

    return 0;
}