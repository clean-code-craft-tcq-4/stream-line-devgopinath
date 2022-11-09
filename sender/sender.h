#ifndef SENDER_H
#define SENDER_H

#define NUM_OF_BATTERY_READINGS (50)
#define MAX_LOG_STR_LEN         (35)

int getBatteryTemperature(void);
int getBatteryChargeRate(void);
void streamSenderInputs(void);
void sendToConsole(const char * msg);

extern char senderLog[NUM_OF_BATTERY_READINGS][MAX_LOG_STR_LEN];

#endif
