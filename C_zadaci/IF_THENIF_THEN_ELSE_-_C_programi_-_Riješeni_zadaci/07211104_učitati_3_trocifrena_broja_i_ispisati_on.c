/*
 * ZADATAK 140 - 07211104
 * Učitati 3 trocifrena broja i ispisati onaj broj čija je cifra stotice najveća i cifru stotica.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211104.htm
 */

#include <stdio.h>

int main()
{
printf("Od 3 ucitana broja ispisati onaj sa najvecom cifrom stotica");

int tro1, tro2, tro3, s1, s2, s3, max, maxbr;

printf("\nUcitati 1. trocifren broj: ");
scanf("%d", &tro1);
printf("Ucitati 2. trocifren broj: ");
scanf("%d", &tro2);
printf("Ucitati 3. trocifren broj: ");
scanf("%d", &tro3);

s1 = tro1/100;          // cifra stotica 1. trocifrenog broja
s2 = tro2/100;          // cifra desetica 2. trocifrenog broja
s3 = tro3/100;          // cifra jedinica 3. trocifrenog broja

max = s1;               // pocetna vrijednost maksimuma
maxbr = tro1;           // prvi broj pocetni maksimuma
if (s2 > max) {         // cifra stotica 2. broja veca?
max = s2;           // cifra dypyovs 2.broja novi max
maxbr = tro2;       // broj sa vecom cifrom stotica
}
if (s3 > max){          // cifra stotica 3. broja veca?
max = s3;           // cifra dypyovs 3.broja novi max
maxbr = tro3;       // broj sa vecom cifrom stotica
}

printf("Najvecu cifru stotica %d ima broj %d", max, maxbr);

return 0;
}