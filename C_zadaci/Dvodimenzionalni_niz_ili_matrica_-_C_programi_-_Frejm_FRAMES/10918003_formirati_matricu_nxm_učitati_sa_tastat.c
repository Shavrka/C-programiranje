/*
 * ZADATAK 10918003 - 10918003
 * Formirati matricu nxm (učitati sa tastature) prema uzorku:
 * Kategorija: Dvodimenzionalni niz ili matrica - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/109c/10918003.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, m;
printf("Formiranje matrice prema uorku\n");
printf("Unesite dimenzije  matrice (n): ");
scanf("%d", &n);
printf("Unesite dimenzije  matrice (m): ");
scanf("%d", &m);

int A[n][m];

for(i=0; i < n; i++) {
for(j=0; j < m; j++) {
if ((i + j) %3 == 0 ) {
A[i][j] = 1;
}

if ((i + j) %3 == 1 ) {
A[i][j] = 2;
}

if ((i + j) %3 == 2 ) {
A[i][j] = 0;
}
}
}

printf("\nGenerisana matrica\n");
for(i=0; i < n; i++) {
for(j=0; j < m; j++) {
printf("%4d%4 ", A[i][j]);
}
printf("\n");
}
return 0;
}