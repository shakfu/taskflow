#include <chrono>
#include <exception>
#include <ios>
#include <memory>
#include <ostream>
#include <ratio>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/flow_builder.hpp>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/notifier.hpp>
#include <taskflow/core/observer.hpp>
#include <taskflow/core/semaphore.hpp>
#include <taskflow/core/task.hpp>
#include <taskflow/core/worker.hpp>
#include <thread>
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

// tf::WorkerInterface file:taskflow/core/worker.hpp line:212
struct PyCallBack_tf_WorkerInterface : public tf::WorkerInterface {
	using tf::WorkerInterface::WorkerInterface;

	void scheduler_prologue(class tf::Worker & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::WorkerInterface *>(this), "scheduler_prologue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"WorkerInterface::scheduler_prologue\"");
	}
	void scheduler_epilogue(class tf::Worker & a0, class std::exception_ptr a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::WorkerInterface *>(this), "scheduler_epilogue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"WorkerInterface::scheduler_epilogue\"");
	}
};

// tf::ObserverInterface file:taskflow/core/observer.hpp line:170
struct PyCallBack_tf_ObserverInterface : public tf::ObserverInterface {
	using tf::ObserverInterface::ObserverInterface;

	void set_up(unsigned long a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ObserverInterface *>(this), "set_up");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::set_up\"");
	}
	void on_entry(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ObserverInterface *>(this), "on_entry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_entry\"");
	}
	void on_exit(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ObserverInterface *>(this), "on_exit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_exit\"");
	}
};

// tf::ChromeObserver file:taskflow/core/observer.hpp line:230
struct PyCallBack_tf_ChromeObserver : public tf::ChromeObserver {
	using tf::ChromeObserver::ChromeObserver;

	void set_up(unsigned long a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ChromeObserver *>(this), "set_up");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::set_up\"");
	}
	void on_entry(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ChromeObserver *>(this), "on_entry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_entry\"");
	}
	void on_exit(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::ChromeObserver *>(this), "on_exit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_exit\"");
	}
};

// tf::TFProfObserver file:taskflow/core/observer.hpp line:446
struct PyCallBack_tf_TFProfObserver : public tf::TFProfObserver {
	using tf::TFProfObserver::TFProfObserver;

	void set_up(unsigned long a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::TFProfObserver *>(this), "set_up");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::set_up\"");
	}
	void on_entry(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::TFProfObserver *>(this), "on_entry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_entry\"");
	}
	void on_exit(class tf::WorkerView a0, class tf::TaskView a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const tf::TFProfObserver *>(this), "on_exit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ObserverInterface::on_exit\"");
	}
};

