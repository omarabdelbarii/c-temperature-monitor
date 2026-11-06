
#include <stdio.h>

#define ALERT_THRESHOLD_C 30

int main(void) {
    int temperature_c = 27;

    printf("Embedded Temperature Monitor\n");
    printf("Sensor reading: %d C\n", temperature_c);

    if (temperature_c >= ALERT_THRESHOLD_C) {
        printf("ALERT: Temperature is too high!\n");
    } else {
        printf("Status: Temperature is normal.\n");
    }

    return 0;
}

