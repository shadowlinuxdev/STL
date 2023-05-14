#include<iostream>
#include<exception>

class ResourceException : public std::excpetion {
	std::string w;
	
	public:
	ResourceException(const std::string& w): w(w){}
	const char* what() const noexcept {
		return w.c_str();
	}	
};

class SomethingImportant {
	public:
		SomethingImportant(){
			throw ResourceException("Unable to open some resource ");
		}
};
using namespace std;

int main(){
	try{
		SomethingImportant si;
	}catch (std::exception& except){
		cout << except.what() << std::endl;
		return 1;
	}
	return 0;
}

