#include <__memory/shared_ptr.h>
#include <__variant/monostate.h>
#include <sstream> // __str__
#include <taskflow/core/graph.hpp>
#include <taskflow/core/topology.hpp>
#include <taskflow/utility/traits.hpp>
#include <variant>

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

void bind_taskflow_utility_traits_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<2,tf::Node::Runtime, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<2,tf::Node::Runtime, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<3,tf::Node::Runtime, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_2_tf_Node_Runtime_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<2,tf::Node::Runtime, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<tf::Node::Async,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::shared_ptr<tf::get_index<tf::Node::Async,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>>, tf::get_index_impl<0,tf::Node::Async, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_tf_Node_Async_std_variant_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<tf::Node::Async,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,6>::*)() const) &std::integral_constant<unsigned long, 6>::operator(), "C++: std::integral_constant<unsigned long, 6>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<0,tf::Node::SilentAsync, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<0,tf::Node::SilentAsync, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<1,tf::Node::SilentAsync, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_0_tf_Node_SilentAsync_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,tf::Node::SilentAsync, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,7>::*)() const) &std::integral_constant<unsigned long, 7>::operator(), "C++: std::integral_constant<unsigned long, 7>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<1,tf::Node::Runtime, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<1,tf::Node::Runtime, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<2,tf::Node::Runtime, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_1_tf_Node_Runtime_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,tf::Node::Runtime, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<tf::Node::SilentAsync,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::shared_ptr<tf::get_index<tf::Node::SilentAsync,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>>, tf::get_index_impl<0,tf::Node::SilentAsync, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_tf_Node_SilentAsync_std_variant_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<tf::Node::SilentAsync,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,7>::*)() const) &std::integral_constant<unsigned long, 7>::operator(), "C++: std::integral_constant<unsigned long, 7>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<0,tf::Node::Runtime, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<0,tf::Node::Runtime, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<1,tf::Node::Runtime, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_0_tf_Node_Runtime_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,tf::Node::Runtime, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<tf::Node::Runtime,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::shared_ptr<tf::get_index<tf::Node::Runtime,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>>, tf::get_index_impl<0,tf::Node::Runtime, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_tf_Node_Runtime_std_variant_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<tf::Node::Runtime,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<std::weak_ptr<tf::AsyncTopology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>, std::shared_ptr<tf::get_index<std::weak_ptr<tf::AsyncTopology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>>, tf::get_index_impl<0,std::weak_ptr<tf::AsyncTopology>, std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>> cl(M("tf"), "get_index_std_weak_ptr_tf_AsyncTopology_std_variant_std_monostate_std_weak_ptr_tf_Topology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<std::weak_ptr<tf::AsyncTopology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<std::weak_ptr<tf::Topology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>, std::shared_ptr<tf::get_index<std::weak_ptr<tf::Topology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>>, tf::get_index_impl<0,std::weak_ptr<tf::Topology>, std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>> cl(M("tf"), "get_index_std_weak_ptr_tf_Topology_std_variant_std_monostate_std_weak_ptr_tf_Topology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<std::weak_ptr<tf::Topology>,std::variant<std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology> >>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
}
