#include <ios>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>
#include <taskflow/utility/uuid.hpp>

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

void bind_taskflow_utility_uuid(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::UUID file:taskflow/utility/uuid.hpp line:31
		pybind11::class_<tf::UUID, std::shared_ptr<tf::UUID>> cl(M("tf"), "UUID", "");
		cl.def( pybind11::init( [](){ return new tf::UUID(); } ) );
		cl.def( pybind11::init( [](tf::UUID const &o){ return new tf::UUID(o); } ) );
		cl.def("assign", (struct tf::UUID & (tf::UUID::*)(const struct tf::UUID &)) &tf::UUID::operator=, "C++: tf::UUID::operator=(const struct tf::UUID &) --> struct tf::UUID &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def_static("size", (unsigned long (*)()) &tf::UUID::size, "C++: tf::UUID::size() --> unsigned long");
		cl.def("begin", (unsigned char * (tf::UUID::*)()) &tf::UUID::begin, "C++: tf::UUID::begin() --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("end", (unsigned char * (tf::UUID::*)()) &tf::UUID::end, "C++: tf::UUID::end() --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("is_nil", (bool (tf::UUID::*)() const) &tf::UUID::is_nil, "C++: tf::UUID::is_nil() const --> bool");
		cl.def("swap", (void (tf::UUID::*)(struct tf::UUID &)) &tf::UUID::swap, "C++: tf::UUID::swap(struct tf::UUID &) --> void", pybind11::arg("rhs"));
		cl.def("hash_value", (unsigned long (tf::UUID::*)() const) &tf::UUID::hash_value, "C++: tf::UUID::hash_value() const --> unsigned long");
		cl.def("__eq__", (bool (tf::UUID::*)(const struct tf::UUID &) const) &tf::UUID::operator==, "C++: tf::UUID::operator==(const struct tf::UUID &) const --> bool", pybind11::arg(""));
		cl.def("__ne__", (bool (tf::UUID::*)(const struct tf::UUID &) const) &tf::UUID::operator!=, "C++: tf::UUID::operator!=(const struct tf::UUID &) const --> bool", pybind11::arg(""));
		cl.def("to_string", (std::string (tf::UUID::*)() const) &tf::UUID::to_string, "C++: tf::UUID::to_string() const --> std::string");

		cl.def("__str__", [](tf::UUID const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );
	}
	// tf::swap(struct tf::UUID &, struct tf::UUID &) file:taskflow/utility/uuid.hpp line:211
	M("tf").def("swap", (void (*)(struct tf::UUID &, struct tf::UUID &)) &tf::swap, "C++: tf::swap(struct tf::UUID &, struct tf::UUID &) --> void", pybind11::arg("lhs"), pybind11::arg("rhs"));

}
