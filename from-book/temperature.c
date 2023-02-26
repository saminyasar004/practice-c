#include <stdio.h>
#include <stdlib.h>

/**
 * C/5 = (F-32)/9
 * F = 9C/5 + 32
*/

float celsiusToFahrenheit(float celsius) {
  float fahrenheit = ((9 * celsius) / 5) + 32;
  return fahrenheit;
}

float fahrenheitToCelsius(float fahrenheit) {
  float celsius = ((fahrenheit - 32) * 5) / 9;
  return celsius;
}

void temperatureConverter(void) {
  char unit;
  printf("Type C for Celsius or F for Fahrenheit: ");
  scanf("%c", &unit);
  if(unit != 'c' && unit != 'C' && unit != 'f' && unit != 'F') {
    printf("Invalid command.\n");
  } else {
    if(unit == 'c' || unit == 'C') {
      float celsius;
      takeCelsius:
      printf("Enter your celsius value: ");
      scanf("%f", &celsius);
      if(celsius <= 0 || celsius > 0) {
        float fahrenheit = celsiusToFahrenheit(celsius);
        printf("Celsius = %.2f --> Fahrenheit = %.2f\n", celsius, fahrenheit);
      } else {
        goto takeCelsius;
      }
    } else if(unit == 'f' || unit == 'F') {
      float fahrenheit;
      takeFahrenheit:
      printf("Enter your fahrenheit value: ");
      scanf("%f", &fahrenheit);
      if(fahrenheit <= 0 || fahrenheit > 0) {
        float celsius = fahrenheitToCelsius(fahrenheit);
        printf("Fahrenheit = %.2f --> Celsius = %.2f\n", fahrenheit, celsius);
      } else {
        goto takeFahrenheit;
      }
    }
  }
}

void main(void) {
  temperatureConverter();
}