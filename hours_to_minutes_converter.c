#include <stdio.h>

int main () {

    int menit, menitAkhir, jam;

    printf("Masukkan Jam : ");
    scanf("%d", &jam);
    printf("Masukkan Menit : ");
    scanf("%d", &menit);

    menitAkhir = menit + 60 * jam;

    printf("Jam %02d:%02d adalah setara dengan %d", jam, menit, menitAkhir);


return 0;

}