/*
 * ZADATAK 28 - 08111006
 * Ispisati prirodne brojeve od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111006.htm
 */

#include <stdio.h>

int main()
{
int i, k, n;               // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);           // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);           // upis broja do kojeg se ispisuje

for(i = k; i <= n; i++)    // ponavljanje za i = k do i = n - pocetak petlje
printf("%d\n", i);     // ispis vrijednosti
return 0;
}

II varijanta  for(int i = k;
// 08111006
#include <stdio.h>

int main()
{
int k, n;                  // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);           // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);           // upis broja do kojeg se ispisuje

for(i = k; i <= n; i++)    // deklarisanje varijable i; ponavljanje za i = k do i = n - pocetak petlje
printf("%d\n", i);     // ispis vrijednosti
return 0;
}