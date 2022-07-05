#ifndef TASKFLOW_DECLARATIONS_H
#define TASKFLOW_DECLARATIONS_H

namespace tf {

// ----------------------------------------------------------------------------
// taskflow
// ----------------------------------------------------------------------------
class AsyncTopology;
class Node;
class Graph;
class FlowBuilder;
class Semaphore;
class Subflow;
class Runtime;
class Task;
class TaskView;
class Taskflow;
class Topology;
class TopologyBase;
class Executor;
class Worker;
class WorkerView;
class ObserverInterface;
class ChromeTracingObserver;
class TFProfObserver;
class TFProfManager;

template <typename T>
class Future;

template <typename...Fs>
class Pipeline;

}  // end of namespace tf -----------------------------------------------------


#endif // TASKFLOW_DECLARATIONS_H

