#include <stdio.h>

//union merupakan sebuah fitur dalam c dimana kita bisa menbuat type data yang bisa menyimpan value
//dengan menaruh data di satu block memory saja
//oleh karena itu, hanya satu value saja yang bisa ditampung dalam union tersebut

union data{
    int id;
    long umur;
    double gaji;
    char* nama;
};

int main(int argc, char** argv){
    union data karyawan;
    karyawan.id = 20;
    karyawan.gaji = 2000.30;
    karyawan.nama = "supri";

    printf("id dari karyawan : %d\n", karyawan.id);
    printf("gaji dari karyawan : %f\n", karyawan.gaji);
    printf("nama dari karyawan : %s\n\n", karyawan.nama);
    printf("besar pemesanan data dari union : %lu\n", sizeof(union data));

    //seperti yang terlihat diatas, union hanya memasukkan satu nilai saja
    //nilai yang dimasukkan adalah nilai yang paling terakhir di inisiasi
    //besar memory yang dipesan oleh union tergantung oleh jenis type data di dalamnya, yaitu sebanya 8 byte
}