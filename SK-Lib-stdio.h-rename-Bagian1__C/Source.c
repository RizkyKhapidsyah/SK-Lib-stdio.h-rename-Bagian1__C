
#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int hasil;
    char namaLama[] = "namaLama.txt";
    char namaBaru[] = "namaBaru.txt";

    hasil = rename(namaLama, namaBaru);

    if (hasil == 0) {
        puts("File berhasil diganti namanya");
    } else {
        perror("Kesalahan saat mengganti nama file");
    }

    _getch();
    return 0;
}