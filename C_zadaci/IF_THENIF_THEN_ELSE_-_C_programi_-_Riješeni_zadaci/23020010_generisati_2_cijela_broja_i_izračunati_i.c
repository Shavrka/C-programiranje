/*
 * ZADATAK 231_1 - 23020010
 * Generisati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23020010.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
int a, b, razlika, zbir;
double proizvod, kolicnik;
int max_broj = 999, minimum_broj = 0;    // opseg slucajnih brojeva
time_t t1;
/* Inicijalizacija generatora slucajnog broja RND */
srand((unsigned) time(&t1));

a = rand() % (max_broj + 1 - minimum_broj) + minimum_broj;     // 0 - 999
b  = rand() % (max_broj + 1 - minimum_broj) + minimum_broj;     // 0 - 999
printf("Prvi broj = %d \t", a);
printf("Drugi broj = %d \n", b);

proizvod = a * b;
razlika = a - b;
zbir = a + b;

printf("Zbir = %d \n", zbir);
printf("Razlika = %d \n", razlika);
printf("Proizvod = %f \n", proizvod);

if (b != 0)    {                                        // nazivnik != 0 ?
kolicnik = (double)a / b;                           // nazivnik != 0
printf("Kolicnik = %f \n", kolicnik);
}
else
printf("Nije moguce dijeliti sa 0");                // nazivnik == 0
return 0;
}