/*
 * ZADATAK 24010750 - 24010750
 * Napisati program koji traži da se sa tastature unesu dva prirodna broja a i b, i koji ispisuje broj brojeva u rasponu od a i b (uključujući i a i b) koji su djeljivi sumom svojih cifara (takav je, na primjer, broj 351, jer je djeljiv sa 3 + 5 + 1 = 9). Kao neke karakteristične vrijednosti za testiranje mogu vam poslužiti sljedeći rezultati:
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010750.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;
printf("Unesite brojeve a,b=");
scanf("%d", &a);
scanf("%d", &b);
int br=0;
int s = 0;
int c = 0;
for (int i = a; i <= b; i++)
{
int a1 = i;
while (a1 != 0)
{
c = a1 % 10;
s = s + c;
a1 = a1 / 10;
}
if (i % s == 0)
br = br + 1;
s=0;
}
printf("%d", br);
return 0;
}