/*
 * ZADATAK 06411129 - 06411129
 * Napisati program koji učitava dvocifreni broj i ispisuje proizvod cifara i količnik druge i prve cifre s lijeva.
 * Kategorija: Linijska struktura - Izdvajanje cifara - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/064c/06411129.htm
 */

#include <stdio.h>

int main()
{
int x, y, broj;
float p, k;

printf("Dvocifren broj: ");
scanf("%d",&broj);

x = broj / 10;     // cifra desetica
y = broj % 10;     // cifra jedinica

p = x * y;         // proizvod cifara desetica i jedinica
k = (float)y / x;  // količnik cifara jedinica i desetica

printf("\nProizvod cifara = %.1f", p);
printf("\nKolicnik cifara = %.1f", k);

return 0;
}