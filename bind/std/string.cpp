#include <__functional/binary_function.h>
#include <__functional/hash.h>
#include <__functional/operations.h>
#include <__functional/reference_wrapper.h>
#include <__functional/unary_function.h>
#include <__memory/addressof.h>
#include <__memory/shared_ptr.h>
#include <__memory/uses_allocator.h>
#include <chrono>
#include <deque>
#include <ios>
#include <memory>
#include <mutex>
#include <ostream>
#include <ratio>
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
#include <thread>
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

void bind_std_string(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::fpos file:string line:558
		pybind11::class_<std::fpos<__mbstate_t>, std::shared_ptr<std::fpos<__mbstate_t>>> cl(M("std"), "fpos___mbstate_t_t", "");
		cl.def( pybind11::init( [](){ return new std::fpos<__mbstate_t>(); } ), "doc" );
		cl.def( pybind11::init<long long>(), pybind11::arg("__off") );

		cl.def( pybind11::init( [](std::fpos<__mbstate_t> const &o){ return new std::fpos<__mbstate_t>(o); } ) );
		cl.def("__iadd__", (class std::fpos<__mbstate_t> & (std::fpos<__mbstate_t>::*)(long long)) &std::fpos<__mbstate_t>::operator+=, "C++: std::fpos<__mbstate_t>::operator+=(long long) --> class std::fpos<__mbstate_t> &", pybind11::return_value_policy::automatic, pybind11::arg("__off"));
		cl.def("__add__", (class std::fpos<__mbstate_t> (std::fpos<__mbstate_t>::*)(long long) const) &std::fpos<__mbstate_t>::operator+, "C++: std::fpos<__mbstate_t>::operator+(long long) const --> class std::fpos<__mbstate_t>", pybind11::arg("__off"));
		cl.def("__isub__", (class std::fpos<__mbstate_t> & (std::fpos<__mbstate_t>::*)(long long)) &std::fpos<__mbstate_t>::operator-=, "C++: std::fpos<__mbstate_t>::operator-=(long long) --> class std::fpos<__mbstate_t> &", pybind11::return_value_policy::automatic, pybind11::arg("__off"));
		cl.def("__sub__", (class std::fpos<__mbstate_t> (std::fpos<__mbstate_t>::*)(long long) const) &std::fpos<__mbstate_t>::operator-, "C++: std::fpos<__mbstate_t>::operator-(long long) const --> class std::fpos<__mbstate_t>", pybind11::arg("__off"));
	}
	{ // std::vector file:vector line:493
		pybind11::class_<std::vector<tf::Task>, std::shared_ptr<std::vector<tf::Task>>> cl(M("std"), "vector_tf_Task_t", "");
		cl.def( pybind11::init( [](){ return new std::vector<tf::Task>(); } ) );
		cl.def( pybind11::init<const class std::allocator<class tf::Task> &>(), pybind11::arg("__a") );

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("__n") );

		cl.def( pybind11::init<unsigned long, const class std::allocator<class tf::Task> &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init<unsigned long, const class tf::Task &>(), pybind11::arg("__n"), pybind11::arg("__x") );

		cl.def( pybind11::init<unsigned long, const class tf::Task &, const class std::allocator<class tf::Task> &>(), pybind11::arg("__n"), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<tf::Task> const &o){ return new std::vector<tf::Task>(o); } ) );
		cl.def( pybind11::init<const class std::vector<class tf::Task, class std::allocator<class tf::Task> > &, const class std::allocator<class tf::Task> &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::vector<class tf::Task, class std::allocator<class tf::Task> > & (std::vector<tf::Task>::*)(const class std::vector<class tf::Task, class std::allocator<class tf::Task> > &)) &std::vector<tf::Task>::operator=, "C++: std::vector<tf::Task>::operator=(const class std::vector<class tf::Task, class std::allocator<class tf::Task> > &) --> class std::vector<class tf::Task, class std::allocator<class tf::Task> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::vector<tf::Task>::*)(unsigned long, const class tf::Task &)) &std::vector<tf::Task>::assign, "C++: std::vector<tf::Task>::assign(unsigned long, const class tf::Task &) --> void", pybind11::arg("__n"), pybind11::arg("__u"));
		cl.def("get_allocator", (class std::allocator<class tf::Task> (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::get_allocator, "C++: std::vector<tf::Task>::get_allocator() const --> class std::allocator<class tf::Task>");
		cl.def("size", (unsigned long (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::size, "C++: std::vector<tf::Task>::size() const --> unsigned long");
		cl.def("capacity", (unsigned long (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::capacity, "C++: std::vector<tf::Task>::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::empty, "C++: std::vector<tf::Task>::empty() const --> bool");
		cl.def("max_size", (unsigned long (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::max_size, "C++: std::vector<tf::Task>::max_size() const --> unsigned long");
		cl.def("reserve", (void (std::vector<tf::Task>::*)(unsigned long)) &std::vector<tf::Task>::reserve, "C++: std::vector<tf::Task>::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("shrink_to_fit", (void (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::shrink_to_fit, "C++: std::vector<tf::Task>::shrink_to_fit() --> void");
		cl.def("__getitem__", (class tf::Task & (std::vector<tf::Task>::*)(unsigned long)) &std::vector<tf::Task>::operator[], "C++: std::vector<tf::Task>::operator[](unsigned long) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (class tf::Task & (std::vector<tf::Task>::*)(unsigned long)) &std::vector<tf::Task>::at, "C++: std::vector<tf::Task>::at(unsigned long) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (class tf::Task & (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::front, "C++: std::vector<tf::Task>::front() --> class tf::Task &", pybind11::return_value_policy::automatic);
		cl.def("back", (class tf::Task & (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::back, "C++: std::vector<tf::Task>::back() --> class tf::Task &", pybind11::return_value_policy::automatic);
		cl.def("data", (class tf::Task * (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::data, "C++: std::vector<tf::Task>::data() --> class tf::Task *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<tf::Task>::*)(const class tf::Task &)) &std::vector<tf::Task>::push_back, "C++: std::vector<tf::Task>::push_back(const class tf::Task &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::pop_back, "C++: std::vector<tf::Task>::pop_back() --> void");
		cl.def("clear", (void (std::vector<tf::Task>::*)()) &std::vector<tf::Task>::clear, "C++: std::vector<tf::Task>::clear() --> void");
		cl.def("resize", (void (std::vector<tf::Task>::*)(unsigned long)) &std::vector<tf::Task>::resize, "C++: std::vector<tf::Task>::resize(unsigned long) --> void", pybind11::arg("__sz"));
		cl.def("resize", (void (std::vector<tf::Task>::*)(unsigned long, const class tf::Task &)) &std::vector<tf::Task>::resize, "C++: std::vector<tf::Task>::resize(unsigned long, const class tf::Task &) --> void", pybind11::arg("__sz"), pybind11::arg("__x"));
		cl.def("swap", (void (std::vector<tf::Task>::*)(class std::vector<class tf::Task, class std::allocator<class tf::Task> > &)) &std::vector<tf::Task>::swap, "C++: std::vector<tf::Task>::swap(class std::vector<class tf::Task, class std::allocator<class tf::Task> > &) --> void", pybind11::arg(""));
		cl.def("__invariants", (bool (std::vector<tf::Task>::*)() const) &std::vector<tf::Task>::__invariants, "C++: std::vector<tf::Task>::__invariants() const --> bool");
	}
}
