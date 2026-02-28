/*
 * ZADATAK 3 - 09311024
 * Napisati program sa funkcijom za izračunavanje kuba vrijednosti učitanog cijelog broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311024.htm
 */

#include <stdio.h>

int kub(int a) {        // definisanje funkcije kuba dva broja
return a * a * a;   // kub broja
}

int main ()
{
printf("Kub broja\n");
int broj1;

printf("Broj: ");      // ulazna vrijednost
scanf("%d",&broj1);    // ucitaj

printf("Broj = %d \tKub broja = %d ", broj1, kub(broj1));  // ispis
return 0;
}