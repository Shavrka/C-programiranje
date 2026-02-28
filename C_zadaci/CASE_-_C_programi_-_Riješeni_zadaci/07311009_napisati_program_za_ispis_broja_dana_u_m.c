/*
 * ZADATAK 10 - 07311009
 * Napisati program za ispis broja dana u mjesecu, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311009.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int mjesec, god;
printf("* MJESECI *  ");
printf("Redni broj mjeseca:");
scanf("%i",&mjesec);
printf("godina:");
scanf("%i",&god);
switch(mjesec)
{
case 1:
printf("31 dan");
break;
case 2:
if (((god % 4 == 0) && ( god % 100 != 0)) || (god % 400 == 0)){
printf("Godina je prestupna, 29 dana");
break;
}
else {printf("Godina nije prestupna, 28 dana");}
break;
case 3:
printf("31 dan");
break;
case 4:
printf("30 dan");
break;
case 5:
printf("31 dan");
break;
case 6:
printf("30 dan");
break;
case 7:
printf("31 dan");
break;
case 8:
printf("31 dan");
break;
case 9:
printf("30 dan");
break;
case 10:
printf("31 dan");
break;
case 11:
printf("30 dan");
break;
case 12:
printf("31 dan");
break;
default:
printf("Nepostoji");
break;

}
return 0;
}