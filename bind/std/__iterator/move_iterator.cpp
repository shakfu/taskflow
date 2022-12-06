#include <__iterator/move_iterator.h>
#include <__memory/shared_ptr.h>
#include <chrono>
#include <functional>
#include <memory>
#include <ratio>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/topology.hpp>
#include <taskflow/utility/small_vector.hpp>
#include <typeinfo>
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

void bind_std___iterator_move_iterator(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::move_iterator file:__iterator/move_iterator.h line:27
		pybind11::class_<std::move_iterator<tf::Node **>, std::shared_ptr<std::move_iterator<tf::Node **>>> cl(M("std"), "move_iterator_tf_Node__star__star__t", "");
		cl.def( pybind11::init( [](){ return new std::move_iterator<tf::Node **>(); } ) );
		cl.def( pybind11::init( [](std::move_iterator<tf::Node **> const &o){ return new std::move_iterator<tf::Node **>(o); } ) );
		cl.def("base", (class tf::Node ** (std::move_iterator<tf::Node **>::*)() const) &std::move_iterator<tf::Node **>::base, "C++: std::move_iterator<tf::Node **>::base() const --> class tf::Node **", pybind11::return_value_policy::automatic);
		cl.def("arrow", (class tf::Node ** (std::move_iterator<tf::Node **>::*)() const) &std::move_iterator<tf::Node **>::operator->, "C++: std::move_iterator<tf::Node **>::operator->() const --> class tf::Node **", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class std::move_iterator<class tf::Node **> & (std::move_iterator<tf::Node **>::*)()) &std::move_iterator<tf::Node **>::operator++, "C++: std::move_iterator<tf::Node **>::operator++() --> class std::move_iterator<class tf::Node **> &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class std::move_iterator<class tf::Node **> (std::move_iterator<tf::Node **>::*)(int)) &std::move_iterator<tf::Node **>::operator++, "C++: std::move_iterator<tf::Node **>::operator++(int) --> class std::move_iterator<class tf::Node **>", pybind11::arg(""));
		cl.def("minus_minus", (class std::move_iterator<class tf::Node **> & (std::move_iterator<tf::Node **>::*)()) &std::move_iterator<tf::Node **>::operator--, "C++: std::move_iterator<tf::Node **>::operator--() --> class std::move_iterator<class tf::Node **> &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (class std::move_iterator<class tf::Node **> (std::move_iterator<tf::Node **>::*)(int)) &std::move_iterator<tf::Node **>::operator--, "C++: std::move_iterator<tf::Node **>::operator--(int) --> class std::move_iterator<class tf::Node **>", pybind11::arg(""));
		cl.def("__add__", (class std::move_iterator<class tf::Node **> (std::move_iterator<tf::Node **>::*)(long) const) &std::move_iterator<tf::Node **>::operator+, "C++: std::move_iterator<tf::Node **>::operator+(long) const --> class std::move_iterator<class tf::Node **>", pybind11::arg("__n"));
		cl.def("__iadd__", (class std::move_iterator<class tf::Node **> & (std::move_iterator<tf::Node **>::*)(long)) &std::move_iterator<tf::Node **>::operator+=, "C++: std::move_iterator<tf::Node **>::operator+=(long) --> class std::move_iterator<class tf::Node **> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__sub__", (class std::move_iterator<class tf::Node **> (std::move_iterator<tf::Node **>::*)(long) const) &std::move_iterator<tf::Node **>::operator-, "C++: std::move_iterator<tf::Node **>::operator-(long) const --> class std::move_iterator<class tf::Node **>", pybind11::arg("__n"));
		cl.def("__isub__", (class std::move_iterator<class tf::Node **> & (std::move_iterator<tf::Node **>::*)(long)) &std::move_iterator<tf::Node **>::operator-=, "C++: std::move_iterator<tf::Node **>::operator-=(long) --> class std::move_iterator<class tf::Node **> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
	}
}
