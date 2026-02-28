/*
 * ZADATAK 176 - 07211114
 * Učitati realan broj s jednom cijelom i dvije decimalne cifre. Ispisati najveću od te tri cifre.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211114.htm
 */

#include <stdio.h>

int main()
{
printf("Naci najvecu cifru realnog broja sa jednom cijelom i 2 decimalne cifre");

int brojx100, jed, des, sto, max;
float broj;

printf("\nRealan broj (x.xx): ");
scanf("%f", &broj);
brojx100 = broj * 100;

jed = (brojx100 % 1000) / 100;  // cifra jedinica
des = (brojx100 % 100) / 10;    // cifra desetinke
sto = (brojx100 % 100) % 10;    // cifra stotinke

max = jed;             // pocetna vrijednost maksimuma
if (des > max)         // cifra desetinke najveca?
max = des;         // cifra desetinke najveca
if (sto > max)         // cifra stotinke najveca?
max = sto;         // cifra stotinke najveca

printf("Najveca cifra broja %.2f je %d ", broj, max);

return 0;
}