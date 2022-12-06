#include <__functional/function.h>
#include <__functional/hash.h>
#include <__functional/operations.h>
#include <__functional/reference_wrapper.h>
#include <__functional/weak_result_type.h>
#include <__iterator/iterator_traits.h>
#include <__iterator/wrap_iter.h>
#include <__memory/compressed_pair.h>
#include <__memory/pointer_traits.h>
#include <__memory/shared_ptr.h>
#include <__memory/unique_ptr.h>
#include <__split_buffer>
#include <__tuple>
#include <__utility/declval.h>
#include <__utility/forward.h>
#include <__utility/piecewise_construct.h>
#include <__utility/swap.h>
#include <__variant/monostate.h>
#include <_stdio.h>
#include <atomic>
#include <bitset>
#include <chrono>
#include <deque>
#include <exception>
#include <filesystem>
#include <fstream>
#include <functional>
#include <future>
#include <ios>
#include <iterator>
#include <list>
#include <locale>
#include <memory>
#include <mutex>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ratio>
#include <sstream>
#include <sstream> // __str__
#include <stack>
#include <string>
#include <string_view>
#include <sys/_pthread/_pthread_types.h>
#include <system_error>
#include <taskflow/algorithm/pipeline.hpp>
#include <taskflow/core/executor.hpp>
#include <taskflow/core/flow_builder.hpp>
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
#include <taskflow/utility/small_vector.hpp>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <utility>
#include <variant>
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

void bind_std_type_traits(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<bool,true>, std::shared_ptr<std::integral_constant<bool,true>>> cl(M("std"), "integral_constant_bool_true_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<bool,true>(); } ) );
		cl.def( pybind11::init( [](std::integral_constant<bool,true> const &o){ return new std::integral_constant<bool,true>(o); } ) );
		cl.def("__call__", (bool (std::integral_constant<bool,true>::*)() const) &std::integral_constant<bool, true>::operator(), "C++: std::integral_constant<bool, true>::operator()() const --> bool");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,0>, std::shared_ptr<std::integral_constant<unsigned long,0>>> cl(M("std"), "integral_constant_unsigned_long_0_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,0>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,0>::*)() const) &std::integral_constant<unsigned long, 0>::operator(), "C++: std::integral_constant<unsigned long, 0>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,2>, std::shared_ptr<std::integral_constant<unsigned long,2>>> cl(M("std"), "integral_constant_unsigned_long_2_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,2>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,2>::*)() const) &std::integral_constant<unsigned long, 2>::operator(), "C++: std::integral_constant<unsigned long, 2>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,8>, std::shared_ptr<std::integral_constant<unsigned long,8>>> cl(M("std"), "integral_constant_unsigned_long_8_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,8>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,8>::*)() const) &std::integral_constant<unsigned long, 8>::operator(), "C++: std::integral_constant<unsigned long, 8>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,1>, std::shared_ptr<std::integral_constant<unsigned long,1>>> cl(M("std"), "integral_constant_unsigned_long_1_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,1>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,1>::*)() const) &std::integral_constant<unsigned long, 1>::operator(), "C++: std::integral_constant<unsigned long, 1>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,3>, std::shared_ptr<std::integral_constant<unsigned long,3>>> cl(M("std"), "integral_constant_unsigned_long_3_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,3>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,3>::*)() const) &std::integral_constant<unsigned long, 3>::operator(), "C++: std::integral_constant<unsigned long, 3>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,4>, std::shared_ptr<std::integral_constant<unsigned long,4>>> cl(M("std"), "integral_constant_unsigned_long_4_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,4>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,4>::*)() const) &std::integral_constant<unsigned long, 4>::operator(), "C++: std::integral_constant<unsigned long, 4>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,5>, std::shared_ptr<std::integral_constant<unsigned long,5>>> cl(M("std"), "integral_constant_unsigned_long_5_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,5>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,5>::*)() const) &std::integral_constant<unsigned long, 5>::operator(), "C++: std::integral_constant<unsigned long, 5>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,6>, std::shared_ptr<std::integral_constant<unsigned long,6>>> cl(M("std"), "integral_constant_unsigned_long_6_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,6>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,6>::*)() const) &std::integral_constant<unsigned long, 6>::operator(), "C++: std::integral_constant<unsigned long, 6>::operator()() const --> unsigned long");
	}
	{ // std::integral_constant file:type_traits line:434
		pybind11::class_<std::integral_constant<unsigned long,7>, std::shared_ptr<std::integral_constant<unsigned long,7>>> cl(M("std"), "integral_constant_unsigned_long_7_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<unsigned long,7>(); } ) );
		cl.def("__call__", (unsigned long (std::integral_constant<unsigned long,7>::*)() const) &std::integral_constant<unsigned long, 7>::operator(), "C++: std::integral_constant<unsigned long, 7>::operator()() const --> unsigned long");
	}
}
