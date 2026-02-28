/*
 * ZADATAK 24010720 - 24010720
 * Napisati program koji traži da se unese prirodan broj n, a zatim računa i ispisuje vrijednost izraza (verižnog razlomka)...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010720.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Unesite broj n:");
scanf("%d", &n);
double s=1;
for(int i=n; i>1; i--)
s=1/(i-1+s);
printf("%lf", s);
return 0;
}