#include <stdio.h>

int main (){

    int bilDetik, detik, menit, jam, hari;

    printf("Masukkan Detik: ");
    scanf("%d", &bilDetik);

    detik = bilDetik % 60;
    bilDetik = bilDetik / 60;

    menit = bilDetik % 60;
    bilDetik = bilDetik / 60;

    jam = bilDetik % 24;
    hari = bilDetik / 24;

    printf("Hari : %d\nJam = %d\nMenit = %d\nDetik = %d",hari, jam, menit, detik);

return 0;

}