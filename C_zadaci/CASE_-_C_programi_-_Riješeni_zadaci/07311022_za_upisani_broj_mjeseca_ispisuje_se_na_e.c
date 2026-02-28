/*
 * ZADATAK 6 - 07311022
 * Za upisani broj mjeseca ispisuje se na ekranu naziv mjeseca.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311022.htm
 */

#include <stdio.h>

main()
{
int mjesec;

printf("Unesite broj mjeseca: ");
scanf("%d",&mjesec);

switch(mjesec)
{
case 1:
printf("Januar");
break;
case 2:
printf("Februar");
break;
case 3:
printf("Mart");
break;
case 4:
printf("April");
break;
case 5:

printf("Maj");
break;
case 6:
printf("Jun");
break;
case 7:
printf("Jul");
break;
case 8:
printf("Avgust");
break;
case 9:
printf("Septembar");
break;
case 10:
printf("Oktobar");
break;
case 11:
printf("Novembar");
break;
case 12:
printf("Decembar");
break;
default:
printf("Greska");
}
return 0;
}