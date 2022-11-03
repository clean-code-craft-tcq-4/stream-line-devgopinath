#include <stdio.h>
#include <stdlib.h>
#include "sender.h"

char senderLog[NUM_OF_BATTERY_READINGS][MAX_LOG_STR_LEN];

int getBatteryTemperature(void)
{
    return (rand() % 50);
}

int getBatteryChargeRate(void)
{
    return (rand() % 100);
}

void sendToConsole(const char * msg)
{
    printf("%s", msg);
    printf("\n");
}

void streamSenderInputs(void)
{
    for (int iteration = 0; iteration < NUM_OF_BATTERY_READINGS; ++iteration)
    {
       sprintf(&senderLog[iteration][0], "temperature:%d,charge-rate:%d,", getBatteryTemperature(), getBatteryChargeRate());
        sendToConsole(&senderLog[iteration][0]);
    }
}
