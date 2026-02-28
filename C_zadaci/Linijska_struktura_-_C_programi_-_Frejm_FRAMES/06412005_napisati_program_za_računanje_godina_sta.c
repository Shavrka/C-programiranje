/*
 * ZADATAK 06412005 - 06412005
 * Napisati program za računanje godina starosti.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06412005.htm
 */

#include <stdio.h>
#include <conio.h>
int main()
{
float tg,gr,gs;
printf("Unesi tekucu godinu:");
scanf("%f",&tg);
printf("Unesi godinu rodenja:");
scanf("%f",&gr);
gs=tg-gr;
printf("Imate godina :%.1f\n",gs);
return 0;
}