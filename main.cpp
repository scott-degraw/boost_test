#include <iostream>
#include <boost/compute/core.hpp>

namespace compute = boost::compute;

int main()
{
    compute::device device = compute::system::default_device();

    std::cout << "Default device: " << device.name() << std::endl;

    return 0;
}
