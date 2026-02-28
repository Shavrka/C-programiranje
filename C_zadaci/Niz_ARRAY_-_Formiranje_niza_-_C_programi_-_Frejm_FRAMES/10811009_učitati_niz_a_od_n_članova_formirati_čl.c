/*
 * ZADATAK 10811009 - 10811009
 * Učitati niz A od n članova. Formirati članove niza B od vrijednosti kosinusa odgovarajućeg člana niza A.
 * Kategorija: Niz /ARRAY/ - Formiranje niza - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/108c/10811009.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
int n;
int i;
printf("Niz A: \n");
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int A[n];

printf("\nUnesi elemente: \n");
for(i=0; i < n; i++) {
scanf("%d", &A[i]);
}

printf("Ispis niza: ");
for(i=0; i < n; i++) {
printf("%d ", A[i]);
}

printf("\nNiz B: \n");
double B[n];
for(i=0; i < n; i++) {
B[i]=cos(A[i]);
}

printf("Ispis niza: ");
for(i=0; i < n; i++) {
printf("%f ", B[i]);
}
return 0;
}