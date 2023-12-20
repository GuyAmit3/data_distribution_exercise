#pragma once

#include <cstdint>


class Coordinates
{
public:
    Coordinates(int8_t latitude_degrees, int8_t longitude_degrees, uint16_t _altitude_meters); 


private:
    int8_t _latitude_degrees;
    int8_t _longitude_degrees;
    uint16_t _altitude_meters;
};