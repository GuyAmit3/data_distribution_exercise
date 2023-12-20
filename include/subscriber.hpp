#pragma once

#include <set>
#include <cstdint>

#include "shape_type.hpp"


// TODO: Implement socket communication.
class Subscriber
{
public:
    Subscriber(uint32_t ip, uint16_t port, const std::set<ShapeType>& valid_shape_types);

    // void subscribe(); - sends subscribing request, then listen for published data sent back.
private:
    // int _udp_client_socket;
    std::set<ShapeType> _valid_shape_types;
};
