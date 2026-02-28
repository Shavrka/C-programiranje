/*
 * ZADATAK 14 - 07211002
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211002.htm
 */

#include <stdio.h>

int main()
{
int a,b,y ;
printf("Ukucajte broj a: ");
scanf("%d", &a);
printf("Ukucajte broj b: ");
scanf("%d", &b);
if (a%2==0)       // a parno ?
y=a-b;        // a parno
else              // neparno
y=a+b;        // izracunaj
printf("broj je %d \n", y);

return 0;
}

// 07211002
#include <stdio.h>

int main()
{
int a,b,y ;
printf("Ukucajte broj a \n");
scanf("%d", &a);
printf("Ukucajte broj b \n");
scanf("%d", &b);
if (a%2==0)
y=a-b;
if (a%2==1)
y=a+b;
printf("broj je %d \n", y);

return 0;
}