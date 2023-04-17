#include<stdio.h>
#include<stdarg.h>

//terkadang kita ingin mempunyai fungsi yang bisa menerima beberapa parameter tanpa harus didefinisikan di fungsinya terlebih dahulu
//c memperbolehkan kita untuk memasukkan parameter yang bisa menerima beberapa data tanpa harus didefinisikan terlebih dahulu

int func(int, ...)
{
    return 0;
}

int main(int argc, char** argv)
{
    //harus diingat bahwa fungsi func() diatas memiliki parameter terakhir diatas sebagai eclipse "tiga dot diatas"
    //dan selalu sebelum eclipse selalu ada int yang nantinya akan merepresentasikan seberapa banyak variable yang diberikan di fungsi tersebut
    //untuk menggunakan fungsi ini, library stdarg.h harus di masukkan terlebih dahulu sebelum kita bisa menggunakan fungsi dan macronya

    
    func(1,2,3);
}

