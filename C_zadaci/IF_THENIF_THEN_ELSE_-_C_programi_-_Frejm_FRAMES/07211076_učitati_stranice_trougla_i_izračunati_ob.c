/*
 * ZADATAK 07211076 - 07211076
 * Učitati stranice trougla i izračunati obim (Koristiti IF naredbu).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211076.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,o;

printf("Obim trougla\n");	 // naslov
printf("1. stranica: ");     // ulaz
scanf("%d", &a);
printf("2. stranica: ");
scanf("%d", &b);
printf("3. stranica: ");
scanf("%d", &c);

if((a > 0) && (b > 0) && (c > 0))
printf("Obim trougla je O==%d", a+b+c);
else
printf("Takav trougao ne postoji");
return 0;
}

II varijanta
// 07211076
# include <stdio.h>
int main()
{
int a, b, c, o;

printf("Obim trougla\n");	 // naslov
printf("1. stranica: ");     // ulaz
scanf("%d", &a);
printf("2. stranica: ");
scanf("%d", &b);
printf("3. stranica: ");
scanf("%d", &c);

if((a > 0) && (b > 0) && (c > 0)){
o = a + b + c;
printf("Obim trougla je O=%d", a+b+c);
}
else
printf("Takav trougao ne postoji");
return 0;
}