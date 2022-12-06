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

void bind_taskflow_utility_small_vector_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // tf::IsPod file:taskflow/utility/small_vector.hpp line:55
		pybind11::class_<tf::IsPod<tf::Node *>, std::shared_ptr<tf::IsPod<tf::Node *>>, std::integral_constant<bool,true>> cl(M("tf"), "IsPod_tf_Node__star__t", "");
		cl.def( pybind11::init( [](){ return new tf::IsPod<tf::Node *>(); } ) );
		cl.def("__call__", (bool (std::integral_constant<bool,true>::*)() const) &std::integral_constant<bool, true>::operator(), "C++: std::integral_constant<bool, true>::operator()() const --> bool");
	}
	{ // tf::IsPod file:taskflow/utility/small_vector.hpp line:55
		pybind11::class_<tf::IsPod<tf::Semaphore *>, std::shared_ptr<tf::IsPod<tf::Semaphore *>>, std::integral_constant<bool,true>> cl(M("tf"), "IsPod_tf_Semaphore__star__t", "");
		cl.def( pybind11::init( [](){ return new tf::IsPod<tf::Semaphore *>(); } ) );
		cl.def("__call__", (bool (std::integral_constant<bool,true>::*)() const) &std::integral_constant<bool, true>::operator(), "C++: std::integral_constant<bool, true>::operator()() const --> bool");
	}
	{ // tf::IsPod file:taskflow/utility/small_vector.hpp line:55
		pybind11::class_<tf::IsPod<int>, std::shared_ptr<tf::IsPod<int>>, std::integral_constant<bool,true>> cl(M("tf"), "IsPod_int_t", "");
		cl.def( pybind11::init( [](){ return new tf::IsPod<int>(); } ) );
		cl.def("__call__", (bool (std::integral_constant<bool,true>::*)() const) &std::integral_constant<bool, true>::operator(), "C++: std::integral_constant<bool, true>::operator()() const --> bool");
	}
	{ // tf::SmallVectorBase file:taskflow/utility/small_vector.hpp line:61
		pybind11::class_<tf::SmallVectorBase, std::shared_ptr<tf::SmallVectorBase>> cl(M("tf"), "SmallVectorBase", "");
		cl.def( pybind11::init( [](tf::SmallVectorBase const &o){ return new tf::SmallVectorBase(o); } ) );
		cl.def("size_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::size_in_bytes, "This returns size()*sizeof(T).\n\nC++: tf::SmallVectorBase::size_in_bytes() const --> unsigned long");
		cl.def("capacity_in_bytes", (unsigned long (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::capacity_in_bytes, "capacity_in_bytes - This returns capacity()*sizeof(T).\n\nC++: tf::SmallVectorBase::capacity_in_bytes() const --> unsigned long");
		cl.def("empty", (bool (tf::SmallVectorBase::*)() const) &tf::SmallVectorBase::empty, "C++: tf::SmallVectorBase::empty() const --> bool");
	}
	{ // tf::SmallVectorStorage file:taskflow/utility/small_vector.hpp line:884
		pybind11::class_<tf::SmallVectorStorage<tf::Node *,2>, std::shared_ptr<tf::SmallVectorStorage<tf::Node *,2>>> cl(M("tf"), "SmallVectorStorage_tf_Node__star__2_t", "");
		cl.def( pybind11::init( [](){ return new tf::SmallVectorStorage<tf::Node *,2>(); } ) );
		cl.def( pybind11::init( [](tf::SmallVectorStorage<tf::Node *,2> const &o){ return new tf::SmallVectorStorage<tf::Node *,2>(o); } ) );
	}
	{ // tf::SmallVectorStorage file:taskflow/utility/small_vector.hpp line:884
		pybind11::class_<tf::SmallVectorStorage<tf::Semaphore *,2>, std::shared_ptr<tf::SmallVectorStorage<tf::Semaphore *,2>>> cl(M("tf"), "SmallVectorStorage_tf_Semaphore__star__2_t", "");
		cl.def( pybind11::init( [](){ return new tf::SmallVectorStorage<tf::Semaphore *,2>(); } ) );
		cl.def( pybind11::init( [](tf::SmallVectorStorage<tf::Semaphore *,2> const &o){ return new tf::SmallVectorStorage<tf::Semaphore *,2>(o); } ) );
	}
	{ // tf::SmallVectorStorage file:taskflow/utility/small_vector.hpp line:884
		pybind11::class_<tf::SmallVectorStorage<int,2>, std::shared_ptr<tf::SmallVectorStorage<int,2>>> cl(M("tf"), "SmallVectorStorage_int_2_t", "");
		cl.def( pybind11::init( [](){ return new tf::SmallVectorStorage<int,2>(); } ) );
		cl.def( pybind11::init( [](tf::SmallVectorStorage<int,2> const &o){ return new tf::SmallVectorStorage<int,2>(o); } ) );
	}
	{ // tf::SmallVectorTemplateCommon file:taskflow/utility/small_vector.hpp line:118
		pybind11::class_<tf::SmallVectorTemplateCommon<tf::Node *,void>, std::shared_ptr<tf::SmallVectorTemplateCommon<tf::Node *,void>>, tf::SmallVectorBase> cl(M("tf"), "SmallVectorTemplateCommon_tf_Node__star__void_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateCommon<tf::Node *,void> const &o){ return new tf::SmallVectorTemplateCommon<tf::Node *,void>(o); } ) );
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
	{ // tf::SmallVectorTemplateCommon file:taskflow/utility/small_vector.hpp line:118
		pybind11::class_<tf::SmallVectorTemplateCommon<tf::Semaphore *,void>, std::shared_ptr<tf::SmallVectorTemplateCommon<tf::Semaphore *,void>>, tf::SmallVectorBase> cl(M("tf"), "SmallVectorTemplateCommon_tf_Semaphore__star__void_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateCommon<tf::Semaphore *,void> const &o){ return new tf::SmallVectorTemplateCommon<tf::Semaphore *,void>(o); } ) );
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
	{ // tf::SmallVectorTemplateCommon file:taskflow/utility/small_vector.hpp line:118
		pybind11::class_<tf::SmallVectorTemplateCommon<int,void>, std::shared_ptr<tf::SmallVectorTemplateCommon<int,void>>, tf::SmallVectorBase> cl(M("tf"), "SmallVectorTemplateCommon_int_void_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateCommon<int,void> const &o){ return new tf::SmallVectorTemplateCommon<int,void>(o); } ) );
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
	{ // tf::SmallVectorTemplateBase file:taskflow/utility/small_vector.hpp line:316
		pybind11::class_<tf::SmallVectorTemplateBase<tf::Node *,true>, std::shared_ptr<tf::SmallVectorTemplateBase<tf::Node *,true>>, tf::SmallVectorTemplateCommon<tf::Node *,void>> cl(M("tf"), "SmallVectorTemplateBase_tf_Node__star__true_t", "");
		cl.def( pybind11::init( [](tf::SmallVectorTemplateBase<tf::Node *,true> const &o){ return new tf::SmallVectorTemplateBase<tf::Node *,true>(o); } ) );
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
}
