#include <stdio.h>
#include "sender.h"

int getBatteryTemperature(void)
{
    return (rand() % 50);
}

int getBatteryChargeRate(void)
{
    return (rand() % 100);
}

void streamSenderInputs(void)
{
    for (int iteration = 0; interation < NUM_OF_BATTERY_READINGS; ++interation)
    {
        printf("temperature:%d,charge-rate:%d", getBatteryTemperature(), getBatteryChargeRate());
        printf("\n");
    }
}
