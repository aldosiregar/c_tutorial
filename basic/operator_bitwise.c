#include <stdio.h>

//tutorial ini tidak akan membahas tentang operator matematika dan logical

int main(int argc, char** argv){
    //operator bitwise
    //merupakan operator untuk manipulasi bit
    
    //operatornya dilakukan dengan beberapa operasi logical, lalu ada juga operator lainnya

    //operator pertama adalah operator and (&) hanya dengan satu and saja, bukan dua
    //operator and hanya menghasilkan nilai yang kedua deretan bitnya sama sama bernilai 1
    int and_a = 12; //0000 1100
    int and_b = 5; //0000 0101
    printf("hasil dari operator and antara a (0000 1100) dan b (0000 0101) adalah %d atau (0000 0100) \n", and_a & and_b);

    //operator kedua adalah operator or (|), hanya ada satu
    //operator or akan menghasilkan 1 jika salah satu bit bernilai 1
    int or_a = 3; //0000 0011
    int or_b = 18; //0001 0010
    printf("hasil dari operator or antara a (0000 0011) dan b (0001 0010) adalah %d atau (0001 0011)\n", or_a | or_b);

    //operator ketiga adalah xor (^)
    //operator xor hanya akan menghasilkan satu jika salah satu saja bit yang berisi
    int xor_a = 31; //0001 1111
    int xor_b = 21; //0001 0101
    printf("hasil dari operator xor antara a (0001 1111) dan b (0001 0100) adalah %d atau (0000 1010)\n", xor_a ^ xor_b);

    //operator keempat adalah operator not atau unary (~)
    //operator unary akan membalik state dari bit yang dituju (jadi bit bertanda negatif)
    int not_a = 91; //0101 1011
    printf("hasil dari operator unary a (0101 1011) adalah %d atau (1010 0100)\n", ~not_a);

    //operator kelima adalah operator binary left shift (<<)
    //bit digeser kekiri sesuai dengan jumlah yang tertera setelah operator
    int bit_shift_left = 20; //0001 0100
    printf("hasil dari operator left shift (0001 0100) sebanyak 2 geseran adalah %d atau (0101 0000)\n", bit_shift_left << 2);

    //operator keenam adalah operator binary right shift (>>)
    //bit digeser kekanan sesuai dengan jumlah yang tertera setelah operator
    int bit_shift_right = 15; //0000 1111
    printf("hasil dari operator right shift (0000 1111) sebanyak 2 geseran adalah %d atau (0000 0011)\n", bit_shift_right >> 2);
}