#include <memory>
#include <string>
#include <string_view>
#include <taskflow/utility/math.hpp>
#include <taskflow/utility/os.hpp>

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

void bind_taskflow_utility_os(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// tf::get_env(const std::string &) file:taskflow/utility/os.hpp line:138
	M("tf").def("get_env", (std::string (*)(const std::string &)) &tf::get_env, "C++: tf::get_env(const std::string &) --> std::string", pybind11::arg("str"));

	// tf::has_env(const std::string &) file:taskflow/utility/os.hpp line:157
	M("tf").def("has_env", (bool (*)(const std::string &)) &tf::has_env, "C++: tf::has_env(const std::string &) --> bool", pybind11::arg("str"));

	// tf::unique_id() file:taskflow/utility/math.hpp line:120
	M("tf").def("unique_id", (unsigned long (*)()) &tf::unique_id<unsigned long,nullptr>, "C++: tf::unique_id() --> unsigned long");

}
