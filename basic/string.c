#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    //string adalah kumpulan karakter yang disimpan dalam sebuah blok (array) yang sudah dipesan sebelumnya
    //akhiran dari sebuah string di terminate dengan \0 atau NULL
    //kita tidak perlu menambahkan NULL diakhir string, compiler c sudah otomatis menambahkannya diakhir string
    //string atau char* bisa kita inisiasi dengan cara seperti kita membuat array
    char contoh_string[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char contoh_string_2[] = "hello";

    printf("contoh string : %s\n", contoh_string);
    printf("contoh string 2 : %s\n\n", contoh_string_2);

    //c support beberapa fungsi untuk manipulasi string
    //yang pertama adalah strcpy(str1, str2), untuk mengcopy string kedua ke string pertama
    char cpy_str[5]; 
    strcpy(cpy_str, contoh_string);
    printf("copy dari contoh string : %s\n\n", cpy_str);

    //yang kedua adalah strcat(str1, str2), untuk menambahkan string kedua tepat dibelakang string pertama
    //warning : sebaiknya kita juga memperhitungkan jarak dari string yang ingin di concatenate, karena jika tidak
    //bisa terjadi stack buffer overflow
    char cat_str[10] = "world";
    strcat(cat_str, contoh_string_2);
    printf("Concatenates dari string kedua adalah : %s\n\n", cat_str);

    //yang ketiga adalah strlen(str1), untuk mengetahui panjang memori yang dipesan untuk string
    printf("panjang dari string cat_str : %ld\n\n", strlen(cat_str));

    //yang keempat adalah strcmp(str1, str2), untuk mencompare str1 dan str2, 0 jika stringnya berjumlah sama
    //kurang dari 0 jika str1 < str2, lebih dari 0 jika str1 > str2
    printf("compare antara cpy str dan contoh string : %d\n", strcmp(contoh_string, contoh_string));
    printf("compare antara cat str dan cpy str : %d\n", strcmp(cat_str, cpy_str));
    printf("compare antara cpy str dan cat str : %d\n\n", strcmp(cpy_str, cat_str));

    //yang kelima adalah strchr, ini digunakan ketika kita ingin mengambil bagian dari string dimulai dari kata yang kita inginkan
    //seperti contoh dibawah, kita menampilkan string yang dimulai dari kata 'l'
    char* temp;
    temp = strchr(contoh_string_2, 'l');
    printf("string asal : %s, string yang dimulai dari kata yang kita cari (l) : %s\n\n", contoh_string_2,temp);

    //yang keenam adalah strstr(str1,str2), sama dengan strchr, bedanya kita mengambil berdasarkan kalimat yang diberikan
    char* temp_2;
    temp_2 = strstr(cat_str, "ldhe");
    printf("string asal : %s, string yang diambil : %s\n", cat_str, temp_2);
}