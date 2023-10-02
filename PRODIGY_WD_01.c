#include<stdio.h>
#include<conio.h>
float cels, farn, kel;
float c_to_f(float cels)
{
    farn = cels*1.8+32;
    return farn;
}

float c_to_k(float cels)
{
    kel = cels + 273.15;
    return kel;
}

float f_to_c(float farn)
{
    cels = (farn - 32)/1.8;
    return cels;
}

float f_to_k(float farn)
{
    kel = (farn + 459.67)/1.8;
    return kel;
}

float k_to_c(float kel)
{
    cels = kel - 273.15;
    return cels;
}

float k_to_f(float kel)
{
    farn = kel * 1.8 - 459.67;
    return farn;
}
int main()
{
    float temp, res1, res2;
    int unit;
    printf("Enter the temperature : ");
    scanf("%f",&temp);
    printf("Select the unit for your temperature: \n1. Celsius *C\n2. Fahrenheit *F\n3. Kelvin K\nInput UNIT : ");
    scanf("%d",&unit);

    if (unit == 1)
    {
        res1 = c_to_f(temp);
        res2 = c_to_k(temp);
        printf("Fahrenheit = %f *F\nKelvin = %f K",res1,res2);
    }

    if (unit == 2)
    {
        res1 = f_to_c(temp);
        res2 = f_to_k(temp);
        printf("Celsius = %f *C\nKelvin = %f K",res1,res2);
    }

    if (unit == 3)
    {
        res1 = k_to_c(temp);
        res2 = k_to_f(temp);
        printf("Celsius = %f *C\nFahrenheit = %f *F",res1,res2);
    }
    return 0;
}