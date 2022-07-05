#include <sstream> // __str__
#include <sys/_pthread/_pthread_types.h>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_sys__pthread__pthread_types(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // _opaque_pthread_t file:sys/_pthread/_pthread_types.h line:103
		pybind11::class_<_opaque_pthread_t, std::shared_ptr<_opaque_pthread_t>> cl(M(""), "_opaque_pthread_t", "");
		cl.def( pybind11::init( [](){ return new _opaque_pthread_t(); } ) );
		cl.def_readwrite("__sig", &_opaque_pthread_t::__sig);
	}
}
