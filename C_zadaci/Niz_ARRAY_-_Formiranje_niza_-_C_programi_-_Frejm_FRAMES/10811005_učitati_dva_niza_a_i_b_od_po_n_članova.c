/*
 * ZADATAK 10811005 - 10811005
 * Učitati  dva niza A i B od po n članova. novi niz  C od n članova prema slijedećem izrazu:
 * Kategorija: Niz /ARRAY/ - Formiranje niza - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/108c/10811005.htm
 */

#include <stdio.h>

int main()
{
int n;
int i;

printf("Niz A: \n");
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int A[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++) {
scanf("%d", &A[i]);
}

printf("Ispis niza: ");
for(i=0; i < n; i++) {
printf("%d ", A[i]);
}

printf("\nNiz B: \n");
int B[n];
printf("Unesi elemente niza: \n");
for(i=0; i < n; i++) {
scanf("%d", &B[i]);
}

printf("Ispis niza: ");
for(i=0; i < n; i++) {
printf("%d ", B[i]);
}

int C[n];
for(i=0; i < n; i++) {
if(A[i]%2==0) {
C[i]=A[i];
}
else {
C[i]=B[i];
}
}

printf("\nIspis C niza: ");
for(i=0; i < n; i++) {
printf("%d ", C[i]);
}
return 0;
}