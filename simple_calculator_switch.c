#include <stdio.h>

int main()
{

    float bil1, bil2, hasil;
    char operator;


    printf("Masukkan Bilangan 1: ");
    scanf("%f", &bil1);
    printf("Masukkan Bilangan 2: ");
    scanf("%f", &bil2);
        
    printf("MENU PILIHAN KALKULATOR:\nPENAMBAHAN (+)\nPENGURANGAN (-)\nPEMBAGIAN (/)\nPERKALIAN (*)\nMasukkan operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            hasil = bil1 + bil2;
            printf("Hasil dari %.2f + %.2f = %.2f", bil1, bil2, hasil);
        break;

        case '-':
        hasil = bil1 - bil2;
            printf("Hasil dari %.2f - %.2f = %.2f", bil1, bil2, hasil);
        break;

        case '*':
        hasil = bil1 * bil2;
            printf("Hasil dari %.2f * %.2f = %.2f", bil1, bil2, hasil);
        break;
        case '%':
        hasil = (int) bil1 % (int) bil2;
            printf("Hasil dari %.2f %% %.2f = %.2f", bil1, bil2, hasil);
        break;

        case '/':
        hasil = bil1 / bil2;
            printf("Hasil dari %.2f / %.2f = %.2f", bil1, bil2, hasil);
        break;

        default:
        printf("Pilihan Invalid");
        break;
    }

    return 0;
}