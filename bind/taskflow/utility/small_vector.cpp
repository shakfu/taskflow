#include <taskflow/utility/small_vector.hpp>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_taskflow_utility_small_vector(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// tf::detail::NextCapacity(unsigned long long) file:taskflow/utility/small_vector.hpp line:36
	M("tf::detail").def("NextCapacity", (unsigned long long (*)(unsigned long long)) &tf::detail::NextCapacity, "NextCapacity - Returns the next power of two (in 64-bits)\n       that is strictly greater than A.  Returns zero on overflow.\n       this function assumes A to be positive\n\nC++: tf::detail::NextCapacity(unsigned long long) --> unsigned long long", pybind11::arg("A"));

}
