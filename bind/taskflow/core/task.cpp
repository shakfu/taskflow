#include <ios>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>
#include <taskflow/core/semaphore.hpp>
#include <taskflow/core/task.hpp>

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

void bind_taskflow_core_task(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// tf::TaskType file:taskflow/core/task.hpp line:22
	pybind11::enum_<tf::TaskType>(M("tf"), "TaskType", "enumeration of all task types")
		.value("PLACEHOLDER", tf::TaskType::PLACEHOLDER)
		.value("STATIC", tf::TaskType::STATIC)
		.value("DYNAMIC", tf::TaskType::DYNAMIC)
		.value("CONDITION", tf::TaskType::CONDITION)
		.value("MULTI_CONDITION", tf::TaskType::MULTI_CONDITION)
		.value("MODULE", tf::TaskType::MODULE)
		.value("ASYNC", tf::TaskType::ASYNC)
		.value("RUNTIME", tf::TaskType::RUNTIME)
		.value("UNDEFINED", tf::TaskType::UNDEFINED);

;

	// tf::to_string(enum tf::TaskType) file:taskflow/core/task.hpp line:74
	M("tf").def("to_string", (const char * (*)(enum tf::TaskType)) &tf::to_string, "convert a task type to a human-readable string\n\nThe name of each task type is the litte-case string of its characters.\n\n\n\n\n\n\n\n\n\n\nC++: tf::to_string(enum tf::TaskType) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("type"));

	{ // tf::Task file:taskflow/core/task.hpp line:159
		pybind11::class_<tf::Task, std::shared_ptr<tf::Task>> cl(M("tf"), "Task", "class to create a task handle over a node in a taskflow graph\n\nA task is a wrapper over a node in a taskflow graph.\nIt provides a set of methods for users to access and modify the attributes of\nthe associated node in the taskflow graph.\nA task is very lightweight object (i.e., only storing a node pointer) that\ncan be trivially copied around,\nand it does not own the lifetime of the associated node.");
		cl.def( pybind11::init( [](){ return new tf::Task(); } ) );
		cl.def( pybind11::init( [](tf::Task const &o){ return new tf::Task(o); } ) );
		cl.def("assign", (class tf::Task & (tf::Task::*)(const class tf::Task &)) &tf::Task::operator=, "replaces the contents with a copy of the other task\n\nC++: tf::Task::operator=(const class tf::Task &) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("assign", (class tf::Task & (tf::Task::*)(std::nullptr_t)) &tf::Task::operator=, "replaces the contents with a null pointer\n\nC++: tf::Task::operator=(std::std::nullptr_t) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("__eq__", (bool (tf::Task::*)(const class tf::Task &) const) &tf::Task::operator==, "compares if two tasks are associated with the same graph node\n\nC++: tf::Task::operator==(const class tf::Task &) const --> bool", pybind11::arg("rhs"));
		cl.def("__ne__", (bool (tf::Task::*)(const class tf::Task &) const) &tf::Task::operator!=, "compares if two tasks are not associated with the same graph node\n\nC++: tf::Task::operator!=(const class tf::Task &) const --> bool", pybind11::arg("rhs"));
		cl.def("name", (const std::string & (tf::Task::*)() const) &tf::Task::name, "queries the name of the task\n\nC++: tf::Task::name() const --> const std::string &", pybind11::return_value_policy::automatic);
		cl.def("num_successors", (unsigned long (tf::Task::*)() const) &tf::Task::num_successors, "queries the number of successors of the task\n\nC++: tf::Task::num_successors() const --> unsigned long");
		cl.def("num_dependents", (unsigned long (tf::Task::*)() const) &tf::Task::num_dependents, "queries the number of predecessors of the task\n\nC++: tf::Task::num_dependents() const --> unsigned long");
		cl.def("num_strong_dependents", (unsigned long (tf::Task::*)() const) &tf::Task::num_strong_dependents, "queries the number of strong dependents of the task\n\nC++: tf::Task::num_strong_dependents() const --> unsigned long");
		cl.def("num_weak_dependents", (unsigned long (tf::Task::*)() const) &tf::Task::num_weak_dependents, "queries the number of weak dependents of the task\n\nC++: tf::Task::num_weak_dependents() const --> unsigned long");
		cl.def("name", (class tf::Task & (tf::Task::*)(const std::string &)) &tf::Task::name, "assigns a name to the task\n\n    \n a _string acceptable string\n\n    \n \n    \n\nC++: tf::Task::name(const std::string &) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("name"));
		cl.def("release", (class tf::Task & (tf::Task::*)(class tf::Semaphore &)) &tf::Task::release, "makes the task release this semaphore\n\nC++: tf::Task::release(class tf::Semaphore &) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("semaphore"));
		cl.def("acquire", (class tf::Task & (tf::Task::*)(class tf::Semaphore &)) &tf::Task::acquire, "makes the task acquire this semaphore\n\nC++: tf::Task::acquire(class tf::Semaphore &) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("semaphore"));
		cl.def("data", (class tf::Task & (tf::Task::*)(void *)) &tf::Task::data, "assigns pointer to user data\n\n    \n pointer to user data\n\n    The following example shows how to attach user data to a task and\n    run the task iteratively while changing the data value:\n\n    \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    \n \n    \n\nC++: tf::Task::data(void *) --> class tf::Task &", pybind11::return_value_policy::automatic, pybind11::arg("data"));
		cl.def("reset", (void (tf::Task::*)()) &tf::Task::reset, "resets the task handle to null\n\nC++: tf::Task::reset() --> void");
		cl.def("reset_work", (void (tf::Task::*)()) &tf::Task::reset_work, "resets the associated work to a placeholder\n\nC++: tf::Task::reset_work() --> void");
		cl.def("empty", (bool (tf::Task::*)() const) &tf::Task::empty, "queries if the task handle points to a task node\n\nC++: tf::Task::empty() const --> bool");
		cl.def("has_work", (bool (tf::Task::*)() const) &tf::Task::has_work, "queries if the task has a work assigned\n\nC++: tf::Task::has_work() const --> bool");
		cl.def("hash_value", (unsigned long (tf::Task::*)() const) &tf::Task::hash_value, "obtains a hash value of the underlying node\n\nC++: tf::Task::hash_value() const --> unsigned long");
		cl.def("type", (enum tf::TaskType (tf::Task::*)() const) &tf::Task::type, "returns the task type\n\nC++: tf::Task::type() const --> enum tf::TaskType");
		cl.def("dump", (void (tf::Task::*)(std::ostream &) const) &tf::Task::dump, "dumps the task through an output stream\n\nC++: tf::Task::dump(std::ostream &) const --> void", pybind11::arg("ostream"));
		cl.def("data", (void * (tf::Task::*)() const) &tf::Task::data, "queries pointer to user data\n\nC++: tf::Task::data() const --> void *", pybind11::return_value_policy::automatic);

		cl.def("__str__", [](tf::Task const &o) -> std::string { std::ostringstream s; tf::operator<<(s, o); return s.str(); } );
	}
	{ // tf::TaskView file:taskflow/core/task.hpp line:604
		pybind11::class_<tf::TaskView, std::shared_ptr<tf::TaskView>> cl(M("tf"), "TaskView", "class to access task information from the observer interface");
		cl.def("name", (const std::string & (tf::TaskView::*)() const) &tf::TaskView::name, "queries the name of the task\n\nC++: tf::TaskView::name() const --> const std::string &", pybind11::return_value_policy::automatic);
		cl.def("num_successors", (unsigned long (tf::TaskView::*)() const) &tf::TaskView::num_successors, "queries the number of successors of the task\n\nC++: tf::TaskView::num_successors() const --> unsigned long");
		cl.def("num_dependents", (unsigned long (tf::TaskView::*)() const) &tf::TaskView::num_dependents, "queries the number of predecessors of the task\n\nC++: tf::TaskView::num_dependents() const --> unsigned long");
		cl.def("num_strong_dependents", (unsigned long (tf::TaskView::*)() const) &tf::TaskView::num_strong_dependents, "queries the number of strong dependents of the task\n\nC++: tf::TaskView::num_strong_dependents() const --> unsigned long");
		cl.def("num_weak_dependents", (unsigned long (tf::TaskView::*)() const) &tf::TaskView::num_weak_dependents, "queries the number of weak dependents of the task\n\nC++: tf::TaskView::num_weak_dependents() const --> unsigned long");
		cl.def("type", (enum tf::TaskType (tf::TaskView::*)() const) &tf::TaskView::type, "queries the task type\n\nC++: tf::TaskView::type() const --> enum tf::TaskType");
		cl.def("hash_value", (unsigned long (tf::TaskView::*)() const) &tf::TaskView::hash_value, "obtains a hash value of the underlying node\n\nC++: tf::TaskView::hash_value() const --> unsigned long");
	}
}
