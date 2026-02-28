/*
 * ZADATAK 22 - 07211066
 * Napisati program za izračunavanje vrijednosti z prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211066.htm
 */

#include <stdio.h>

int main()
{
int a,z,b;

printf("Unesi A i B: ");
scanf("%d%d",&a,&b); // ulaz

if(a > 1)
z = b / a;       // izracunaj
else                 // a <= 1
if(-6 < a)       // -6 < a
z = a + 3;       // izracunaj; za opseg2 -6 < a <= 1
else                 // a <= -6
z = a + b;       // izracunaj

printf("Rezultat je: %d",z);  // ispis
return 0;
}

II varijanta
#include <stdio.h>
int main()
{
int a,z,b;

printf("Unesi A i B: ");
scanf("%d%d",&a,&b);   // ulaz

if(a > 1) {
z=b / a;           // izracunaj
}
else if((-6 < a) || (a <= 1)) {
z=a+3;             // izracunaj
}
else if(a <= (-6)) {
z=a+b;             // izracunaj
}
printf("Rezultat je: %d",z);  // ispis
return 0;
}