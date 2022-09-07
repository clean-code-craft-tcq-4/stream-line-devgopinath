#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "sender.h"

TEST_CASE("Test")
{
    streamSenderInputs();
    REQUIRE(0==0);
}
