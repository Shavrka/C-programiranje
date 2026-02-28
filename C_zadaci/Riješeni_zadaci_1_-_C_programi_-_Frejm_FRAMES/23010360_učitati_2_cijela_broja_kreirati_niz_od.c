/*
 * ZADATAK 23010360 - 23010360
 * Učitati 2 cijela broja. Kreirati niz od 10 slučajnih cijelih brojeva između njih. Učitati treći broj i odrediti koji je član niza najbliži tom broju.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010360.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, suma, najblizi, indexNajblizeg;
int min, max, pom, c;   // granice intervala
n = 10;  // koliko ce se generisati slucajnih brojeva
int a[n];        // rezervisanje prostora za niz slucajnih brojeva - ARRAY
float arsr;
suma = 0;

time_t t;
srand((unsigned) time(&t));  /* Inicijalizacija generatora slucajnog broja RND */

printf("Prvi broj: ");
scanf("%d",&min);
printf("Drugi broj ");
scanf("%d",&max);
if(min > max){   // swap - min mora biti manji a max veci
pom = min;
min = max;
max = pom;
}

printf("Generisanje %d brojeva u opsegu: %d < slucajan broj < %d\n", n, min, max);

for( i = 0 ; i < n ; i++ ) {    // geneirsanje 5 trocifrenih brojeva - ponavljaj
a[i] = rand() % (max + 1 - min) + min;     // b=max, a=min, a < geneirsani broj < b
printf("%d  ", a[i]);
}

printf("\nTreci broj: ");
scanf("%d",&c);

printf("Broj %d je najblizi clanu niza a[0] = %d\n", c, a[0]);

najblizi = abs(c - a[0]);
indexNajblizeg = 0;
for (i = 1; i < 10; ++i){
if(abs(c - a[i]) < najblizi){
najblizi = abs(c - a[i]);
indexNajblizeg = i;
printf("Broj %d je najblizi clanu niza a[%d] = %d\n", c, indexNajblizeg, a[indexNajblizeg]);
}
}

return(0);
}