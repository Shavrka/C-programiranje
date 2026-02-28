/*
 * ZADATAK 07211067 - 07211067
 * Zavisno o upisanoj vrijednosti časa 0-23 ispisati poruku:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211067.htm
 */

#include <stdio.h>

main()

{
int x,z;

printf("Unesi x: ");
scanf("%d",&x);

if((x >= 0) && (x <= 8))

{
printf("Dobro jutro");
}
else if((x > 9) && (x <= 18))

{
printf("Dobar dan");
}
else

{
printf("Dobro vece");
}
return 0;
}