#include <__iterator/move_iterator.h>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <taskflow/core/graph.hpp>
#include <taskflow/core/semaphore.hpp>
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

void bind_taskflow_utility_small_vector_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::SmallVectorTemplateBase file:taskflow/utility/small_vector.hpp line:316
		pybind11::class_<tf::SmallVectorTemplateBase<tf::Semaphore *,true>, std::shared_ptr<tf::SmallVectorTemplateBase<tf::Semaphore *,true>>, tf::SmallVectorTemplateCommon<tf::Semaphore *,void>> cl(M("tf"), "SmallVectorTemplateBase_tf_Semaphore__star__true_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateBase<tf::Semaphore *,true> const &o){ return new tf::SmallVectorTemplateBase<tf::Semaphore *,true>(o); } ) );
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
	{ // tf::SmallVectorTemplateBase file:taskflow/utility/small_vector.hpp line:316
		pybind11::class_<tf::SmallVectorTemplateBase<int,true>, std::shared_ptr<tf::SmallVectorTemplateBase<int,true>>, tf::SmallVectorTemplateCommon<int,void>> cl(M("tf"), "SmallVectorTemplateBase_int_true_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateBase<int,true> const &o){ return new tf::SmallVectorTemplateBase<int,true>(o); } ) );
		cl.def("push_back", (void (tf::SmallVectorTemplateBase<int,true>::*)(const int &)) &tf::SmallVectorTemplateBase<int, true>::push_back, "C++: tf::SmallVectorTemplateBase<int, true>::push_back(const int &) --> void", pybind11::arg("Elt"));
		cl.def("pop_back", (void (tf::SmallVectorTemplateBase<int,true>::*)()) &tf::SmallVectorTemplateBase<int, true>::pop_back, "C++: tf::SmallVectorTemplateBase<int, true>::pop_back() --> void");
		cl.def("begin", (int * (tf::SmallVectorTemplateCommon<int,void>::*)()) &tf::SmallVectorTemplateCommon<int, void>::begin, "C++: tf::SmallVectorTemplateCommon<int, void>::begin() --> int *", pybind11::return_value_policy::automatic);
		cl.def("end", (int * (tf::SmallVectorTemplateCommon<int,void>::*)()) &tf::SmallVectorTemplateCommon<int, void>::end, "C++: tf::SmallVectorTemplateCommon<int, void>::end() --> int *", pybind11::return_value_policy::automatic);
		cl.def("size", (unsigned long (tf::SmallVectorTemplateCommon<int,void>::*)() const) &tf::SmallVectorTemplateCommon<int, void>::size, "C++: tf::SmallVectorTemplateCommon<int, void>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (tf::SmallVectorTemplateCommon<int,void>::*)() const) &tf::SmallVectorTemplateCommon<int, void>::max_size, "C++: tf::SmallVectorTemplateCommon<int, void>::max_size() const --> unsigned long");
		cl.def("capacity", (unsigned long (tf::SmallVectorTemplateCommon<int,void>::*)() const) &tf::SmallVectorTemplateCommon<int, void>::capacity, "C++: tf::SmallVectorTemplateCommon<int, void>::capacity() const --> unsigned long");
		cl.def("data", (int * (tf::SmallVectorTemplateCommon<int,void>::*)()) &tf::SmallVectorTemplateCommon<int, void>::data, "C++: tf::SmallVectorTemplateCommon<int, void>::data() --> int *", pybind11::return_value_policy::automatic);
		cl.def("__getitem__", (int & (tf::SmallVectorTemplateCommon<int,void>::*)(unsigned long)) &tf::SmallVectorTemplateCommon<int, void>::operator[], "C++: tf::SmallVectorTemplateCommon<int, void>::operator[](unsigned long) --> int &", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("front", (int & (tf::SmallVectorTemplateCommon<int,void>::*)()) &tf::SmallVectorTemplateCommon<int, void>::front, "C++: tf::SmallVectorTemplateCommon<int, void>::front() --> int &", pybind11::return_value_policy::automatic);
		cl.def("back", (int & (tf::SmallVectorTemplateCommon<int,void>::*)()) &tf::SmallVectorTemplateCommon<int, void>::back, "C++: tf::SmallVectorTemplateCommon<int, void>::back() --> int &", pybind11::return_value_policy::automatic);
		cl.def("size_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::size_in_bytes, "This returns size()*sizeof(T).\n\nC++: tf::SmallVectorBase::size_in_bytes() const --> unsigned long");
		cl.def("capacity_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::capacity_in_bytes, "capacity_in_bytes - This returns capacity()*sizeof(T).\n\nC++: tf::SmallVectorBase::capacity_in_bytes() const --> unsigned long");
		cl.def("empty", (bool (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::empty, "C++: tf::SmallVectorBase::empty() const --> bool");
	}
	{ // tf::SmallVectorImpl file:taskflow/utility/small_vector.hpp line:376
		pybind11::class_<tf::SmallVectorImpl<tf::Node *>, std::shared_ptr<tf::SmallVectorImpl<tf::Node *>>, tf::SmallVectorTemplateBase<tf::Node *,true>> cl(M("tf"), "SmallVectorImpl_tf_Node__star__t", "");
		cl.def("append", (void (tf::SmallVectorImpl<tf::Node *>::*)(class std::move_iterator<class tf::Node **>, class std::move_iterator<class tf::Node **>)) &tf::SmallVectorImpl<tf::Node *>::append<std::move_iterator<tf::Node **>>, "C++: tf::SmallVectorImpl<tf::Node *>::append(class std::move_iterator<class tf::Node **>, class std::move_iterator<class tf::Node **>) --> void", pybind11::arg("in_start"), pybind11::arg("in_end"));
		cl.def("clear", (void (tf::SmallVectorImpl<tf::Node *>::*)()) &tf::SmallVectorImpl<tf::Node *>::clear, "C++: tf::SmallVectorImpl<tf::Node *>::clear() --> void");
		cl.def("resize", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Node *>::resize, "C++: tf::SmallVectorImpl<tf::Node *>::resize(unsigned long) --> void", pybind11::arg("N"));
		cl.def("resize", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long, class tf::Node *const &)) &tf::SmallVectorImpl<tf::Node *>::resize, "C++: tf::SmallVectorImpl<tf::Node *>::resize(unsigned long, class tf::Node *const &) --> void", pybind11::arg("N"), pybind11::arg("NV"));
		cl.def("reserve", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Node *>::reserve, "C++: tf::SmallVectorImpl<tf::Node *>::reserve(unsigned long) --> void", pybind11::arg("N"));
		cl.def("pop_back_val", (class tf::Node * (tf::SmallVectorImpl<tf::Node *>::*)()) &tf::SmallVectorImpl<tf::Node *>::pop_back_val, "C++: tf::SmallVectorImpl<tf::Node *>::pop_back_val() --> class tf::Node *", pybind11::return_value_policy::automatic);
		cl.def("swap", (void (tf::SmallVectorImpl<tf::Node *>::*)(class tf::SmallVectorImpl<class tf::Node *> &)) &tf::SmallVectorImpl<tf::Node *>::swap, "C++: tf::SmallVectorImpl<tf::Node *>::swap(class tf::SmallVectorImpl<class tf::Node *> &) --> void", pybind11::arg("RHS"));
		cl.def("append", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long, class tf::Node *const &)) &tf::SmallVectorImpl<tf::Node *>::append, "C++: tf::SmallVectorImpl<tf::Node *>::append(unsigned long, class tf::Node *const &) --> void", pybind11::arg("NumInputs"), pybind11::arg("Elt"));
		cl.def("assign", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long, class tf::Node *const &)) &tf::SmallVectorImpl<tf::Node *>::assign, "C++: tf::SmallVectorImpl<tf::Node *>::assign(unsigned long, class tf::Node *const &) --> void", pybind11::arg("NumElts"), pybind11::arg("Elt"));
		cl.def("assign", (class tf::SmallVectorImpl<class tf::Node *> & (tf::SmallVectorImpl<tf::Node *>::*)(const class tf::SmallVectorImpl<class tf::Node *> &)) &tf::SmallVectorImpl<tf::Node *>::operator=, "C++: tf::SmallVectorImpl<tf::Node *>::operator=(const class tf::SmallVectorImpl<class tf::Node *> &) --> class tf::SmallVectorImpl<class tf::Node *> &", pybind11::return_value_policy::automatic, pybind11::arg("RHS"));
		cl.def("__eq__", (bool (tf::SmallVectorImpl<tf::Node *>::*)(const class tf::SmallVectorImpl<class tf::Node *> &) const) &tf::SmallVectorImpl<tf::Node *>::operator==, "C++: tf::SmallVectorImpl<tf::Node *>::operator==(const class tf::SmallVectorImpl<class tf::Node *> &) const --> bool", pybind11::arg("RHS"));
		cl.def("__ne__", (bool (tf::SmallVectorImpl<tf::Node *>::*)(const class tf::SmallVectorImpl<class tf::Node *> &) const) &tf::SmallVectorImpl<tf::Node *>::operator!=, "C++: tf::SmallVectorImpl<tf::Node *>::operator!=(const class tf::SmallVectorImpl<class tf::Node *> &) const --> bool", pybind11::arg("RHS"));
		cl.def("set_size", (void (tf::SmallVectorImpl<tf::Node *>::*)(unsigned long)) &tf::SmallVectorImpl<tf::Node *>::set_size, "C++: tf::SmallVectorImpl<tf::Node *>::set_size(unsigned long) --> void", pybind11::arg("N"));
		cl.def("push_back", (void (tf::SmallVectorTemplateBase<tf::Node *,true>::*)(class tf::Node *const &)) &tf::SmallVectorTemplateBase<tf::Node *, true>::push_back, "C++: tf::SmallVectorTemplateBase<tf::Node *, true>::push_back(class tf::Node *const &) --> void", pybind11::arg("Elt"));
		cl.def("pop_back", (void (tf::SmallVectorTemplateBase<tf::Node *,true>::*)()) &tf::SmallVectorTemplateBase<tf::Node *, true>::pop_back, "C++: tf::SmallVectorTemplateBase<tf::Node *, true>::pop_back() --> void");
		cl.def("begin", (class tf::Node ** (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Node *, void>::begin, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::begin() --> class tf::Node **", pybind11::return_value_policy::automatic);
		cl.def("end", (class tf::Node ** (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Node *, void>::end, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::end() --> class tf::Node **", pybind11::return_value_policy::automatic);
		cl.def("size", (unsigned long (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Node *, void>::size, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Node *, void>::max_size, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::max_size() const --> unsigned long");
		cl.def("capacity", (unsigned long (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)() const) &tf::SmallVectorTemplateCommon<tf::Node *, void>::capacity, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::capacity() const --> unsigned long");
		cl.def("data", (class tf::Node ** (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Node *, void>::data, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::data() --> class tf::Node **", pybind11::return_value_policy::automatic);
		cl.def("__getitem__", (class tf::Node *& (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)(unsigned long)) &tf::SmallVectorTemplateCommon<tf::Node *, void>::operator[], "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::operator[](unsigned long) --> class tf::Node *&", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("front", (class tf::Node *& (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Node *, void>::front, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::front() --> class tf::Node *&", pybind11::return_value_policy::automatic);
		cl.def("back", (class tf::Node *& (tf::SmallVectorTemplateCommon<tf::Node *,void>::*)()) &tf::SmallVectorTemplateCommon<tf::Node *, void>::back, "C++: tf::SmallVectorTemplateCommon<tf::Node *, void>::back() --> class tf::Node *&", pybind11::return_value_policy::automatic);
		cl.def("size_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::size_in_bytes, "This returns size()*sizeof(T).\n\nC++: tf::SmallVectorBase::size_in_bytes() const --> unsigned long");
		cl.def("capacity_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::capacity_in_bytes, "capacity_in_bytes - This returns capacity()*sizeof(T).\n\nC++: tf::SmallVectorBase::capacity_in_bytes() const --> unsigned long");
		cl.def("empty", (bool (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::empty, "C++: tf::SmallVectorBase::empty() const --> bool");
	}
	{ // tf::SmallVectorImpl file:taskflow/utility/small_vector.hpp line:376
		pybind11::class_<tf::SmallVectorImpl<tf::Semaphore *>, std::shared_ptr<tf::SmallVectorImpl<tf::Semaphore *>>, tf::SmallVectorTemplateBase<tf::Semaphore *,true>> cl(M("tf"), "SmallVectorImpl_tf_Semaphore__star__t", "");
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
}
