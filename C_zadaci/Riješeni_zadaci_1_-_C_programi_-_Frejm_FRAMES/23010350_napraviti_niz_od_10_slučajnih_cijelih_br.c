/*
 * ZADATAK 23010350 - 23010350
 * Napraviti niz od 10 slučajnih cijelih brojeva manjih od 100. Naći aritmetičku sredinu niza i odrediti koji je član niza najdalji od aritmetičke sredine.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010350.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, suma, indexNajdaljeg;
n = 10;  // koliko ce se generisati slucajnih brojeva
int a[n];        // rezervisanje prostora za niz slucajnih brojeva - ARRAY
float najdalji, arsr;
suma = 0;

time_t t;

srand((unsigned) time(&t));  /* Inicijalizacija generatora slucajnog broja RND */

printf("Generisanje %d brojeva < 100\n", n);

for( i = 0 ; i < n ; i++ ) {    // geneirsanje 5 trocifrenih brojeva - ponavljaj
a[i] = rand() % 99 + 1;     // geneirsanje broja < 100
printf("%d  ", a[i]);
suma=suma+a[i];
}
arsr = (float) suma / n;  // aritmeticka sredina niza

printf("\nSuma clanova niza je %d, a aritmeticka sredina clanova niza je %lg\n", suma, arsr);
printf("Trazenje najdaljeg clana od aritmeticke sredine\n");

najdalji = fabs(arsr - a[0]);  // fabs - apsolutna vrijednost realnog broja
indexNajdaljeg = 0;
printf("fabs(a[%d] - arsr) = fabs(%d - %lg)  =  %lg\n", indexNajdaljeg, a[indexNajdaljeg], arsr, najdalji);

for (i = 1; i < 10; ++i){
if(abs(arsr - a[i]) > najdalji){
najdalji =  fabs(arsr - a[i]);  // fabs - apsolutna vrijednost realnog broja
indexNajdaljeg = i;
printf("fabs(a[%d] - arsr) = fabs(%d - %lg)  =  %lg\n", indexNajdaljeg, a[indexNajdaljeg], arsr, najdalji);

}
}

return(0);
}