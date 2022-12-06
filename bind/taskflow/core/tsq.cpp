#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/tsq.hpp>

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

void bind_taskflow_core_tsq(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::TaskQueue file:taskflow/core/tsq.hpp line:28
		pybind11::class_<tf::TaskQueue<tf::Node *>, std::shared_ptr<tf::TaskQueue<tf::Node *>>> cl(M("tf"), "TaskQueue_tf_Node__star__t", "");
		cl.def( pybind11::init( [](){ return new tf::TaskQueue<tf::Node *>(); } ), "doc" );
		cl.def( pybind11::init<long long>(), pybind11::arg("c") );

		cl.def("empty", (bool (tf::TaskQueue<tf::Node *>::*)() const) &tf::TaskQueue<tf::Node *>::empty, "C++: tf::TaskQueue<tf::Node *>::empty() const --> bool");
		cl.def("size", (unsigned long (tf::TaskQueue<tf::Node *>::*)() const) &tf::TaskQueue<tf::Node *>::size, "C++: tf::TaskQueue<tf::Node *>::size() const --> unsigned long");
		cl.def("capacity", (long long (tf::TaskQueue<tf::Node *>::*)() const) &tf::TaskQueue<tf::Node *>::capacity, "C++: tf::TaskQueue<tf::Node *>::capacity() const --> long long");
		cl.def("push", (void (tf::TaskQueue<tf::Node *>::*)(class tf::Node *)) &tf::TaskQueue<tf::Node *>::push, "C++: tf::TaskQueue<tf::Node *>::push(class tf::Node *) --> void", pybind11::arg("o"));
		cl.def("pop", (class tf::Node * (tf::TaskQueue<tf::Node *>::*)()) &tf::TaskQueue<tf::Node *>::pop, "C++: tf::TaskQueue<tf::Node *>::pop() --> class tf::Node *", pybind11::return_value_policy::automatic);
		cl.def("steal", (class tf::Node * (tf::TaskQueue<tf::Node *>::*)()) &tf::TaskQueue<tf::Node *>::steal, "C++: tf::TaskQueue<tf::Node *>::steal() --> class tf::Node *", pybind11::return_value_policy::automatic);
	}
}
