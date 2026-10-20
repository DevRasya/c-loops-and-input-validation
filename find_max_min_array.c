#include <stdio.h>

int main() {
    int n, i;
    
    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);
    
    int angka[n];
    
    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }
    
    int max = angka[0];
    int min = angka[0];
    
    for (i = 1; i < n; i++) {
        if (angka[i] > max) {
            max = angka[i];
        }
        if (angka[i] < min) {
            min = angka[i];
        }
    }
    
    printf("\nMaksimum bilangan = %d\n", max);
    printf("Minimum bilangan  = %d\n", min);
    
    return 0;
}