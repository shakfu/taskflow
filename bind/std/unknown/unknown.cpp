#include <__memory/shared_ptr.h>
#include <chrono>
#include <deque>
#include <ios>
#include <istream>
#include <locale>
#include <memory>
#include <ostream>
#include <ratio>
#include <sstream> // __str__
#include <stack>
#include <streambuf>
#include <string>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/topology.hpp>
#include <utility>

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

void bind_std_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::basic_ostream file: line:1089
		pybind11::class_<std::ostream, std::shared_ptr<std::ostream>, std::basic_ios<char,std::char_traits<char>>> cl(M("std"), "ostream", "");
		cl.def( pybind11::init<class std::basic_streambuf<char> *>(), pybind11::arg("__sb") );

		cl.def("__lshift__", (std::ostream & (std::ostream::*)(bool)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(bool) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(short)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(short) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(unsigned short)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(unsigned short) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(int)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(int) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(unsigned int)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(unsigned int) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(long)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(unsigned long)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(unsigned long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(long long)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(long long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(unsigned long long)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(unsigned long long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(float)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(float) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__f"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(double)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(double) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__f"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(long double)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(long double) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__f"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(const void *)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(const void *) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__p"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(class std::basic_streambuf<char> *)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(class std::basic_streambuf<char> *) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("__lshift__", (std::ostream & (std::ostream::*)(std::nullptr_t)) &std::basic_ostream<char, std::char_traits<char> >::operator<<, "C++: std::basic_ostream<char, std::char_traits<char> >::operator<<(std::std::nullptr_t) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("put", (std::ostream & (std::ostream::*)(char)) &std::basic_ostream<char, std::char_traits<char> >::put, "C++: std::basic_ostream<char, std::char_traits<char> >::put(char) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("write", (std::ostream & (std::ostream::*)(const char *, long)) &std::basic_ostream<char, std::char_traits<char> >::write, "C++: std::basic_ostream<char, std::char_traits<char> >::write(const char *, long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("flush", (std::ostream & (std::ostream::*)()) &std::basic_ostream<char, std::char_traits<char> >::flush, "C++: std::basic_ostream<char, std::char_traits<char> >::flush() --> std::ostream &", pybind11::return_value_policy::automatic);
		cl.def("tellp", (class std::fpos<__mbstate_t> (std::ostream::*)()) &std::basic_ostream<char, std::char_traits<char> >::tellp, "C++: std::basic_ostream<char, std::char_traits<char> >::tellp() --> class std::fpos<__mbstate_t>");
		cl.def("seekp", (std::ostream & (std::ostream::*)(class std::fpos<__mbstate_t>)) &std::basic_ostream<char, std::char_traits<char> >::seekp, "C++: std::basic_ostream<char, std::char_traits<char> >::seekp(class std::fpos<__mbstate_t>) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__pos"));
		cl.def("seekp", (std::ostream & (std::ostream::*)(long long, enum std::ios_base::seekdir)) &std::basic_ostream<char, std::char_traits<char> >::seekp, "C++: std::basic_ostream<char, std::char_traits<char> >::seekp(long long, enum std::ios_base::seekdir) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__off"), pybind11::arg("__dir"));

		{ // std::basic_ostream<char, std::char_traits<char> >::sentry file:ostream line:184
			auto & enclosing_class = cl;
			pybind11::class_<std::basic_ostream<char, std::char_traits<char> >::sentry, std::shared_ptr<std::basic_ostream<char, std::char_traits<char> >::sentry>> cl(enclosing_class, "sentry", "");
			cl.def( pybind11::init<std::ostream &>(), pybind11::arg("__os") );

		}

	}
}
