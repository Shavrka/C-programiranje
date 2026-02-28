/*
 * ZADATAK 10911001 - 10911001
 * Učitati i ispisati dvodimenzionalni niz - matricu 2x3.
 * Kategorija: Dvodimenzionalni niz ili matrica - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/109c/10911001.htm
 */

#include <stdio.h>

int main()
{
int iMatrica[2][3];
int i;
int j;
printf("Unesite elemente matrice: \n");
for(i=0;i < 2; i++) {
for(j=0; j < 3; j++) {
scanf("%d", &iMatrica[i][j]);
}
}

printf("\nIspis matrice:\n");
for(i=0; i < 2; i++) {
for(j=0; j < 3; j++) {
printf("%d ", iMatrica[i][j]);
}
printf("\n");
}
return 0;
}