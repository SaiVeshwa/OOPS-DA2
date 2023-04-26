#include <stdio.h>

int main() {
    float chennai_temps[7];
    float gangtok_temps[7];
    float delhi_temp, haveri_temp;

    
    for (int i = 0; i < 7; i++) {
        printf("Enter the temperature in Chennai for day %d: ", i+1);
        scanf("%f", &chennai_temps[i]);

        
        if (chennai_temps[i] < 28 || chennai_temps[i] > 33) {
            printf("Error: Temperature must be between 28C and 33C.\n");
            return 1;
        }
    }

    
    delhi_temp = chennai_temps[0] - 8;
    haveri_temp = chennai_temps[0] + 5;

    
    for (int i = 0; i < 7; i++) {
        gangtok_temps[i] = haveri_temp - delhi_temp;

        printf("Temperature in Gangtok for day %d: %.2fC\n", i+1, gangtok_temps[i]);
    }

    return 0;
}
