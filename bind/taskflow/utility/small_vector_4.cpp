#include <__memory/shared_ptr.h>
#include <ios>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>
#include <taskflow/core/executor.hpp>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/observer.hpp>
#include <taskflow/core/semaphore.hpp>
#include <taskflow/core/task.hpp>
#include <taskflow/core/taskflow.hpp>
#include <taskflow/core/topology.hpp>
#include <taskflow/core/worker.hpp>
#include <taskflow/utility/small_vector.hpp>

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

// tf::CustomGraphBase file:taskflow/core/graph.hpp line:30
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

void bind_taskflow_utility_small_vector_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::SmallVector file:taskflow/utility/small_vector.hpp line:919
		pybind11::class_<tf::SmallVector<tf::Semaphore *,2>, std::shared_ptr<tf::SmallVector<tf::Semaphore *,2>>, tf::SmallVectorImpl<tf::Semaphore *>> cl(M("tf"), "SmallVector_tf_Semaphore__star__2_t", "");
		cl.def( pybind11::init( [](){ return new tf::SmallVector<tf::Semaphore *,2>(); } ) );
		cl.def( pybind11::init( [](unsigned long const & a0){ return new tf::SmallVector<tf::Semaphore *,2>(a0); } ), "doc" , pybind11::arg("Size"));
		cl.def( pybind11::init<unsigned long, class tf::Semaphore *const &>(), pybind11::arg("Size"), pybind11::arg("Value") );

		cl.def( pybind11::init( [](tf::SmallVector<tf::Semaphore *,2> const &o){ return new tf::SmallVector<tf::Semaphore *,2>(o); } ) );
		cl.def("assign", (const class tf::SmallVector<class tf::Semaphore *, 2> & (tf::SmallVector<tf::Semaphore *,2>::*)(const class tf::SmallVector<class tf::Semaphore *, 2> &)) &tf::SmallVector<tf::Semaphore *, 2>::operator=, "C++: tf::SmallVector<tf::Semaphore *, 2>::operator=(const class tf::SmallVector<class tf::Semaphore *, 2> &) --> const class tf::SmallVector<class tf::Semaphore *, 2> &", pybind11::return_value_policy::automatic, pybind11::arg("RHS"));
		cl.def("clear", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)()) &tf::SmallVectorImpl<tf::Semaphore *>::clear, "C++: tf::SmallVectorImpl<tf::Semaphore *>::clear() --> void");
		cl.def("resize", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Semaphore *>::resize, "C++: tf::SmallVectorImpl<tf::Semaphore *>::resize(unsigned long) --> void", pybind11::arg("N"));
		cl.def("resize", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long, class tf::Semaphore *const &)) &tf::SmallVectorImpl<tf::Semaphore *>::resize, "C++: tf::SmallVectorImpl<tf::Semaphore *>::resize(unsigned long, class tf::Semaphore *const &) --> void", pybind11::arg("N"), pybind11::arg("NV"));
		cl.def("reserve", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Semaphore *>::reserve, "C++: tf::SmallVectorImpl<tf::Semaphore *>::reserve(unsigned long) --> void", pybind11::arg("N"));
		cl.def("pop_back_val", (class tf::Semaphore * (tf::SmallVectorImpl<tf::Semaphore *>::*)()) &tf::SmallVectorImpl<tf::Semaphore *>::pop_back_val, "C++: tf::SmallVectorImpl<tf::Semaphore *>::pop_back_val() --> class tf::Semaphore *", pybind11::return_value_policy::automatic);
		cl.def("swap", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(class tf::SmallVectorImpl<class tf::Semaphore *> &)) &tf::SmallVectorImpl<tf::Semaphore *>::swap, "C++: tf::SmallVectorImpl<tf::Semaphore *>::swap(class tf::SmallVectorImpl<class tf::Semaphore *> &) --> void", pybind11::arg("RHS"));
		cl.def("append", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long, class tf::Semaphore *const &)) &tf::SmallVectorImpl<tf::Semaphore *>::append, "C++: tf::SmallVectorImpl<tf::Semaphore *>::append(unsigned long, class tf::Semaphore *const &) --> void", pybind11::arg("NumInputs"), pybind11::arg("Elt"));
		cl.def("assign", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long, class tf::Semaphore *const &)) &tf::SmallVectorImpl<tf::Semaphore *>::assign, "C++: tf::SmallVectorImpl<tf::Semaphore *>::assign(unsigned long, class tf::Semaphore *const &) --> void", pybind11::arg("NumElts"), pybind11::arg("Elt"));
		cl.def("assign", (class tf::SmallVectorImpl<class tf::Semaphore *> & (tf::SmallVectorImpl<tf::Semaphore *>::*)(const class tf::SmallVectorImpl<class tf::Semaphore *> &)) &tf::SmallVectorImpl<tf::Semaphore *>::operator=, "C++: tf::SmallVectorImpl<tf::Semaphore *>::operator=(const class tf::SmallVectorImpl<class tf::Semaphore *> &) --> class tf::SmallVectorImpl<class tf::Semaphore *> &", pybind11::return_value_policy::automatic, pybind11::arg("RHS"));
		cl.def("__eq__", (bool (tf::SmallVectorImpl<tf::Semaphore *>::*)(const class tf::SmallVectorImpl<class tf::Semaphore *> &) const) &tf::SmallVectorImpl<tf::Semaphore *>::operator==, "C++: tf::SmallVectorImpl<tf::Semaphore *>::operator==(const class tf::SmallVectorImpl<class tf::Semaphore *> &) const --> bool", pybind11::arg("RHS"));
		cl.def("__ne__", (bool (tf::SmallVectorImpl<tf::Semaphore *>::*)(const class tf::SmallVectorImpl<class tf::Semaphore *> &) const) &tf::SmallVectorImpl<tf::Semaphore *>::operator!=, "C++: tf::SmallVectorImpl<tf::Semaphore *>::operator!=(const class tf::SmallVectorImpl<class tf::Semaphore *> &) const --> bool", pybind11::arg("RHS"));
		cl.def("set_size", (void (tf::SmallVectorImpl<tf::Semaphore *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Semaphore *>::set_size, "C++: tf::SmallVectorImpl<tf::Semaphore *>::set_size(unsigned long) --> void", pybind11::arg("N"));
		cl.def("push_back", (void (tf::SmallVectorTemplateBase<tf::Semaphore *,true>::*)(class tf::Semaphore *const &)) &tf::SmallVectorTemplateBase<tf::Semaphore *, true>::push_back, "C++: tf::SmallVectorTemplateBase<tf::Semaphore *, true>::push_back(class tf::Semaphore *const &) --> void", pybind11::arg("Elt"));
		cl.def("pop_back", (void (tf::SmallVectorTemplateBase<tf::Semaphore *,true>::*)()) &tf::SmallVectorTemplateBase<tf::Semaphore *, true>::pop_back, "C++: tf::SmallVectorTemplateBase<tf::Semaphore *, true>::pop_back() --> void");
		cl.def("begin", (class tf::Semaphore ** (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::begin, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::begin() --> class tf::Semaphore **", pybind11::return_value_policy::automatic);
		cl.def("end", (class tf::Semaphore ** (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::end, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::end() --> class tf::Semaphore **", pybind11::return_value_policy::automatic);
		cl.def("size", (unsigned long (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::size, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::max_size, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::max_size() const --> unsigned long");
		cl.def("capacity", (unsigned long (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::capacity, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::capacity() const --> unsigned long");
		cl.def("data", (class tf::Semaphore ** (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::data, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::data() --> class tf::Semaphore **", pybind11::return_value_policy::automatic);
		cl.def("__getitem__", (class tf::Semaphore *& (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)(unsigned long)) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::operator[], "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::operator[](unsigned long) --> class tf::Semaphore *&", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("front", (class tf::Semaphore *& (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::front, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::front() --> class tf::Semaphore *&", pybind11::return_value_policy::automatic);
		cl.def("back", (class tf::Semaphore *& (tf::SmallVectorTemplateCommon<tf::Semaphore *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::back, "C++: tf::SmallVectorTemplateCommon<tf::Semaphore *, void>::back() --> class tf::Semaphore *&", pybind11::return_value_policy::automatic);
		cl.def("size_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::size_in_bytes, "This returns size()*sizeof(T).\n\nC++: tf::SmallVectorBase::size_in_bytes() const --> unsigned long");
		cl.def("capacity_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::capacity_in_bytes, "capacity_in_bytes - This returns capacity()*sizeof(T).\n\nC++: tf::SmallVectorBase::capacity_in_bytes() const --> unsigned long");
		cl.def("empty", (bool (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::empty, "C++: tf::SmallVectorBase::empty() const --> bool");
	}
	{ // tf::Future file:taskflow/core/taskflow.hpp line:539
		pybind11::class_<tf::Future<void>, std::shared_ptr<tf::Future<void>>, std::future<void>> cl(M("tf"), "Future_void_t", "");
		cl.def( pybind11::init( [](){ return new tf::Future<void>(); } ) );
		cl.def("cancel", (bool (tf::Future<void>::*)()) &tf::Future<void>::cancel, "C++: tf::Future<void>::cancel() --> bool");
		cl.def("share", (class std::shared_future<void> (std::future<void>::*)()) &std::future<void>::share, "C++: std::future<void>::share() --> class std::shared_future<void>");
		cl.def("get", (void (std::future<void>::*)()) &std::future<void>::get, "C++: std::future<void>::get() --> void");
		cl.def("swap", (void (std::future<void>::*)(class std::future<void> &)) &std::future<void>::swap, "C++: std::future<void>::swap(class std::future<void> &) --> void", pybind11::arg("__rhs"));
		cl.def("valid", (bool (std::future<void>::*)() const) &std::future<void>::valid, "C++: std::future<void>::valid() const --> bool");
		cl.def("wait", (void (std::future<void>::*)() const) &std::future<void>::wait, "C++: std::future<void>::wait() const --> void");
	}
	{ // tf::Semaphore file:taskflow/core/semaphore.hpp line:69
		pybind11::class_<tf::Semaphore, std::shared_ptr<tf::Semaphore>> cl(M("tf"), "Semaphore", "class to create a semophore object for building a concurrency constraint\n\nA semaphore creates a constraint that limits the maximum concurrency,\ni.e., the number of workers, in a set of tasks.\nYou can let a task acquire/release one or multiple semaphores before/after\nexecuting its work.\nA task can acquire and release a semaphore,\nor just acquire or just release it.\nA tf::Semaphore object starts with an initial count.\nAs long as that count is above 0, tasks can acquire the semaphore and do\ntheir work.\nIf the count is 0 or less, a task trying to acquire the semaphore will not run\nbut goes to a waiting list of that semaphore.\nWhen the semaphore is released by another task,\nit reschedules all tasks on that waiting list.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nThe above example creates five tasks with no dependencies between them.\nUnder normal circumstances, the five tasks would be executed concurrently.\nHowever, this example has a semaphore with initial count 1,\nand all tasks need to acquire that semaphore before running and release that\nsemaphore after they are done.\nThis arrangement limits the number of concurrently running tasks to only one.");
		cl.def( pybind11::init<unsigned long>(), pybind11::arg("max_workers") );

		cl.def("count", (unsigned long (tf::Semaphore::*)() const) &tf::Semaphore::count, "queries the counter value (not thread-safe during the run)\n\nC++: tf::Semaphore::count() const --> unsigned long");
	}
	{ // tf::TopologyBase file:taskflow/core/topology.hpp line:9
		pybind11::class_<tf::TopologyBase, std::shared_ptr<tf::TopologyBase>> cl(M("tf"), "TopologyBase", "");
		cl.def( pybind11::init( [](){ return new tf::TopologyBase(); } ) );
	}
	{ // tf::AsyncTopology file:taskflow/core/topology.hpp line:25
		pybind11::class_<tf::AsyncTopology, std::shared_ptr<tf::AsyncTopology>, tf::TopologyBase> cl(M("tf"), "AsyncTopology", "");
		cl.def( pybind11::init( [](){ return new tf::AsyncTopology(); } ) );
	}
	{ // tf::Topology file:taskflow/core/topology.hpp line:31
		pybind11::class_<tf::Topology, std::shared_ptr<tf::Topology>, tf::TopologyBase> cl(M("tf"), "Topology", "");
	}
	{ // tf::CustomGraphBase file:taskflow/core/graph.hpp line:30
		pybind11::class_<tf::CustomGraphBase, std::shared_ptr<tf::CustomGraphBase>, PyCallBack_tf_CustomGraphBase> cl(M("tf"), "CustomGraphBase", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_tf_CustomGraphBase(); } ) );
		cl.def("dump", (void (tf::CustomGraphBase::*)(std::ostream &, const void *, const std::string &) const) &tf::CustomGraphBase::dump, "C++: tf::CustomGraphBase::dump(std::ostream &, const void *, const std::string &) const --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class tf::CustomGraphBase & (tf::CustomGraphBase::*)(const class tf::CustomGraphBase &)) &tf::CustomGraphBase::operator=, "C++: tf::CustomGraphBase::operator=(const class tf::CustomGraphBase &) --> class tf::CustomGraphBase &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // tf::Graph file:taskflow/core/graph.hpp line:57
		pybind11::class_<tf::Graph, std::shared_ptr<tf::Graph>> cl(M("tf"), "Graph", "class to create a graph object\n\nA graph is the ultimate storage for a task dependency graph and is the main\ngateway to interact with an executor.\nA graph manages a set of nodes in a global object pool that animates and\nrecycles node objects efficiently without going through repetitive and\nexpensive memory allocations and deallocations.\nThis class is mainly used for creating an opaque graph object in a custom\nclass to interact with the executor through taskflow composition.\n\nA graph object is move-only.");
		cl.def( pybind11::init( [](){ return new tf::Graph(); } ) );
		cl.def("empty", (bool (tf::Graph::*)() const) &tf::Graph::empty, "queries if the graph is empty\n\nC++: tf::Graph::empty() const --> bool");
		cl.def("size", (unsigned long (tf::Graph::*)() const) &tf::Graph::size, "queries the number of nodes in the graph\n\nC++: tf::Graph::size() const --> unsigned long");
		cl.def("clear", (void (tf::Graph::*)()) &tf::Graph::clear, "clears the graph\n\nC++: tf::Graph::clear() --> void");
	}
	{ // tf::Runtime file:taskflow/core/graph.hpp line:151
		pybind11::class_<tf::Runtime, std::shared_ptr<tf::Runtime>> cl(M("tf"), "Runtime", "class to create a runtime object used by a runtime task\n\nA runtime object is used by a runtime task for users to interact with the\nscheduling runtime, such as scheduling an active task and\nspawning a subflow.\n\n\n\n\n\n\n\n\n\nA runtime task is associated with an executor and a worker that\nruns the runtime task.");
		cl.def( pybind11::init( [](tf::Runtime const &o){ return new tf::Runtime(o); } ) );
		cl.def("executor", (class tf::Executor & (tf::Runtime::*)()) &tf::Runtime::executor, "obtains the running executor\n\n  The running executor of a runtime task is the executor that runs\n  the parent taskflow of that runtime task.\n\n  \n\n\n\n\n\n\n\n  \n\nC++: tf::Runtime::executor() --> class tf::Executor &", pybind11::return_value_policy::automatic);
		cl.def("schedule", (void (tf::Runtime::*)(class tf::Task)) &tf::Runtime::schedule, "schedules an active task immediately to the worker's queue\n\n  \n the given active task to schedule immediately\n\n  This member function immediately schedules an active task to the\n  task queue of the associated worker in the runtime task.\n  An active task is a task in a running taskflow.\n  The task may or may not be running, and scheduling that task\n  will immediately put the task into the task queue of the worker\n  that is running the runtime task.\n  Consider the following example:\n\n  \n\n\n\n\n\n\n\n\n\n\n\n\n\n  The executor will first run the condition task  which returns \n  to inform the scheduler to go to the runtime task \n  During the execution of  it directly schedules task  without\n  going through the normal taskflow graph scheduling process.\n  At this moment, task  is active because its parent taskflow is running.\n  When the taskflow finishes, we will see both  and  in the output.\n\nC++: tf::Runtime::schedule(class tf::Task) --> void", pybind11::arg("task"));
	}
	{ // tf::Node file:taskflow/core/graph.hpp line:266
		pybind11::class_<tf::Node, std::shared_ptr<tf::Node>> cl(M("tf"), "Node", "");
		cl.def("num_successors", (unsigned long (tf::Node::*)() const) &tf::Node::num_successors, "C++: tf::Node::num_successors() const --> unsigned long");
		cl.def("num_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_dependents, "C++: tf::Node::num_dependents() const --> unsigned long");
		cl.def("num_strong_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_strong_dependents, "C++: tf::Node::num_strong_dependents() const --> unsigned long");
		cl.def("num_weak_dependents", (unsigned long (tf::Node::*)() const) &tf::Node::num_weak_dependents, "C++: tf::Node::num_weak_dependents() const --> unsigned long");
		cl.def("name", (const std::string & (tf::Node::*)() const) &tf::Node::name, "C++: tf::Node::name() const --> const std::string &", pybind11::return_value_policy::automatic);
	}
}
