#include <__functional/function.h>
#include <__iterator/iterator_traits.h>
#include <__iterator/move_iterator.h>
#include <__iterator/wrap_iter.h>
#include <__memory/pointer_traits.h>
#include <__memory/shared_ptr.h>
#include <chrono>
#include <deque>
#include <filesystem>
#include <iterator>
#include <list>
#include <memory>
#include <mutex>
#include <ratio>
#include <sstream> // __str__
#include <stack>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#include <taskflow/algorithm/pipeline.hpp>
#include <taskflow/core/executor.hpp>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/notifier.hpp>
#include <taskflow/core/observer.hpp>
#include <taskflow/core/semaphore.hpp>
#include <taskflow/core/task.hpp>
#include <taskflow/core/taskflow.hpp>
#include <taskflow/core/topology.hpp>
#include <taskflow/core/tsq.hpp>
#include <taskflow/core/worker.hpp>
#include <taskflow/utility/object_pool.hpp>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

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

// std::runtime_error file:stdexcept line:99
struct PyCallBack_std_runtime_error : public std::runtime_error {
	using std::runtime_error::runtime_error;

	const char * what() const noexcept override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::runtime_error *>(this), "what");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const char *>::value) {
				static pybind11::detail::override_caster_t<const char *> caster;
				return pybind11::detail::cast_ref<const char *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const char *>(std::move(o));
		}
		return runtime_error::what();
	}
};

void bind_std_stdexcept(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::runtime_error file:stdexcept line:99
		pybind11::class_<std::runtime_error, std::shared_ptr<std::runtime_error>, PyCallBack_std_runtime_error, std::exception> cl(M("std"), "runtime_error", "");
		cl.def( pybind11::init<const std::string &>(), pybind11::arg("") );

		cl.def( pybind11::init<const char *>(), pybind11::arg("") );

		cl.def( pybind11::init( [](PyCallBack_std_runtime_error const &o){ return new PyCallBack_std_runtime_error(o); } ) );
		cl.def( pybind11::init( [](std::runtime_error const &o){ return new std::runtime_error(o); } ) );
		cl.def("assign", (class std::runtime_error & (std::runtime_error::*)(const class std::runtime_error &)) &std::runtime_error::operator=, "C++: std::runtime_error::operator=(const class std::runtime_error &) --> class std::runtime_error &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("what", (const char * (std::runtime_error::*)() const) &std::runtime_error::what, "C++: std::runtime_error::what() const --> const char *", pybind11::return_value_policy::automatic);
	}
}