void bind_taskflow_core_notifier(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::Notifier file:taskflow/core/notifier.hpp line:66
		pybind11::class_<tf::Notifier, std::shared_ptr<tf::Notifier>> cl(M("tf"), "Notifier", "");
		cl.def( pybind11::init<unsigned long>(), pybind11::arg("N") );

		cl.def("prepare_wait", (void (tf::Notifier::*)(struct tf::Notifier::Waiter *)) &tf::Notifier::prepare_wait, "C++: tf::Notifier::prepare_wait(struct tf::Notifier::Waiter *) --> void", pybind11::arg("w"));
		cl.def("commit_wait", (void (tf::Notifier::*)(struct tf::Notifier::Waiter *)) &tf::Notifier::commit_wait, "C++: tf::Notifier::commit_wait(struct tf::Notifier::Waiter *) --> void", pybind11::arg("w"));
		cl.def("cancel_wait", (void (tf::Notifier::*)(struct tf::Notifier::Waiter *)) &tf::Notifier::cancel_wait, "C++: tf::Notifier::cancel_wait(struct tf::Notifier::Waiter *) --> void", pybind11::arg("w"));
		cl.def("notify", (void (tf::Notifier::*)(bool)) &tf::Notifier::notify, "C++: tf::Notifier::notify(bool) --> void", pybind11::arg("all"));
		cl.def("notify_n", (void (tf::Notifier::*)(unsigned long)) &tf::Notifier::notify_n, "C++: tf::Notifier::notify_n(unsigned long) --> void", pybind11::arg("n"));
		cl.def("size", (unsigned long (tf::Notifier::*)() const) &tf::Notifier::size, "C++: tf::Notifier::size() const --> unsigned long");

		{ // tf::Notifier::Waiter file:taskflow/core/notifier.hpp line:72
			auto & enclosing_class = cl;
			pybind11::class_<tf::Notifier::Waiter, std::shared_ptr<tf::Notifier::Waiter>> cl(enclosing_class, "Waiter", "");
			cl.def( pybind11::init( [](){ return new tf::Notifier::Waiter(); } ) );
			cl.def_readwrite("next", &tf::Notifier::Waiter::next);
			cl.def_readwrite("mu", &tf::Notifier::Waiter::mu);
			cl.def_readwrite("cv", &tf::Notifier::Waiter::cv);
			cl.def_readwrite("epoch", &tf::Notifier::Waiter::epoch);
			cl.def_readwrite("state", &tf::Notifier::Waiter::state);
		}

	}
	{ // tf::Worker file:taskflow/core/worker.hpp line:29
		pybind11::class_<tf::Worker, std::shared_ptr<tf::Worker>> cl(M("tf"), "Worker", "class to create a worker in an executor\n\nThe class is primarily used by the executor to perform work-stealing algorithm.\nUsers can access a worker object and alter its property\n(e.g., changing the thread affinity in a POSIX-like system)\nusing tf::WorkerInterface.");
		cl.def( pybind11::init( [](){ return new tf::Worker(); } ) );
		cl.def("id", (unsigned long (tf::Worker::*)() const) &tf::Worker::id, "queries the worker id associated with its parent executor\n\n    A worker id is a unsigned integer in the range [0, N),\n    where  is the number of workers spawned at the construction\n    time of the executor.\n\nC++: tf::Worker::id() const --> unsigned long");
		cl.def("thread", (class std::thread * (tf::Worker::*)() const) &tf::Worker::thread, "acquires a pointer access to the underlying thread\n\nC++: tf::Worker::thread() const --> class std::thread *", pybind11::return_value_policy::automatic);
		cl.def("queue_size", (unsigned long (tf::Worker::*)() const) &tf::Worker::queue_size, "queries the size of the queue (i.e., number of enqueued tasks to\n           run) associated with the worker\n\nC++: tf::Worker::queue_size() const --> unsigned long");
		cl.def("queue_capacity", (unsigned long (tf::Worker::*)() const) &tf::Worker::queue_capacity, "queries the current capacity of the queue\n\nC++: tf::Worker::queue_capacity() const --> unsigned long");
	}
	{ // tf::WorkerView file:taskflow/core/worker.hpp line:115
		pybind11::class_<tf::WorkerView, std::shared_ptr<tf::WorkerView>> cl(M("tf"), "WorkerView", "class to create an immutable view of a worker in an executor\n\nAn executor keeps a set of internal worker threads to run tasks.\nA worker view provides users an immutable interface to observe\nwhen a worker runs a task, and the view object is only accessible\nfrom an observer derived from tf::ObserverInterface.");
		cl.def("id", (unsigned long (tf::WorkerView::*)() const) &tf::WorkerView::id, "queries the worker id associated with its parent executor\n\n    A worker id is a unsigned integer in the range [0, N),\n    where  is the number of workers spawned at the construction\n    time of the executor.\n\nC++: tf::WorkerView::id() const --> unsigned long");
		cl.def("queue_size", (unsigned long (tf::WorkerView::*)() const) &tf::WorkerView::queue_size, "queries the size of the queue (i.e., number of pending tasks to\n           run) associated with the worker\n\nC++: tf::WorkerView::queue_size() const --> unsigned long");
		cl.def("queue_capacity", (unsigned long (tf::WorkerView::*)() const) &tf::WorkerView::queue_capacity, "queries the current capacity of the queue\n\nC++: tf::WorkerView::queue_capacity() const --> unsigned long");
	}
	{ // tf::WorkerInterface file:taskflow/core/worker.hpp line:212
		pybind11::class_<tf::WorkerInterface, std::shared_ptr<tf::WorkerInterface>, PyCallBack_tf_WorkerInterface> cl(M("tf"), "WorkerInterface", "class WorkerInterface\n\nThe tf::WorkerInterface class lets users to interact with the executor\nto customize the thread behavior,\nsuch as calling custom methods before and after a worker enters and leaves\nthe loop.\n\nWhen you create an executor, it spawns a set of workers to run tasks.\nThe interaction between the executor and its spawned workers looks like\nthe following:\n\nfor(size_t n=0; n<num_workers; n++) {\n  create_thread([](Worker& worker)\n\n    // pre-processing executor-specific worker information\n    // ...\n\n    // enter the scheduling loop\n    // Here, WorkerInterface::scheduler_prologue is invoked, if any\n\n    while(1) {\n      perform_work_stealing_algorithm();\n      if(stop) {\n        break; \n      }\n    }\n\n    // leaves the scheduling loop and joins this worker thread\n    // Here, WorkerInterface::scheduler_epilogue is invoked, if any\n  );\n}\n\n\nMethods defined in tf::WorkerInterface are not thread-safe and may be\nbe invoked by multiple workers concurrently.");
		cl.def( pybind11::init( [](){ return new PyCallBack_tf_WorkerInterface(); } ) );
		cl.def("scheduler_prologue", (void (tf::WorkerInterface::*)(class tf::Worker &)) &tf::WorkerInterface::scheduler_prologue, "method to call before a worker enters the scheduling loop\n  \n\n a reference to the worker\n\nC++: tf::WorkerInterface::scheduler_prologue(class tf::Worker &) --> void", pybind11::arg("worker"));
		cl.def("scheduler_epilogue", (void (tf::WorkerInterface::*)(class tf::Worker &, class std::exception_ptr)) &tf::WorkerInterface::scheduler_epilogue, "method to call after a worker leaves the scheduling loop\n  \n\n a reference to the worker\n  \n\n an pointer to the exception thrown by the scheduling loop\n\nC++: tf::WorkerInterface::scheduler_epilogue(class tf::Worker &, class std::exception_ptr) --> void", pybind11::arg("worker"), pybind11::arg("ptr"));
		cl.def("assign", (class tf::WorkerInterface & (tf::WorkerInterface::*)(const class tf::WorkerInterface &)) &tf::WorkerInterface::operator=, "C++: tf::WorkerInterface::operator=(const class tf::WorkerInterface &) --> class tf::WorkerInterface &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // tf::Segment file:taskflow/core/observer.hpp line:26
		pybind11::class_<tf::Segment, std::shared_ptr<tf::Segment>> cl(M("tf"), "Segment", "");
		cl.def( pybind11::init( [](){ return new tf::Segment(); } ) );
		cl.def( pybind11::init<const std::string &, enum tf::TaskType, class std::chrono::time_point<class std::chrono::steady_clock, class std::chrono::duration<long long, class std::ratio<1, 1000000000> > >, class std::chrono::time_point<class std::chrono::steady_clock, class std::chrono::duration<long long, class std::ratio<1, 1000000000> > >>(), pybind11::arg("n"), pybind11::arg("t"), pybind11::arg("b"), pybind11::arg("e") );

		cl.def( pybind11::init( [](tf::Segment const &o){ return new tf::Segment(o); } ) );
		cl.def_readwrite("name", &tf::Segment::name);
		cl.def_readwrite("type", &tf::Segment::type);
		cl.def_readwrite("beg", &tf::Segment::beg);
		cl.def_readwrite("end", &tf::Segment::end);
		cl.def("span", (class std::chrono::duration<long long, class std::ratio<1, 1000000000> > (tf::Segment::*)() const) &tf::Segment::span, "C++: tf::Segment::span() const --> class std::chrono::duration<long long, class std::ratio<1, 1000000000> >");
	}
	{ // tf::Timeline file:taskflow/core/observer.hpp line:59
		pybind11::class_<tf::Timeline, std::shared_ptr<tf::Timeline>> cl(M("tf"), "Timeline", "");
		cl.def( pybind11::init( [](){ return new tf::Timeline(); } ) );
		cl.def_readwrite("uid", &tf::Timeline::uid);
		cl.def_readwrite("origin", &tf::Timeline::origin);
		cl.def_readwrite("segments", &tf::Timeline::segments);
	}
	{ // tf::ProfileData file:taskflow/core/observer.hpp line:88
		pybind11::class_<tf::ProfileData, std::shared_ptr<tf::ProfileData>> cl(M("tf"), "ProfileData", "");
		cl.def( pybind11::init( [](){ return new tf::ProfileData(); } ) );
		cl.def_readwrite("timelines", &tf::ProfileData::timelines);
	}
	{ // tf::ObserverInterface file:taskflow/core/observer.hpp line:170
		pybind11::class_<tf::ObserverInterface, std::shared_ptr<tf::ObserverInterface>, PyCallBack_tf_ObserverInterface> cl(M("tf"), "ObserverInterface", "class to derive an executor observer \n\nThe tf::ObserverInterface class allows users to define custom methods to monitor \nthe behaviors of an executor. This is particularly useful when you want to \ninspect the performance of an executor and visualize when each thread \nparticipates in the execution of a task.\nTo prevent users from direct access to the internal threads and tasks, \ntf::ObserverInterface provides immutable wrappers,\ntf::WorkerView and tf::TaskView, over workers and tasks.\n\nPlease refer to tf::WorkerView and tf::TaskView for details.\n\nExample usage:\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		cl.def(pybind11::init<PyCallBack_tf_ObserverInterface const &>());
		cl.def( pybind11::init( [](){ return new PyCallBack_tf_ObserverInterface(); } ) );
		cl.def("set_up", (void (tf::ObserverInterface::*)(unsigned long)) &tf::ObserverInterface::set_up, "constructor-like method to call when the executor observer is fully created\n  \n\n the number of the worker threads in the executor\n\nC++: tf::ObserverInterface::set_up(unsigned long) --> void", pybind11::arg("num_workers"));
		cl.def("on_entry", (void (tf::ObserverInterface::*)(class tf::WorkerView, class tf::TaskView)) &tf::ObserverInterface::on_entry, "method to call before a worker thread executes a closure \n  \n\n an immutable view of this worker thread \n  \n\n a constant wrapper object to the task \n\nC++: tf::ObserverInterface::on_entry(class tf::WorkerView, class tf::TaskView) --> void", pybind11::arg("wv"), pybind11::arg("task_view"));
		cl.def("on_exit", (void (tf::ObserverInterface::*)(class tf::WorkerView, class tf::TaskView)) &tf::ObserverInterface::on_exit, "method to call after a worker thread executed a closure\n  \n\n an immutable view of this worker thread\n  \n\n a constant wrapper object to the task\n\nC++: tf::ObserverInterface::on_exit(class tf::WorkerView, class tf::TaskView) --> void", pybind11::arg("wv"), pybind11::arg("task_view"));
		cl.def("assign", (class tf::ObserverInterface & (tf::ObserverInterface::*)(const class tf::ObserverInterface &)) &tf::ObserverInterface::operator=, "C++: tf::ObserverInterface::operator=(const class tf::ObserverInterface &) --> class tf::ObserverInterface &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // tf::ChromeObserver file:taskflow/core/observer.hpp line:230
		pybind11::class_<tf::ChromeObserver, std::shared_ptr<tf::ChromeObserver>, PyCallBack_tf_ChromeObserver, tf::ObserverInterface> cl(M("tf"), "ChromeObserver", "class to create an observer based on Chrome tracing format\n\nA tf::ChromeObserver inherits tf::ObserverInterface and defines methods to dump\nthe observed thread activities into a format that can be visualized through\n.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		cl.def( pybind11::init( [](){ return new tf::ChromeObserver(); }, [](){ return new PyCallBack_tf_ChromeObserver(); } ) );
		cl.def( pybind11::init( [](PyCallBack_tf_ChromeObserver const &o){ return new PyCallBack_tf_ChromeObserver(o); } ) );
		cl.def( pybind11::init( [](tf::ChromeObserver const &o){ return new tf::ChromeObserver(o); } ) );
		cl.def("dump", (void (tf::ChromeObserver::*)(std::ostream &) const) &tf::ChromeObserver::dump, "dumps the timelines into a  format through \n           an output stream \n\nC++: tf::ChromeObserver::dump(std::ostream &) const --> void", pybind11::arg("ostream"));
		cl.def("dump", (std::string (tf::ChromeObserver::*)() const) &tf::ChromeObserver::dump, "dumps the timelines into a  format\n\nC++: tf::ChromeObserver::dump() const --> std::string");
		cl.def("clear", (void (tf::ChromeObserver::*)()) &tf::ChromeObserver::clear, "clears the timeline data\n\nC++: tf::ChromeObserver::clear() --> void");
		cl.def("num_tasks", (unsigned long (tf::ChromeObserver::*)() const) &tf::ChromeObserver::num_tasks, "queries the number of tasks observed\n\nC++: tf::ChromeObserver::num_tasks() const --> unsigned long");
		cl.def("assign", (class tf::ChromeObserver & (tf::ChromeObserver::*)(const class tf::ChromeObserver &)) &tf::ChromeObserver::operator=, "C++: tf::ChromeObserver::operator=(const class tf::ChromeObserver &) --> class tf::ChromeObserver &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // tf::TFProfObserver file:taskflow/core/observer.hpp line:446
		pybind11::class_<tf::TFProfObserver, std::shared_ptr<tf::TFProfObserver>, PyCallBack_tf_TFProfObserver, tf::ObserverInterface> cl(M("tf"), "TFProfObserver", "class to create an observer based on the built-in taskflow profiler format\n\nA tf::TFProfObserver inherits tf::ObserverInterface and defines methods to dump\nthe observed thread activities into a format that can be visualized through\n.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nWe recommend using our  python script to observe thread activities \ninstead of the raw function call.\nThe script will turn on environment variables needed for observing all executors \nin a taskflow program and dump the result to a valid, clean JSON file\ncompatible with the format of .");
		cl.def( pybind11::init( [](){ return new tf::TFProfObserver(); }, [](){ return new PyCallBack_tf_TFProfObserver(); } ) );
		cl.def("dump", (void (tf::TFProfObserver::*)(std::ostream &) const) &tf::TFProfObserver::dump, "dumps the timelines into a  format through \n           an output stream\n\nC++: tf::TFProfObserver::dump(std::ostream &) const --> void", pybind11::arg("ostream"));
		cl.def("dump", (std::string (tf::TFProfObserver::*)() const) &tf::TFProfObserver::dump, "dumps the timelines into a JSON string\n\nC++: tf::TFProfObserver::dump() const --> std::string");
		cl.def("clear", (void (tf::TFProfObserver::*)()) &tf::TFProfObserver::clear, "clears the timeline data\n\nC++: tf::TFProfObserver::clear() --> void");
		cl.def("num_tasks", (unsigned long (tf::TFProfObserver::*)() const) &tf::TFProfObserver::num_tasks, "queries the number of tasks observed\n\nC++: tf::TFProfObserver::num_tasks() const --> unsigned long");
	}
	{ // tf::TFProfManager file:taskflow/core/observer.hpp line:626
		pybind11::class_<tf::TFProfManager, std::shared_ptr<tf::TFProfManager>> cl(M("tf"), "TFProfManager", "");
		cl.def_static("get", (class tf::TFProfManager & (*)()) &tf::TFProfManager::get, "C++: tf::TFProfManager::get() --> class tf::TFProfManager &", pybind11::return_value_policy::automatic);
		cl.def("dump", (void (tf::TFProfManager::*)(std::ostream &) const) &tf::TFProfManager::dump, "C++: tf::TFProfManager::dump(std::ostream &) const --> void", pybind11::arg("ostream"));
	}
	// tf::ObserverType file:taskflow/core/observer.hpp line:721
	pybind11::enum_<tf::ObserverType>(M("tf"), "ObserverType", "enumeration of all observer types")
		.value("TFPROF", tf::ObserverType::TFPROF)
		.value("CHROME", tf::ObserverType::CHROME)
		.value("UNDEFINED", tf::ObserverType::UNDEFINED);

;

	// tf::to_string(enum tf::ObserverType) file:taskflow/core/observer.hpp line:730
	M("tf").def("to_string", (const char * (*)(enum tf::ObserverType)) &tf::to_string, "convert an observer type to a human-readable string\n\nC++: tf::to_string(enum tf::ObserverType) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("type"));

	{ // tf::FlowBuilder file:taskflow/core/flow_builder.hpp line:22
		pybind11::class_<tf::FlowBuilder, std::shared_ptr<tf::FlowBuilder>> cl(M("tf"), "FlowBuilder", "class to build a task dependency graph\n\nThe class provides essential methods to construct a task dependency graph\nfrom which tf::Taskflow and tf::Subflow are derived.");
		cl.def( pybind11::init<class tf::Graph &>(), pybind11::arg("graph") );

		cl.def( pybind11::init( [](tf::FlowBuilder const &o){ return new tf::FlowBuilder(o); } ) );
		cl.def("erase", (void (tf::FlowBuilder::*)(class tf::Task)) &tf::FlowBuilder::erase, "removes a task from a taskflow\n\n    \n task to remove\n\n    Removes a task and its input and output dependencies from the graph\n    associated with the flow builder.\n    If the task does not belong to the graph, nothing will happen.\n\n    \n\n\n\n\n\n\n\n\n\n    \n\nC++: tf::FlowBuilder::erase(class tf::Task) --> void", pybind11::arg("task"));
		cl.def("placeholder", (class tf::Task (tf::FlowBuilder::*)()) &tf::FlowBuilder::placeholder, "creates a placeholder task\n\n    \n a tf::Task handle\n\n    A placeholder task maps to a node in the taskflow graph, but\n    it does not have any callable work assigned yet.\n    A placeholder task is different from an empty task handle that\n    does not point to any node in a graph.\n\n    \n\n\n\n\n\n\n\n\n\n\n\n\n    \n\nC++: tf::FlowBuilder::placeholder() --> class tf::Task");
		cl.def("linearize", (void (tf::FlowBuilder::*)(class std::vector<class tf::Task, class std::allocator<class tf::Task> > &)) &tf::FlowBuilder::linearize, "adds adjacent dependency links to a linear list of tasks\n\n    \n a vector of tasks\n\n    This member function creates linear dependencies over a vector of tasks.\n\n    \n\n\n\n\n\n\n\n    \n\nC++: tf::FlowBuilder::linearize(class std::vector<class tf::Task, class std::allocator<class tf::Task> > &) --> void", pybind11::arg("tasks"));
	}
}
