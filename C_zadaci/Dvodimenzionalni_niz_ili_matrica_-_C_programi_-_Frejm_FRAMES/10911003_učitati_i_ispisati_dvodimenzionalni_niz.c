/*
 * ZADATAK 10911003 - 10911003
 * Učitati i ispisati dvodimenzionalni niz - matricu nxn. Zatim ispisati članove niza koji su na glavnoj dijagonali.
 * Kategorija: Dvodimenzionalni niz ili matrica - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/109c/10911003.htm
 */

#include <stdio.h>

int main()
{
printf("Unesite dimenzije kvadratne matrice:\n");
int i;
int j;
int n;

scanf("%d", &n);
int iMatrica[n][n];
printf("Unesite elemente matrice: \n");
for(i=0; i < n; i++) {
for(j=0; j < n; j++) {
scanf("%d", &iMatrica[i][j]);
}
}

printf("\nIspis matrice:\n");
for(i=0; i < n; i++) {
for(j=0; j < n; j++) {
if(i==j) {
printf("%d ", iMatrica[i][j]);
}
}
printf("\n");
}
return 0;
}