/*
 * ZADATAK 2 - 07311002
 * Napisati program za ispis dana u sedmici, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311002.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int dan;
printf("Dan u sedmici\n");
printf("Redni broj dana u sedmici\n");
scanf("%i",&dan);
switch(dan)
{
case 1:
printf("Ponedjeljak\n");
break;
case 2:
printf("Utorak\n");
break;
case 3:
printf("Srijeda\n");
break;
case 4:
printf("Cetvrtak\n");
break;
case 5:
printf("Petak\n");
break;
case 6:
printf("Subota\n");
break;
case 7:
printf("Nedjelja\n");
break;
default:
printf("Nepostoji");
break;
}

return 0;
}