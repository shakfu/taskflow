#include <ios>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>
#include <taskflow/algorithm/pipeline.hpp>
#include <taskflow/taskflow.hpp>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::Taskflow file: line:69
		pybind11::class_<tf::Taskflow, std::shared_ptr<tf::Taskflow>, tf::FlowBuilder> cl(M("tf"), "Taskflow", "class to create a taskflow object\n\nA %taskflow manages a task dependency graph where each task represents a\ncallable object (e.g., _lambda, _function) and an edge represents a\ndependency between two tasks. A task is one of the following types:\n\n  1. static task         : the callable constructible from\n                           \n  2. dynamic task        : the callable constructible from\n                           \n  3. condition task      : the callable constructible from\n                           \n  4. multi-condition task: the callable constructible from\n                           \n  5. module task         : the task constructed from tf::Taskflow::composed_of\n  6. runtime task        : the callable constructible from\n                           \n\nEach task is a basic computation unit and is run by one worker thread\nfrom an executor.\nThe following example creates a simple taskflow graph of four static tasks,\n   and  where\n runs before  and  and\n runs after   and \n\n\n\n\n\n\n\n\n\n\n\n\n\n\nThe taskflow object itself is NOT thread-safe. You should not\nmodifying the graph while it is running,\nsuch as adding new tasks, adding new dependencies, and moving\nthe taskflow to another.\nTo minimize the overhead of task creation,\nour runtime leverages a global object pool to recycle\ntasks in a thread-safe manner.\n\nPlease refer to \n\nand how to submit a taskflow to an executor.");
		cl.def( pybind11::init( [](){ return new tf::Taskflow(); } ) );
		cl.def("num_tasks", (unsigned long (tf::Taskflow::*)() const) &tf::Taskflow::num_tasks, "queries the number of tasks\n\nC++: tf::Taskflow::num_tasks() const --> unsigned long");
		cl.def("empty", (bool (tf::Taskflow::*)() const) &tf::Taskflow::empty, "queries the emptiness of the taskflow\n\n    An empty taskflow has no tasks. That is the return of\n    tf::Taskflow::num_tasks is zero.\n\nC++: tf::Taskflow::empty() const --> bool");
		cl.def("clear", (void (tf::Taskflow::*)()) &tf::Taskflow::clear, "clears the associated task dependency graph\n\n    When you clear a taskflow, all tasks and their associated data\n    (e.g., captured data in task callables) will be destroyed.\n    The behavior of clearing a running taskflow is undefined.\n\nC++: tf::Taskflow::clear() --> void");
		cl.def("graph", (class tf::Graph & (tf::Taskflow::*)()) &tf::Taskflow::graph, "returns a reference to the underlying graph object\n\n    A graph object (of type tf::Graph) is the ultimate storage for the\n    task dependency graph and should only be used as an opaque\n    data structure to interact with the executor (e.g., composition).\n\nC++: tf::Taskflow::graph() --> class tf::Graph &", pybind11::return_value_policy::automatic);
	}
	{ // tf::Executor file: line:51
		pybind11::class_<tf::Executor, std::shared_ptr<tf::Executor>> cl(M("tf"), "Executor", "class to create an executor for running a taskflow graph\n\nAn executor manages a set of worker threads to run one or multiple taskflows\nusing an efficient work-stealing scheduling algorithm.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nAll the  methods are  You can submit multiple\ntaskflows at the same time to an executor from different threads.");
		cl.def("run", (class tf::Future<void> (tf::Executor::*)(class tf::Taskflow &)) &tf::Executor::run, "runs a taskflow once\n\n    \n a tf::Taskflow object\n\n    \n a tf::Future that holds the result of the execution\n\n    This member function executes the given taskflow once and returns a tf::Future\n    object that eventually holds the result of the execution.\n\n    \n\n\n\n\n    This member function is thread-safe.\n\n    \n\n    The executor does not own the given taskflow. It is your responsibility to\n    ensure the taskflow remains alive during its execution.\n\nC++: tf::Executor::run(class tf::Taskflow &) --> class tf::Future<void>", pybind11::arg("taskflow"));
		cl.def("run_n", (class tf::Future<void> (tf::Executor::*)(class tf::Taskflow &, unsigned long)) &tf::Executor::run_n, "runs a taskflow for  times\n\n    \n a tf::Taskflow object\n    \n\n number of runs\n\n    \n a tf::Future that holds the result of the execution\n\n    This member function executes the given taskflow  times and returns a tf::Future\n    object that eventually holds the result of the execution.\n\n    \n\n\n\n\n    This member function is thread-safe.\n\n    \n\n    The executor does not own the given taskflow. It is your responsibility to\n    ensure the taskflow remains alive during its execution.\n\nC++: tf::Executor::run_n(class tf::Taskflow &, unsigned long) --> class tf::Future<void>", pybind11::arg("taskflow"), pybind11::arg("N"));
		cl.def("wait_for_all", (void (tf::Executor::*)()) &tf::Executor::wait_for_all, "waits for all tasks to complete\n\n    This member function waits until all submitted tasks\n    (e.g., taskflows, asynchronous tasks) to finish.\n\n    \n\n\n\n\n\n    \n\nC++: tf::Executor::wait_for_all() --> void");
		cl.def("num_workers", (unsigned long (tf::Executor::*)() const) &tf::Executor::num_workers, "queries the number of worker threads\n\n    Each worker represents one unique thread spawned by an executor\n    upon its construction time.\n\n    \n\n\n\n    \n\nC++: tf::Executor::num_workers() const --> unsigned long");
		cl.def("num_topologies", (unsigned long (tf::Executor::*)() const) &tf::Executor::num_topologies, "queries the number of running topologies at the time of this call\n\n    When a taskflow is submitted to an executor, a topology is created to store\n    runtime metadata of the running taskflow.\n    When the execution of the submitted taskflow finishes,\n    its corresponding topology will be removed from the executor.\n\n    \n\n\n\n    \n\nC++: tf::Executor::num_topologies() const --> unsigned long");
		cl.def("num_taskflows", (unsigned long (tf::Executor::*)() const) &tf::Executor::num_taskflows, "queries the number of running taskflows with moved ownership\n\n    \n\n\n\n    \n\nC++: tf::Executor::num_taskflows() const --> unsigned long");
		cl.def("this_worker_id", (int (tf::Executor::*)() const) &tf::Executor::this_worker_id, "queries the id of the caller thread in this executor\n\n    Each worker has an unique id in the range of  to  associated with\n    its parent executor.\n    If the caller thread does not belong to the executor,  is returned.\n\n    \n\n\n\n\n\n\n\n\n    \n\nC++: tf::Executor::this_worker_id() const --> int");
		cl.def("num_observers", (unsigned long (tf::Executor::*)() const) &tf::Executor::num_observers, "queries the number of observers\n\nC++: tf::Executor::num_observers() const --> unsigned long");
		cl.def("max_steals", (unsigned long (tf::Executor::*)() const) &tf::Executor::max_steals, "queries the maximum number of steals before yielding\n\nC++: tf::Executor::max_steals() const --> unsigned long");
	}
	{ // tf::CriticalSection file: line:50
		pybind11::class_<tf::CriticalSection, std::shared_ptr<tf::CriticalSection>, tf::Semaphore> cl(M("tf"), "CriticalSection", "class to create a critical region of limited workers to run tasks\n\ntf::CriticalSection is a warpper over tf::Semaphore and is specialized for\nlimiting the maximum concurrency over a set of tasks.\nA critical section starts with an initial count representing that limit.\nWhen a task is added to the critical section,\nthe task acquires and releases the semaphore internal to the critical section.\nThis design avoids explicit call of tf::Task::acquire and tf::Task::release.\nThe following example creates a critical section of one worker and adds\nthe five tasks to the critical section.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		cl.def( pybind11::init( [](){ return new tf::CriticalSection(); } ), "doc" );
		cl.def( pybind11::init<unsigned long>(), pybind11::arg("max_workers") );

	}
	// tf::version() file:taskflow/taskflow.hpp line:56
	M("tf").def("version", (const char * (*)()) &tf::version, "queries the version information in a string format \n\nRelease notes are available here: https://taskflow.github.io/taskflow/Releases.html\n\nC++: tf::version() --> const char *", pybind11::return_value_policy::automatic);

	{ // tf::Pipeflow file:taskflow/algorithm/pipeline.hpp line:43
		pybind11::class_<tf::Pipeflow, std::shared_ptr<tf::Pipeflow>> cl(M("tf"), "Pipeflow", "class to create a pipeflow object used by the pipe callable\n\nPipeflow represents a scheduling token in the pipeline scheduling\nframework. A pipeflow is created by the pipeline scheduler at runtime to\npass to the pipe callable. Users can query the present statistics\nof that scheduling token, including the line identifier, pipe identifier,\nand token identifier, and build their application algorithms based on\nthese statistics.\nAt the first stage, users can explicitly call the stop method\nto stop the pipeline scheduler.\n\n\n\n\n\n\n\n\nPipeflow can only be created privately by the tf::Pipeline and\nbe used through the pipe callable.");
		cl.def( pybind11::init( [](){ return new tf::Pipeflow(); } ) );
		cl.def("line", (unsigned long (tf::Pipeflow::*)() const) &tf::Pipeflow::line, "queries the line identifier of the present token\n\nC++: tf::Pipeflow::line() const --> unsigned long");
		cl.def("pipe", (unsigned long (tf::Pipeflow::*)() const) &tf::Pipeflow::pipe, "queries the pipe identifier of the present token\n\nC++: tf::Pipeflow::pipe() const --> unsigned long");
		cl.def("token", (unsigned long (tf::Pipeflow::*)() const) &tf::Pipeflow::token, "queries the token identifier\n\nC++: tf::Pipeflow::token() const --> unsigned long");
		cl.def("stop", (void (tf::Pipeflow::*)()) &tf::Pipeflow::stop, "stops the pipeline scheduling\n\n  Only the first pipe can call this method to stop the pipeline.\n  Others have no effect.\n\nC++: tf::Pipeflow::stop() --> void");
	}
	// tf::PipeType file:taskflow/algorithm/pipeline.hpp line:109
	pybind11::enum_<tf::PipeType>(M("tf"), "PipeType", "enumeration of all pipe types")
		.value("PARALLEL", tf::PipeType::PARALLEL)
		.value("SERIAL", tf::PipeType::SERIAL);

;

}
