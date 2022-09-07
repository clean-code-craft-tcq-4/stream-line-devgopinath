#ifndef SENDER_H
#define SENDER_H

#define NUM_OF_BATTERY_READINGS (50)

int getBatteryTemperature(void);
int getBatteryChargeRate(void);
void streamSenderInputs(void);
void sendToConsole(const char * msg);

#endif
