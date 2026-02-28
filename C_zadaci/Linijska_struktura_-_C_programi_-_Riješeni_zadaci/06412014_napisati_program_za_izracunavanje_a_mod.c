/*
 * ZADATAK 102 - 06412014
 * Napisati program za izracunavanje: a MOD 2, a MOD -2, -a MOD 2, -a MOD -2
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412014.htm
 */

#include<stdio.h>
#include<math.h>

main() {
int a,b,c,d,e;
printf("Unesi broj:");
scanf("%d", &a);
b = a % 2;
c = a % (-2);
d = (-a) % 2;
e = (-a) % (-2);

printf("\n%d % 2 = %d\n", a, b);
printf("%d % -2 = %d\n", a, c);
printf("-%d % 2 = %d\n", a, d);
printf("-%d % -2 = %d", a, e);

getchar();
}