/*
 * ZADATAK 23010340 - 23010340
 * Napraviti niz od 10 slučajnih prirodnih brojeva manjih od 100. Naći aritmetičku sredinu niza i odrediti koji je član niza najbliži aritmetičkoj sredini.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010340.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, suma, najblizi, indexNajblizeg;
n = 10;  // koliko ce se generisati slucajnih brojeva
int a[n];        // rezervisanje prostora za niz slucajnih brojeva - ARRAY
float arsr;
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

printf("\nSuma clanova niza je %d, a aritmeticka sredina clanova niza je %lf\n", suma, arsr);
printf("Clan najblizi aritmetickoj sredini je  a[0] = %d\n", a[0]);

najblizi = abs(arsr - a[0]);
indexNajblizeg = 0;
for (i = 1; i < 10; ++i){
if(abs(arsr - a[i]) < najblizi){
najblizi = abs(arsr - a[i]);
indexNajblizeg = i;
printf("Clan najblizi aritmetickoj sredini je  a[%d] = %d\n", indexNajblizeg, a[indexNajblizeg]);
}
}

return(0);
}