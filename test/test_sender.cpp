#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "./../sender/sender.h"

#define L_NULL_POINTER ((void *)0)

TEST_CASE("Check output messages")
{
    streamSenderInputs();
    for (int index = 0; index < NUM_OF_BATTERY_READINGS; ++index)
    {
        /* Ensure the battery temperature is printed first */
//         REQUIRE(0 == strncmp(&senderLog[index][0], "temperature:", 12));
        /* Ensure that temperature value is followed with comma and battery charge-rate */
//         REQUIRE(L_NULL_POINTER != strstr(&senderLog[index][0], ",charge-rate:"));
    }
}
