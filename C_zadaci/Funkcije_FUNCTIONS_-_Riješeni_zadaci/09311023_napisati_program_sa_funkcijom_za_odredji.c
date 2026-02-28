/*
 * ZADATAK 29 - 09311023
 * Napisati program sa funkcijom za odredjivanje najvećeg od 3 broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311023.htm
 */

#include <stdio.h>

int najveci(int a, int b, int c) {    // definisanje funkcije najveci od 3
int max;

max = a;       // pretpostavimo da je a najveci
if(b > max)
max = b;   // b postaje novi max
if(c > max)
max = c;   // c postaje novi max

return max;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Najveci od tri broja\n");
int broj1, broj2, broj3, naj;

printf("Tri broja: ");
scanf("%d %d %d", &broj1, &broj2, &broj3);

naj = najveci(broj1, broj2, broj3);

printf("Od brojeva: %d   %d   %d ", broj1, broj2, broj3);
printf("\nNajveci je: %d ", naj);

return 0;
}

II varijanta  poziv iz naredbe pridruzivanja
// 09311023
#include <stdio.h>

int najveci(int a, int b, int c) {    // definisanje funkcije najveci od 3
int max;

max = a;       // pretpostavimo da je a najveci
if(b > max)
max = b;   // b postaje novi max
if(c > max)
max = c;   // c postaje novi max

return max;    // izlazna vrijednost funkcije
}

int main ()
{
printf("Najveci od tri broja\n");
int broj1, broj2, broj3;

printf("Tri broja: ");
scanf("%d %d %d", &broj1, &broj2, &broj3);

printf("Od brojeva: %d   %d   %d ", broj1, broj2, broj3);
printf("\nNajveci je: %d ", najveci(broj1, broj2, broj3));

return 0;
}