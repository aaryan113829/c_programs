#include <stdio.h>
int main() {
    
    float temperature, celsius; 
    
    printf("\t\t** Find Out Temperatature Fahrenheit To Celsiuc. **");
    printf("\nEnter Temperature: ");
    scanf("%f", &temperature);
    
    celsius = (temperature- 32)*5/9;
    printf("\nCelsius is = %.3f", celsius);

    return 0;
}
