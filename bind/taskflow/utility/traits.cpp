#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/utility/math.hpp>
#include <taskflow/utility/os.hpp>
#include <taskflow/utility/traits.hpp>

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

void bind_taskflow_utility_traits(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<0,std::monostate, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<0,std::monostate, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,0>> cl(M("tf"), "get_index_impl_0_std_monostate_std_monostate_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<0,std::monostate, std::monostate, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,0>::*)() const) &std::integral_constant<unsigned long, 0>::operator(), "C++: std::integral_constant<unsigned long, 0>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<1,tf::Node::Static, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<1,tf::Node::Static, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,1>> cl(M("tf"), "get_index_impl_1_tf_Node_Static_tf_Node_Static_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,tf::Node::Static, tf::Node::Static, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<2,tf::Node::Dynamic, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<2,tf::Node::Dynamic, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,2>> cl(M("tf"), "get_index_impl_2_tf_Node_Dynamic_tf_Node_Dynamic_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<2,tf::Node::Dynamic, tf::Node::Dynamic, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<3,tf::Node::Condition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<3,tf::Node::Condition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,3>> cl(M("tf"), "get_index_impl_3_tf_Node_Condition_tf_Node_Condition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<3,tf::Node::Condition, tf::Node::Condition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,3>::*)() const) &std::integral_constant<unsigned long, 3>::operator(), "C++: std::integral_constant<unsigned long, 3>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<4,tf::Node::MultiCondition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<4,tf::Node::MultiCondition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,4>> cl(M("tf"), "get_index_impl_4_tf_Node_MultiCondition_tf_Node_MultiCondition_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<4,tf::Node::MultiCondition, tf::Node::MultiCondition, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,4>::*)() const) &std::integral_constant<unsigned long, 4>::operator(), "C++: std::integral_constant<unsigned long, 4>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<5,tf::Node::Module, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<5,tf::Node::Module, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,5>> cl(M("tf"), "get_index_impl_5_tf_Node_Module_tf_Node_Module_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<5,tf::Node::Module, tf::Node::Module, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,5>::*)() const) &std::integral_constant<unsigned long, 5>::operator(), "C++: std::integral_constant<unsigned long, 5>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<6,tf::Node::Async, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<6,tf::Node::Async, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,6>> cl(M("tf"), "get_index_impl_6_tf_Node_Async_tf_Node_Async_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<6,tf::Node::Async, tf::Node::Async, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,6>::*)() const) &std::integral_constant<unsigned long, 6>::operator(), "C++: std::integral_constant<unsigned long, 6>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<7,tf::Node::SilentAsync, tf::Node::SilentAsync, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<7,tf::Node::SilentAsync, tf::Node::SilentAsync, tf::Node::Runtime>>, std::integral_constant<unsigned long,7>> cl(M("tf"), "get_index_impl_7_tf_Node_SilentAsync_tf_Node_SilentAsync_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<7,tf::Node::SilentAsync, tf::Node::SilentAsync, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,7>::*)() const) &std::integral_constant<unsigned long, 7>::operator(), "C++: std::integral_constant<unsigned long, 7>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<8,tf::Node::Runtime, tf::Node::Runtime>, std::shared_ptr<tf::get_index_impl<8,tf::Node::Runtime, tf::Node::Runtime>>, std::integral_constant<unsigned long,8>> cl(M("tf"), "get_index_impl_8_tf_Node_Runtime_tf_Node_Runtime_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<8,tf::Node::Runtime, tf::Node::Runtime>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<2,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::AsyncTopology>>, std::shared_ptr<tf::get_index_impl<2,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::AsyncTopology>>>, std::integral_constant<unsigned long,2>> cl(M("tf"), "get_index_impl_2_std_weak_ptr_tf_AsyncTopology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<2,std::weak_ptr<tf::AsyncTopology>, std::weak_ptr<tf::AsyncTopology>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // tf::get_index_impl file:taskflow/utility/traits.hpp line:126
		pybind11::class_<tf::get_index_impl<1,std::weak_ptr<tf::Topology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>, std::shared_ptr<tf::get_index_impl<1,std::weak_ptr<tf::Topology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>>, std::integral_constant<unsigned long,1>> cl(M("tf"), "get_index_impl_1_std_weak_ptr_tf_Topology_std_weak_ptr_tf_Topology_std_weak_ptr_tf_AsyncTopology_t", "");
		cl.def( pybind11::init( [](){ return new tf::get_index_impl<1,std::weak_ptr<tf::Topology>, std::weak_ptr<tf::Topology>, std::weak_ptr<tf::AsyncTopology>>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	// tf::get_env(const std::string &) file:taskflow/utility/os.hpp line:138
	M("tf").def("get_env", (std::string (*)(const std::string &)) &tf::get_env, "C++: tf::get_env(const std::string &) --> std::string", pybind11::arg("str"));

	// tf::has_env(const std::string &) file:taskflow/utility/os.hpp line:157
	M("tf").def("has_env", (bool (*)(const std::string &)) &tf::has_env, "C++: tf::has_env(const std::string &) --> bool", pybind11::arg("str"));

	// tf::unique_id() file:taskflow/utility/math.hpp line:120
	M("tf").def("unique_id", (unsigned long (*)()) &tf::unique_id<unsigned long,nullptr>, "C++: tf::unique_id() --> unsigned long");

}
