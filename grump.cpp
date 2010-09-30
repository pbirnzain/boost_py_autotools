#include "grump.h"
#include <iostream>
#include <string>
#include <Python.h>

int
grumpy::givernd()
{
	return -rand();
}

void
grumpy::except()
{
	throw std::runtime_error("Something went wrong!");
}

void grump_some(  )
{
	std::cout<<"Oh, bother!...\n\n";
}

void grump_a_lot_more(  )
{
	int i, index;
	std::string grumps[5] = { "Aargh!", "Be gone!", "Sigh...",
				  "Not again!", "Go away!" };

	for (i = 0; i < 5; i++)
	{
		index = (5.0 * rand(  ) / (RAND_MAX + 1.0));
		std::cout<<grumps[index]<<std::endl;
	}
}

#include <boost/python.hpp>

BOOST_PYTHON_MODULE(libgrump)
{
	using namespace boost::python;
        class_<grumpy>("Grumpy")
		.def("getrnd", &grumpy::givernd)
		.def("getexcept", &grumpy::except)
		;

	def("grump", grump_some);
	def("grump_a_lot_more", grump_a_lot_more);
}
