#include <cmath>
#include <exception>
#include <functional>
#include <future>
#include <list>
#include <memory>
#include <optional>
#include <random>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/observer.hpp>
#include <taskflow/core/taskflow.hpp>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <utility>

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

void bind_std_future(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::future file:future line:1274
		pybind11::class_<std::future<void>, std::shared_ptr<std::future<void>>> cl(M("std"), "future_void_t", "");
		cl.def( pybind11::init( [](){ return new std::future<void>(); } ) );
		cl.def("share", (class std::shared_future<void> (std::future<void>::*)()) &std::future<void>::share, "C++: std::future<void>::share() --> class std::shared_future<void>");
		cl.def("get", (void (std::future<void>::*)()) &std::future<void>::get, "C++: std::future<void>::get() --> void");
		cl.def("swap", (void (std::future<void>::*)(class std::future<void> &)) &std::future<void>::swap, "C++: std::future<void>::swap(class std::future<void> &) --> void", pybind11::arg("__rhs"));
		cl.def("valid", (bool (std::future<void>::*)() const) &std::future<void>::valid, "C++: std::future<void>::valid() const --> bool");
		cl.def("wait", (void (std::future<void>::*)() const) &std::future<void>::wait, "C++: std::future<void>::wait() const --> void");
	}
	{ // std::shared_future file:future line:2515
		pybind11::class_<std::shared_future<void>, std::shared_ptr<std::shared_future<void>>> cl(M("std"), "shared_future_void_t", "");
		cl.def( pybind11::init( [](){ return new std::shared_future<void>(); } ) );
		cl.def( pybind11::init( [](std::shared_future<void> const &o){ return new std::shared_future<void>(o); } ) );
		cl.def("assign", (class std::shared_future<void> & (std::shared_future<void>::*)(const class std::shared_future<void> &)) &std::shared_future<void>::operator=, "C++: std::shared_future<void>::operator=(const class std::shared_future<void> &) --> class std::shared_future<void> &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def("get", (void (std::shared_future<void>::*)() const) &std::shared_future<void>::get, "C++: std::shared_future<void>::get() const --> void");
		cl.def("swap", (void (std::shared_future<void>::*)(class std::shared_future<void> &)) &std::shared_future<void>::swap, "C++: std::shared_future<void>::swap(class std::shared_future<void> &) --> void", pybind11::arg("__rhs"));
		cl.def("valid", (bool (std::shared_future<void>::*)() const) &std::shared_future<void>::valid, "C++: std::shared_future<void>::valid() const --> bool");
		cl.def("wait", (void (std::shared_future<void>::*)() const) &std::shared_future<void>::wait, "C++: std::shared_future<void>::wait() const --> void");
	}
}
