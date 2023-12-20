#include <set>
#include <cstdint>

#include "subscriber.hpp"


Subscriber::Subscriber(uint32_t ip, uint16_t port, const std::set<ShapeType>& valid_shape_types) :
    _valid_shape_types(valid_shape_types)
{}
