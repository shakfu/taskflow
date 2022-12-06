#include <__variant/monostate.h>
#include <sstream> // __str__
#include <taskflow/core/graph.hpp>
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

void bind_taskflow_utility_traits_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<std::monostate,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::shared_ptr<tf::get_index<std::monostate,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>>, tf::get_index_impl<0,std::monostate, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_std_monostate_std_variant_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<std::monostate,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,0>::*)() const) &std::integral_constant<unsigned long, 0>::operator(), "C++: std::integral_constant<unsigned long, 0>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<0,tf::Node::Static, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<0,tf::Node::Static, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<1,tf::Node::Static, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_0_tf_Node_Static_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,tf::Node::Static, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<1,tf::Node::Dynamic, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<1,tf::Node::Dynamic, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<2,tf::Node::Dynamic, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_1_tf_Node_Dynamic_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,tf::Node::Dynamic, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<2,tf::Node::Condition, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<2,tf::Node::Condition, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<3,tf::Node::Condition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_2_tf_Node_Condition_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<2,tf::Node::Condition, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,3>::*)() const) &std::integral_constant<unsigned long, 3>::operator(), "C++: std::integral_constant<unsigned long, 3>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<3,tf::Node::MultiCondition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<3,tf::Node::MultiCondition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<4,tf::Node::MultiCondition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_3_tf_Node_MultiCondition_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<3,tf::Node::MultiCondition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,4>::*)() const) &std::integral_constant<unsigned long, 4>::operator(), "C++: std::integral_constant<unsigned long, 4>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<4,tf::Node::Module, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<4,tf::Node::Module, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<5,tf::Node::Module, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_4_tf_Node_Module_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<4,tf::Node::Module, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,5>::*)() const) &std::integral_constant<unsigned long, 5>::operator(), "C++: std::integral_constant<unsigned long, 5>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<5,tf::Node::Async, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<5,tf::Node::Async, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<6,tf::Node::Async, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_5_tf_Node_Async_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<5,tf::Node::Async, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,6>::*)() const) &std::integral_constant<unsigned long, 6>::operator(), "C++: std::integral_constant<unsigned long, 6>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<6,tf::Node::SilentAsync, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<6,tf::Node::SilentAsync, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<7,tf::Node::SilentAsync, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_6_tf_Node_SilentAsync_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<6,tf::Node::SilentAsync, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,7>::*)() const) &std::integral_constant<unsigned long, 7>::operator(), "C++: std::integral_constant<unsigned long, 7>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<7,tf::Node::Runtime, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<7,tf::Node::Runtime, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<8,tf::Node::Runtime, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_7_tf_Node_Runtime_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<7,tf::Node::Runtime, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<1,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>, std::shared_ptr<tf::get_index_impl<1,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>>, tf::get_index_impl<2,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::AsyncTopology>>> cl(M("tf"), "get_index_impl_1_std_weak_ptr_tf_AsyncTopology_std_weak_ptr_tf_Topology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<0,std::weak_ptr<tf::Topology>, std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>, std::shared_ptr<tf::get_index_impl<0,std::weak_ptr<tf::Topology>, std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>>, tf::get_index_impl<1,std::weak_ptr<tf::Topology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>> cl(M("tf"), "get_index_impl_0_std_weak_ptr_tf_Topology_std_monostate_std_weak_ptr_tf_Topology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,std::weak_ptr<tf::Topology>, std::monostate, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	{ // tf::get_index file:taskflow/utility/traits.hpp line:132
		pybind11::class_<tf::get_index<tf::Node::Static,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::shared_ptr<tf::get_index<tf::Node::Static,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>>, tf::get_index_impl<0,tf::Node::Static, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_tf_Node_Static_std_variant_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index<tf::Node::Static,std::variant<std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<0,tf::Node::Dynamic, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<0,tf::Node::Dynamic, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<1,tf::Node::Dynamic, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_0_tf_Node_Dynamic_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,tf::Node::Dynamic, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:129
		pybind11::class_<tf::get_index_impl<1,tf::Node::Condition, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<1,tf::Node::Condition, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, tf::get_index_impl<2,tf::Node::Condition, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>> cl(M("tf"), "get_index_impl_1_tf_Node_Condition_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,tf::Node::Condition, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,3>::*)() const) &std::integral_constant<unsigned long, 3>::operator(), "C++: std::integral_constant<unsigned long, 3>::operator()() const --> unsigned long");
	}
}
