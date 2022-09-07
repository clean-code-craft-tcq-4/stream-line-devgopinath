#include <stdio.h>
#include <stdlib.h>
#include "sender.h"

char senderLog[50][35];

int getBatteryTemperature(void)
{
    return (rand() % 50);
}

int getBatteryChargeRate(void)
{
    return (rand() % 100);
}

void logSenderMessages(const char * msg)
{

}

void streamSenderInputs(void)
{
    for (int iteration = 0; iteration < NUM_OF_BATTERY_READINGS; ++iteration)
    {
        sprintf(&senderLog[iteration][0], "temperature:%d,charge-rate:%d", getBatteryTemperature(), getBatteryChargeRate());
        printf("%s", &senderLog[iteration][0]);
        printf("\n");
    }
}
