#include "checkType.hpp"
#include "convertType.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
            convert_char(av[1]);
            convert_int(av[1]);
            convert_float(av[1]);
            convert_double(av[1]);
	}
	else
		std::cout << "ERROR: Number Of Argument Invalid!" << std::endl;
	return (0);
}