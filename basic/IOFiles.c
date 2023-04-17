#include <stdio.h>

//dalam c, selain menerima input dari pheriperal seperti keyboard, kita juga bisa menggunakan file untuk menyimpan data yang kita punya
//c memberikan keleluasaan kita dalam membuat dan membaca file , baik text maupun binary

int main(int argc, char** argv){
    //kita bisa membuka file menggunakan function fopen(const char* filename, const char* mode),
    //dimana filename merujuk kepada nama file yang kita ingin tuju, dan mode merujuk kepada mode pekerjaan yang ingin kita lakukan di file tersebut
    //c memiliki beberapa mode untuk pengaksesan file, seperti

    //mode text
    //r : mode hanya membaca file saja jika filenya ada
    //w : mode hanya menulis file saja jika filenya ada
    //a : mode untuk menulis dalam mode appending jika filenya ada, jika tidak maka akan dibuat file dengan nama tersebut
    //r+ : mode membaca dan menulis dalam file jika filennya ada
    //w+ : mode membaca dan menulis dalam mode truncated (dihapus lalu ditulis lagi) jika filenya ada, jika tidak maka dibuat file baru dengan nama tersebut
    //a+ : mode membaca dan menulis, akan membuat file baru jika tidak ada, akan membaca file dari awal tapi bagian menulis akan ada dalam mode appending

    //jika kita ingin melakukan pekerjaan dalam ranah binary, bentuk modenya seperti berikut
    //mode binary
    //rb (binary read) : membuka file binary dalam mode read
    //wb (binary write) : membuka file binary dalam mode write
    //ab (binary append) : membuka file binary file dalam mode append untuk membaca dan menulis
    //r+b (binary read + write) : membuka file binary dalam mode membaca dan menulis
    //w+b (binary write + read) : membuka file binary dalam mode membaca dan menulis, akan membuat file baru jika filenya tidak ada, dan akan menulis ulang filenya jika sudah ada dan berisi
    //a+b (binary append + write) : membuaka file binary dalam mode membaca dan menulis, akan membuat file baru iak file tidak ada, akan membaca file dari awal, namun bagian menulis dimulai dari belakang (appending)

    //function pertama untuk membukan file adalah fopen(const char* filename, const char* mode)
    //dengan filename sebagai nama file ,dan mode sebagai mode yang ingin kita pakai


    FILE* fp;

    fp = fopen("file/contoh.txt", "w+");
    
    //kedua adalah function untuk menulis file, dalam c ada 2 function yang bisa digunakan
    //yang pertama adalah fputc(int c, FILE* fp), function untuk hanya menulis character dalam file, untuk character dan fp untuk alamat memori dari file yang kita buka
    //yang kedua adalah fputs(const char *s, FILE* fp), function untuk menulis string character ke dalam file, fp adalah alamat dari file yang kita buka
    //selain 2 function diatas, kita bisa menggunakan fprintf(FILE* fp, const char* s) untuk menulis ke dalam file

    fprintf(fp, "ini line pertama yang ditulis menggunakan fprintf\n");
    fputs("ini line kedua yang ditulis menggunakan fputs\n", fp);

    //lalu ada function fclose(FILE* fp) untuk menutup file yang sedang kita baca

    fclose(fp);

    //lalu ketiga adalah function untuk membaca isi file, ada 2 function yang bisa kita gunakan
    //yang pertama adalah fgetc(FILE* fp), function untuk membaca hanya satu character saja dalam file 
    //yang kedua adalah fgets(char* buf, int a, FILE* fp), function untuk membaca isi dari file lebih dari satu character, buf akan diisi oleh string yang akan menyimpan data yang akan dibaca,parameter kedua untuk mendefinisikan batas pemesanan memori untuk menerima character, 
    //selain kedua function diatas, kita bisa menggunakan fscanf(FILE* fp, const char* format, ...) untuk mengambil data dari file

    printf("file yang akan dibaca \n");

    fp = fopen("file/contoh.txt", "r");

    char buf[255];

    fscanf(fp, "%s", buf);
    printf("file yang dibaca menggunakan fscanf : \n %s \n\n", buf);

    while(fgets(buf, 255, (FILE*)fp)){
        printf("file yang dibaca menggunakan fgets : \n %s \n\n", buf);
    }

    fclose(fp);

    //jika sudah mencapai EOF, fgets akan mengeluarkan -1

    //jika ini untuk txt, ada 2 function yang digunakan untuk access dan writing file binary
    //fread(void* ptr, size_t size_of_elements, size_t number_of_elements, FILE* a_file) untuk membaca
    //fwrite(const void* ptr, size_t size_of_elements, size_t number_of_elements, FILE* a_file) untuk menulis

    return 0; 
}