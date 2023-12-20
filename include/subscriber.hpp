#pragma once

#include <set>
#include <cstdint>

#include "shape_type.hpp"


class Subscriber
{
public:
    Subscriber(uint32_t ip, uint16_t port, const std::set<ShapeType>& valid_shape_types);

private:
    int _udp_socket; // TODO: Implement socket communication.
    std::set<ShapeType> _valid_shape_types;
};
