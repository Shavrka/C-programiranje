/*
 * ZADATAK 5 - 09311021
 * Napisati program sa funkcijom za izračunavanje proizvoda dva cijela broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311021.htm
 */

#include <stdio.h>

int proizvod(int a, int b) {   // definisanje funkcije proizvod dva broja
int proizvod;
return a * b;       // proizvod dva broja
}

int main ()
{
printf("Proizvod dva broja\n");
int broj1, broj2, p;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

p = proizvod(broj1, broj2);      // poziv funkcije proizvod

printf("%d * %d = %d ", broj1, broj2, p);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311021
#include <stdio.h>

int proizvod(int a, int b) {
int proizvod;

proizvod = a * b;   // proizvod dva broja

return proizvod;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Proizvod dva broja\n");
int broj1, broj2, p;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

p = proizvod(broj1, broj2);      // poziv funkcije proizvod

printf("%d * %d = %d ", broj1, broj2, p);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}