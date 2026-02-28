/*
 * ZADATAK 07211116 - 07211116
 * Učitati trocifreni broj i provjeriti da li je suma kvadrata stoticae i kvadrata desetica jednaka kvadratu jedinica.Primjer 345, = 32+ 42= 52
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211116.htm
 */

#include <stdio.h>

int main()
{
printf("Provjeriti da je suma kvadrata stotice i kvadrata desetice jednaka kvadratu jedinica");

int tro, s, d, j, min;
printf("\nUcitati trocifren broj: ");
scanf("%d", &tro);

s = tro/100;         // cifra stotica
d = (tro%100)/10;    // cifra desetica
j = tro % 10;        // cifra jedinica

if (s*s + d*d == j*j)        //  suma kvadrata stotice i kvadrata desetice jednaka kvadratu jedinica?
printf("Za cifre trocifrenog broja %d je kvadrat stotica %d + kvadrat desetica %d = kvadrat jedinica %d ", tro, s*s, d*d, j*j);
else
printf("Nije ispunjen uslov kvadrat stotica %d + kvadrat desetica %d = kvadrat jedinica %d ", s*s, d*d, j*j);

return 0;
}