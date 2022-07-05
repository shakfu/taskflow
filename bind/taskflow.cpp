#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_sys__pthread__pthread_types(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_string(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_exception(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stdexcept(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_system_error(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_chrono(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind___threading_support(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_thread(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std___locale(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_future(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_taskflow_utility_uuid(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(taskflow, root_module) {
	root_module.doc() = "taskflow module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	static std::vector<std::string> const reserved_python_words {"nonlocal", "global", };

	auto mangle_namespace_name(
		[](std::string const &ns) -> std::string {
			if ( std::find(reserved_python_words.begin(), reserved_python_words.end(), ns) == reserved_python_words.end() ) return ns;
			else return ns+'_';
		}
	);

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "st"},
		{"", "std"},
		{"std", "chrono"},
		{"", "tf"},
		{"tf", "detail"},
		{"tf", "dsl"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule( mangle_namespace_name(p.second).c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_sys__pthread__pthread_types(M);
	bind_std_string(M);
	bind_std_exception(M);
	bind_std_stdexcept(M);
	bind_std_system_error(M);
	bind_std_chrono(M);
	bind___threading_support(M);
	bind_std_thread(M);
	bind_std___locale(M);
	bind_std_unknown_unknown(M);
	bind_std_future(M);
	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_taskflow_utility_uuid(M);

}
