/*
 * ZADATAK 7 - 09311001
 * Napisati program sa funkcijom za izračunavanje sume kvadrata dva cijela broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311001.htm
 */

#include <stdio.h>

int sumakv(int a, int b) {  // definisanje funkcije suma kvadrata
return a * a + b * b;     // suma kadrata dva broja
}

int main ()
{
printf("Suma kvadrata dva broja\n");
int broj1, broj2, s;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

s = sumakv(broj1, broj2);      // poziv funkcije sumakv

printf("%d * %d + %d * %d = %d ", broj1, broj1, broj2, broj2, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311001
#include <stdio.h>

int sumakv(int a, int b) {
int sumakv;
sumakv = a * a + b * b;   // suma kadrata dva broja
return sumakv;    // izlazna vrijednost funkcije - suma kadrata dva broja
}

int main ()
{
printf("Suma kvadrata dva broja\n");
int broj1, broj2, s;

printf("Prvi broj: ");      // ulazne vrijednosti
scanf("%d",&broj1);
printf("Drugi broj: ");
scanf("%d",&broj2);

s = sumakv(broj1, broj2);      // poziv funkcije sumakv

printf("%d * %d + %d * %d = %d ", broj1, broj1, broj2, broj2, s);     // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}