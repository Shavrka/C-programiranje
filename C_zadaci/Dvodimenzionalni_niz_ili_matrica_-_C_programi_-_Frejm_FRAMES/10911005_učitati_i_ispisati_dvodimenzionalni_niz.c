/*
 * ZADATAK 10911005 - 10911005
 * Učitati i ispisati dvodimenzionalni niz - matricu 4x4. Zatim ispisati članove niza koji su iznad glavne dijagonale. Elemente koji se ne ispisuju pri ispisu zamjeniti prazninom.
 * Kategorija: Dvodimenzionalni niz ili matrica - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/109c/10911005.htm
 */

#include <stdio.h>

int main()
{
int i;
int j;
int iMatrica[4][4];
printf("Unesite elemente matrice: \n");
for(i=0; i < 4; i++) {
for(j=0; j < 4; j++) {
scanf("%d", &iMatrica[i][j]);
}
}

printf("\nIspis matrice:\n");
for(i=0; i < 4; i++) {
for(j=0; j < 4; j++) {
if(i>=j) {
printf(" ");
}
else {
printf("%d ", iMatrica[i][j]);
}
}
printf("\n");
}

return 0;
}