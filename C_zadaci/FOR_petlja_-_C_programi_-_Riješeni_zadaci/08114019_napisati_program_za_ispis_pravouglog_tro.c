/*
 * ZADATAK 250 - 08114019
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08114019.htm
 */

#include <stdio.h>
#include <math.h>                // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main ()
{
printf("Trougao\n");            // naslov  \n ima za posljedicu prelazak u novi red
int i, j, n;                    // deklarisanje varijable i

printf("Broj redova: ");
scanf("%d",&n);                 // ulaz n

for (i = 1; i <= n; i++) {       // za i od 1 do n ponavljaj - pocetak petlje
for (j = 0; j < i; j++)      // za j < i  ponavlja
printf("%d ", (int)pow(2, j));  // cjelobrojna vrijednost stepena broja
printf("\n");                // \n ima za posljedicu prelazak u novi red
}
return 0;
}