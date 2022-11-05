#include <sstream> // __str__
#include <taskflow/dsl/task_dsl.hpp>
#include <taskflow/dsl/task_trait.hpp>

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

void bind_taskflow_dsl_task_trait(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::dsl::TaskSignature file:taskflow/dsl/task_trait.hpp line:13
		pybind11::class_<tf::dsl::TaskSignature, std::shared_ptr<tf::dsl::TaskSignature>> cl(M("tf::dsl"), "TaskSignature", "");
		cl.def( pybind11::init( [](){ return new tf::dsl::TaskSignature(); } ) );
	}
	{ // tf::dsl::EmptyContext file:taskflow/dsl/task_dsl.hpp line:15
		pybind11::class_<tf::dsl::EmptyContext, std::shared_ptr<tf::dsl::EmptyContext>> cl(M("tf::dsl"), "EmptyContext", "");
		cl.def( pybind11::init( [](){ return new tf::dsl::EmptyContext(); } ) );
	}
}
