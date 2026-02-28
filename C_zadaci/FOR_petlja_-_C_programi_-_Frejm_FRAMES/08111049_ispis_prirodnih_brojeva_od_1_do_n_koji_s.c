/*
 * ZADATAK 08111049 - 08111049
 * Ispis prirodnih brojeva od 1 do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111049.htm
 */

#include <stdio.h>

int main()
{
printf("Prirodnih brojeva od 1 do n djeljivi sa a\n");
int i, n, a;                // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &n);            // gornja granica brojeva
printf("Unesi djelilac: ");
scanf("%d",&a);             // vrijednosti djelioca

for (i = 1; i <= n; i++)    // ponavljanje za i = 1 do i = n - pocetak petlje
if(i % a == 0)          // i djeljivo sa a?
printf("%d\n", i);  // ispis vrijednost i
return 0;
}

II varijanta   for(int i = 1;
// 08111049
#include <stdio.h>

int main()
{
printf("Prirodnih brojeva od 1 do n djeljivi sa a\n");
int n, a;                   // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &n);            // gornja granica brojeva
printf("Unesi djelilac: ");
scanf("%d",&a);             // vrijednosti djelioca

for (int i = 1; i <= n; i++)  // deklarisanje varijable i; ponavljanje za i = 1 do i = n - pocetak petlje
if(i % a == 0)          // i djeljivo sa a?
printf("%d\n", i);  // ispis vrijednost i
return 0;
}