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

void bind_std_thread(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::thread file:thread line:216
		pybind11::class_<std::thread, std::shared_ptr<std::thread>> cl(M("std"), "thread", "");
		cl.def( pybind11::init( [](){ return new std::thread(); } ) );
		cl.def("swap", (void (std::thread::*)(class std::thread &)) &std::thread::swap, "C++: std::thread::swap(class std::thread &) --> void", pybind11::arg("__t"));
		cl.def("joinable", (bool (std::thread::*)() const) &std::thread::joinable, "C++: std::thread::joinable() const --> bool");
		cl.def("join", (void (std::thread::*)()) &std::thread::join, "C++: std::thread::join() --> void");
		cl.def("detach", (void (std::thread::*)()) &std::thread::detach, "C++: std::thread::detach() --> void");
		cl.def("get_id", (std::thread::id (std::thread::*)() const) &std::thread::get_id, "C++: std::thread::get_id() const --> std::thread::id");
		cl.def("native_handle", (struct _opaque_pthread_t * (std::thread::*)()) &std::thread::native_handle, "C++: std::thread::native_handle() --> struct _opaque_pthread_t *", pybind11::return_value_policy::automatic);
		cl.def_static("hardware_concurrency", (unsigned int (*)()) &std::thread::hardware_concurrency, "C++: std::thread::hardware_concurrency() --> unsigned int");
	}
}
