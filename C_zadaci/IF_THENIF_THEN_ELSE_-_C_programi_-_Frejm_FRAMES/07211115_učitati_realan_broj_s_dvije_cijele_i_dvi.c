/*
 * ZADATAK 07211115 - 07211115
 * Učitati realan broj s dvije cijele i dvije decimalne cifre. Ispisati najveću od te četiri cifre.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211115.htm
 */

#include <stdio.h>

int main()
{
printf("Naci najvecu cifru realnog broja sa dvije cijele i 2 decimalne cifre");

int brojx100, j, d, des, sto, max;
float broj;

printf("\nRealan broj (xx.xx): ");
scanf("%f", &broj);
brojx100 = broj * 100;

d = brojx100 / 1000;            // cifra desetica
j= (brojx100 % 1000) / 100;     // cifra jedinica
des = (brojx100 % 100) / 10;    // cifra desetinke
sto = (brojx100 % 100) % 10;    // cifra stotinke

max = d;               // pocetna vrijednost maksimuma
if (j > max)           // cifra jedinica najveca?
max = j;           // cifra jedinica najveca
if (des > max)         // cifra desetinke najveca?
max = des;         // cifra desetinke najveca
if (sto > max)         // cifra stotinke najveca?
max = sto;         // cifra stotinke najveca

printf("Najveca cifra broja %.2f je %d ", broj, max);

return 0;
}