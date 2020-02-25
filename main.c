#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,j;
    int tempFahrenheit,tempCelsius;

    scanf("%d", &k);
    scanf("%d", &j);
    printf("You entered : %d\n", k+j);
    scanf("%d", &tempFahrenheit);
    tempCelsius = ((tempFahrenheit*9)/5)+32;
    printf("%d", &tempCelsius);

    return 0;
}
