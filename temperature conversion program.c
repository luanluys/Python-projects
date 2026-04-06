#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature conversion program\n");
    printf("Type C to convert from Fahrenheit to Celsius\n");
    printf("Type F to convert from Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    while(choice != 'C' && choice != 'F'){
        printf("Invalid input, please choose between C and F.\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
    }

    if(choice == 'C'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else if(choice == 'F'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;

        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }

    return 0;
}