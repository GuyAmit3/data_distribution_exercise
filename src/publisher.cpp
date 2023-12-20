#include "publisher.hpp"


Publisher& Publisher::get_instance()
{
	static Publisher instance_ptr;
	return instance_ptr;
}
