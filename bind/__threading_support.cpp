#include <sstream> // __str__
#include <thread>

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

void bind___threading_support(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::thread::id file:__threading_support line:416
		pybind11::class_<std::thread::id, std::shared_ptr<std::thread::id>> cl(M("st"), "__thread_id", "");
		cl.def( pybind11::init( [](){ return new std::thread::id(); } ) );
		cl.def( pybind11::init( [](std::thread::id const &o){ return new std::thread::id(o); } ) );
		cl.def("__reset", (void (std::thread::id::*)()) &std::thread::id::__reset, "C++: std::thread::id::__reset() --> void");
		cl.def("assign", (std::thread::id & (std::thread::id::*)(const std::thread::id &)) &std::thread::id::operator=, "C++: std::thread::id::operator=(const std::thread::id &) --> std::thread::id &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
