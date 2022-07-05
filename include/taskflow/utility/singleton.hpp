#ifndef TASKFLOW_UTIL_SINGLETON_H
#define TASKFLOW_UTIL_SINGLETON_H

namespace tf {

/** @class Singleton

@brief class template to create a thread-safe singleton object

*/
template <typename T>
class Singleton {

  public:

  /**
  @brief get a reference to the singleton object
  */
  inline static T& get() {
    static T instance;
    return instance;
  }

  private:

    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton&)= delete;
    Singleton& operator=(const Singleton&)= delete;
};



}  // end of namespace tf -----------------------------------------------------

#endif // TASKFLOW_UTIL_SINGLETON_H