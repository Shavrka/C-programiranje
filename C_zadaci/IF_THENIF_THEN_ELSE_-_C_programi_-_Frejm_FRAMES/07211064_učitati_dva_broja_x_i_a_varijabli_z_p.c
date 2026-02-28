/*
 * ZADATAK 07211064 - 07211064
 * Učitati dva broja (x i a). Varijabli z pridružiti vrijednost prema slijedećem izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211064.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
int a;
float x,z;

printf("Unesite varijablu: X: ");
scanf("%f",&x);

printf("Unesite varijablu A: ");
scanf("%d",&a);

if(x > a)
z=x/3;
else
z=x+3;
printf("%f",z);

return 0;
}