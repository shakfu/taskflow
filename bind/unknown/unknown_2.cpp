#include <ios>
#include <iterator>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// tf::CustomGraphBase file: line:30
struct PyCallBack_tf_CustomGraphBase : public tf::CustomGraphBase {
	using tf::CustomGraphBase::CustomGraphBase;

	void dump(std::ostream & a0, const void * a1, const std::string & a2) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::CustomGraphBase *>(this), "dump");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"CustomGraphBase::dump\"");
	}
};

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::SmallVectorBase file: line:61
		pybind11::class_<tf::SmallVectorBase, std::shared_ptr<tf::SmallVectorBase>> cl(M("tf"), "SmallVectorBase", "");
		cl.def( pybind11::init( [](tf::SmallVectorBase const &o){ return new tf::SmallVectorBase(o); } ) );
		cl.def("size_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::size_in_bytes, "This returns size()*sizeof(T).\n\nC++: tf::SmallVectorBase::size_in_bytes() const --> unsigned long");
		cl.def("capacity_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::capacity_in_bytes, "capacity_in_bytes - This returns capacity()*sizeof(T).\n\nC++: tf::SmallVectorBase::capacity_in_bytes() const --> unsigned long");
		cl.def("empty", (bool (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::empty, "C++: tf::SmallVectorBase::empty() const --> bool");
	}
	{ // tf::Future file: line:539
		pybind11::class_<tf::Future<void>, std::shared_ptr<tf::Future<void>>, std::future<void>> cl(M("tf"), "Future_void_t", "");
		cl.def( pybind11::init( [](){ return new tf::Future<void>(); } ) );
		cl.def("cancel", (bool (tf::Future<void>::*)()) &tf::Future<void>::cancel, "C++: tf::Future<void>::cancel() --> bool");
		cl.def("share", (class std::shared_future<void> (std::future<void>::*)()) &std::future<void>::share, "C++: std::future<void>::share() --> class std::shared_future<void>");
		cl.def("get", (void (std::future<void>::*)()) &std::future<void>::get, "C++: std::future<void>::get() --> void");
		cl.def("swap", (void (std::future<void>::*)(class std::future<void> &)) &std::future<void>::swap, "C++: std::future<void>::swap(class std::future<void> &) --> void", pybind11::arg("__rhs"));
		cl.def("valid", (bool (std::future<void>::*)() const) &std::future<void>::valid, "C++: std::future<void>::valid() const --> bool");
		cl.def("wait", (void (std::future<void>::*)() const) &std::future<void>::wait, "C++: std::future<void>::wait() const --> void");
	}
	{ // tf::Semaphore file: line:69
		pybind11::class_<tf::Semaphore, std::shared_ptr<tf::Semaphore>> cl(M("tf"), "Semaphore", "class to create a semophore object for building a concurrency constraint\n\nA semaphore creates a constraint that limits the maximum concurrency,\ni.e., the number of workers, in a set of tasks.\nYou can let a task acquire/release one or multiple semaphores before/after\nexecuting its work.\nA task can acquire and release a semaphore,\nor just acquire or just release it.\nA tf::Semaphore object starts with an initial count.\nAs long as that count is above 0, tasks can acquire the semaphore and do\ntheir work.\nIf the count is 0 or less, a task trying to acquire the semaphore will not run\nbut goes to a waiting list of that semaphore.\nWhen the semaphore is released by another task,\nit reschedules all tasks on that waiting list.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nThe above example creates five tasks with no dependencies between them.\nUnder normal circumstances, the five tasks would be executed concurrently.\nHowever, this example has a semaphore with initial count 1,\nand all tasks need to acquire that semaphore before running and release that\nsemaphore after they are done.\nThis arrangement limits the number of concurrently running tasks to only one.");
		cl.def( pybind11::init<unsigned long>(), pybind11::arg("max_workers") );

		cl.def("count", (unsigned long (tf::Semaphore::*)() const) &tf::Semaphore::count, "queries the counter value (not thread-safe during the run)\n\nC++: tf::Semaphore::count() const --> unsigned long");
	}
	{ // tf::TopologyBase file: line:9
		pybind11::class_<tf::TopologyBase, std::shared_ptr<tf::TopologyBase>> cl(M("tf"), "TopologyBase", "");
		cl.def( pybind11::init( [](){ return new tf::TopologyBase(); } ) );
	}
	{ // tf::AsyncTopology file: line:25
		pybind11::class_<tf::AsyncTopology, std::shared_ptr<tf::AsyncTopology>, tf::TopologyBase> cl(M("tf"), "AsyncTopology", "");
		cl.def( pybind11::init( [](){ return new tf::AsyncTopology(); } ) );
	}
	{ // tf::Topology file: line:31
		pybind11::class_<tf::Topology, std::shared_ptr<tf::Topology>, tf::TopologyBase> cl(M("tf"), "Topology", "");
	}
	{ // tf::CustomGraphBase file: line:30
		pybind11::class_<tf::CustomGraphBase, std::shared_ptr<tf::CustomGraphBase>, PyCallBack_tf_CustomGraphBase> cl(M("tf"), "CustomGraphBase", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_tf_CustomGraphBase(); } ) );
		cl.def("dump", (void (tf::CustomGraphBase::*)(std::ostream &, const void *, const std::string &) const) &tf::CustomGraphBase::dump, "C++: tf::CustomGraphBase::dump(std::ostream &, const void *, const std::string &) const --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class tf::CustomGraphBase & (tf::CustomGraphBase::*)(const class tf::CustomGraphBase &)) &tf::CustomGraphBase::operator=, "C++: tf::CustomGraphBase::operator=(const class tf::CustomGraphBase &) --> class tf::CustomGraphBase &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // tf::Graph file: line:57
		pybind11::class_<tf::Graph, std::shared_ptr<tf::Graph>> cl(M("tf"), "Graph", "class to create a graph object\n\nA graph is the ultimate storage for a task dependency graph and is the main\ngateway to interact with an executor.\nA graph manages a set of nodes in a global object pool that animates and\nrecycles node objects efficiently without going through repetitive and\nexpensive memory allocations and deallocations.\nThis class is mainly used for creating an opaque graph object in a custom\nclass to interact with the executor through taskflow composition.\n\nA graph object is move-only.");
		cl.def( pybind11::init( [](){ return new tf::Graph(); } ) );
		cl.def("empty", (bool (tf::Graph::*)() const) &tf::Graph::empty, "queries if the graph is empty\n\nC++: tf::Graph::empty() const --> bool");
		cl.def("size", (unsigned long (tf::Graph::*)() const) &tf::Graph::size, "queries the number of nodes in the graph\n\nC++: tf::Graph::size() const --> unsigned long");
		cl.def("clear", (void (tf::Graph::*)()) &tf::Graph::clear, "clears the graph\n\nC++: tf::Graph::clear() --> void");
	}
	{ // tf::Runtime file: line:151
		pybind11::class_<tf::Runtime, std::shared_ptr<tf::Runtime>> cl(M("tf"), "Runtime", "class to create a runtime object used by a runtime task\n\nA runtime object is used by a runtime task for users to interact with the\nscheduling runtime, such as scheduling an active task and\nspawning a subflow.\n\n\n\n\n\n\n\n\n\nA runtime task is associated with an executor and a worker that\nruns the runtime task.");
		cl.def( pybind11::init( [](tf::Runtime const &o){ return new tf::Runtime(o); } ) );
		cl.def("executor", (class tf::Executor & (tf::Runtime::*)()) &tf::Runtime::executor, "obtains the running executor\n\n  The running executor of a runtime task is the executor that runs\n  the parent taskflow of that runtime task.\n\n  \n\n\n\n\n\n\n\n  \n\nC++: tf::Runtime::executor() --> class tf::Executor &", pybind11::return_value_policy::automatic);
		cl.def("schedule", (void (tf::Runtime::*)(class tf::Task)) &tf::Runtime::schedule, "schedules an active task immediately to the worker's queue\n\n  \n the given active task to schedule immediately\n\n  This member function immediately schedules an active task to the\n  task queue of the associated worker in the runtime task.\n  An active task is a task in a running taskflow.\n  The task may or may not be running, and scheduling that task\n  will immediately put the task into the task queue of the worker\n  that is running the runtime task.\n  Consider the following example:\n\n  \n\n\n\n\n\n\n\n\n\n\n\n\n\n  The executor will first run the condition task  which returns \n  to inform the scheduler to go to the runtime task \n  During the execution of  it directly schedules task  without\n  going through the normal taskflow graph scheduling process.\n  At this moment, task  is active because its parent taskflow is running.\n  When the taskflow finishes, we will see both  and  in the output.\n\nC++: tf::Runtime::schedule(class tf::Task) --> void", pybind11::arg("task"));
	}
	{ // tf::Node file: line:266
		pybind11::class_<tf::Node, std::shared_ptr<tf::Node>> cl(M("tf"), "Node", "");
		cl.def("num_successors", (unsigned long (tf::Node::*)() const) &tf::Node::num_successors, "C++: tf::Node::num_successors() const --> unsigned long");
		cl.def("num_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_dependents, "C++: tf::Node::num_dependents() const --> unsigned long");
		cl.def("num_strong_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_strong_dependents, "C++: tf::Node::num_strong_dependents() const --> unsigned long");
		cl.def("num_weak_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_weak_dependents, "C++: tf::Node::num_weak_dependents() const --> unsigned long");
		cl.def("name", (const std::string & (tf::Node::*)() const) &tf::Node::name, "C++: tf::Node::name() const --> const std::string &", pybind11::return_value_policy::automatic);
	}
	// tf::TaskType file: line:22
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

	// tf::to_string(enum tf::TaskType) file: line:74
	M("tf").def("to_string", (const char * (*)(enum tf::TaskType)) &tf::to_string, "convert a task type to a human-readable string\n\nThe name of each task type is the litte-case string of its characters.\n\n\n\n\n\n\n\n\n\n\nC++: tf::to_string(enum tf::TaskType) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("type"));

	{ // tf::Task file: line:159
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

		cl.def("__str__", [](tf::Task const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );
	}
	{ // tf::TaskView file: line:604
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
