/*
 * ZADATAK 10811036 - 10811036
 * Učitati niz A od n članova. Formirati novi niz B od članova niza A s tim da se ista vrijednost pojavljuje samo jednom.
 * Kategorija: Niz /ARRAY/ - Formiranje niza - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/108c/10811036.htm
 */

#include <stdio.h>
// 10811036

int main()
{
int i, j, k, n;
int isti;      // indikator razlicitosti
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int A[n];

printf("Unesi elemente: \n");
for(i=0; i < n; i++) {
scanf("%d", &A[i]);
}

// Pocentni uslovi sa formiranje niza
int B[n];
B[0] = A[0];   // prvi element niza
k = 1;         // nasli smo prvi clan kojeg do sad nismo imali u nizu b

// Da li su razliciti
for(i=0; i < n; i++) {
isti = 0;   // pretpostavimo da novi clan nije jednak nekom pod prethodnih
for(j= 0; j < k; j++){       // provjera svih iz b sa novim iz niz
if (A[i] == B[j]) {        // if niz =  nekom od b    b   range (0, k)
isti = 1;          // novi clan je jednak prethodnom
}
}
if(isti == 0) {
B[k] = A[i];        // k je broj nadjenih clavnova iz niza niz <> od prethodnih u a
k = k + 1;   // nova vrijednost indeksa niza b
}
}

printf("Originalni niza:\n");
for(i=0; i < n; i++) {
printf("%d ", A[i]);
}

printf("\nNiz bez ponavljanja elementa:\n");
for(i=0; i < k; i++) {
printf("%d ", B[i]);
}
return 0;
}

Ispis na ekranu:
Unesi broj elemenata niza: 5
Unesi elemente:

Originalni niza:
2 4 2 3
Niz bez ponavljanja elementa:
2 4 3