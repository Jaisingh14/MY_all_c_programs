#include <stdio.h>

float converttemp(float t, char ug, char uc)
{
    float result = t;
    if (ug == 'f' || ug == 'F')
    {
        result = (t - 32) * 5 / 9;
    }
    else if (ug == 'k' || ug == 'K')
    {
        result = t - 273;
    }

    if (uc == 'k' || uc == 'K')
    {
        result = result + 273;
    }
    else if (uc == 'f' || uc == 'F')
    {
        result = (result * 9 / 5) + 32;
    }
    return result;
}

int main()
{
    float temp;
    printf("Enter the value: ");
    scanf("%f", &temp);

    char ug;
    printf("Enter given unit: ");
    scanf(" %c", &ug); // Note the space before %c

    char uc;
    printf("Enter unit to change: ");
    scanf(" %c", &uc); // Note the space before %c

    float convertedTemp = converttemp(temp, ug, uc);
    printf("Converted temperature: %f\n", convertedTemp);

    return 0;
}
