#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::dsl::TaskSignature file: line:13
		pybind11::class_<tf::dsl::TaskSignature, std::shared_ptr<tf::dsl::TaskSignature>> cl(M("tf::dsl"), "TaskSignature", "");
		cl.def( pybind11::init( [](){ return new tf::dsl::TaskSignature(); } ) );
	}
	{ // tf::dsl::EmptyContext file: line:15
		pybind11::class_<tf::dsl::EmptyContext, std::shared_ptr<tf::dsl::EmptyContext>> cl(M("tf::dsl"), "EmptyContext", "");
		cl.def( pybind11::init( [](){ return new tf::dsl::EmptyContext(); } ) );
	}
}
