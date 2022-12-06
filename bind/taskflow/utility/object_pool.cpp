#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/graph.hpp>
#include <taskflow/utility/object_pool.hpp>

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

void bind_taskflow_utility_object_pool(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::ObjectPool file:taskflow/utility/object_pool.hpp line:66
		pybind11::class_<tf::ObjectPool<tf::Node,65536>, std::shared_ptr<tf::ObjectPool<tf::Node,65536>>> cl(M("tf"), "ObjectPool_tf_Node_65536_t", "");
		cl.def( pybind11::init( [](){ return new tf::ObjectPool<tf::Node,65536>(); } ), "doc" );
		cl.def( pybind11::init<unsigned int>(), pybind11::arg("t") );

		cl.def("animate", (class tf::Node * (tf::ObjectPool<tf::Node,65536>::*)()) &tf::ObjectPool<tf::Node, 65536>::animate, "C++: tf::ObjectPool<tf::Node, 65536>::animate() --> class tf::Node *", pybind11::return_value_policy::automatic);
		cl.def("recycle", (void (tf::ObjectPool<tf::Node,65536>::*)(class tf::Node *)) &tf::ObjectPool<tf::Node, 65536>::recycle, "C++: tf::ObjectPool<tf::Node, 65536>::recycle(class tf::Node *) --> void", pybind11::arg("mem"));
		cl.def("num_bins_per_local_heap", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_bins_per_local_heap, "C++: tf::ObjectPool<tf::Node, 65536>::num_bins_per_local_heap() const --> unsigned long");
		cl.def("num_objects_per_bin", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_objects_per_bin, "C++: tf::ObjectPool<tf::Node, 65536>::num_objects_per_bin() const --> unsigned long");
		cl.def("num_objects_per_block", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_objects_per_block, "C++: tf::ObjectPool<tf::Node, 65536>::num_objects_per_block() const --> unsigned long");
		cl.def("num_available_objects", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_available_objects, "C++: tf::ObjectPool<tf::Node, 65536>::num_available_objects() const --> unsigned long");
		cl.def("num_allocated_objects", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_allocated_objects, "C++: tf::ObjectPool<tf::Node, 65536>::num_allocated_objects() const --> unsigned long");
		cl.def("capacity", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::capacity, "C++: tf::ObjectPool<tf::Node, 65536>::capacity() const --> unsigned long");
		cl.def("num_local_heaps", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_local_heaps, "C++: tf::ObjectPool<tf::Node, 65536>::num_local_heaps() const --> unsigned long");
		cl.def("num_global_heaps", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_global_heaps, "C++: tf::ObjectPool<tf::Node, 65536>::num_global_heaps() const --> unsigned long");
		cl.def("num_heaps", (unsigned long (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::num_heaps, "C++: tf::ObjectPool<tf::Node, 65536>::num_heaps() const --> unsigned long");
		cl.def("emptiness_threshold", (float (tf::ObjectPool<tf::Node,65536>::*)() const) &tf::ObjectPool<tf::Node, 65536>::emptiness_threshold, "C++: tf::ObjectPool<tf::Node, 65536>::emptiness_threshold() const --> float");
	}
}
