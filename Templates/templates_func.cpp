#include <iostream>

using namespace std;

/*create a template*/
template <typename T>

/*create a class template*/
class Container {
	T t;
	public:
	/*creating a constructor*/
	explicit Container(T t):t(t)	{}

	friend std::ostream& operator<<(std::ostream& os, const Container<T>& c){
		return (os<< "Container holding: "<<c.t);
	}

};
/*function template*/
template <typename X>
bool isGreater(X x1, X x2){
	return x1>x2;
}
/*creating a specialised template*/
template <>
bool isGreater(int x1 , int x2){
	std::cout <<"Specialized for int"<< endl;
	return x1>x2;
}
/*main function*/
int main(){

	Container<int> c(10);
	Container<float> f(20.12);

	cout << c << endl;
	cout << f << endl;

	cout << std::boolalpha;
	cout << isGreater(10,20)<<endl;
	cout << isGreater(3.112,2.199)<< endl;
	cout << isGreater('c','a')<<endl;
	cout << isGreater("AAAAA","ZZZZZZZZZZZZZZZZZZZZ")<<endl;
	return 0;
}
