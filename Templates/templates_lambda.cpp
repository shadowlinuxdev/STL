#include <iostream>

template <typename T>

class Container {
	T t;
	public:
		explicit Container(T t):t(t){}

		friend std::ostream& operator<<(std::ostream& os,const Container<T>& c){
			return (os<<"Conatiner holding"<<c.t);
		}
};

/*function template*/
template <typename X>
bool isGreater(X x1, X x2){
	return x1>x2;
}

using namespace std;
/*main function*/

int main(){
	
		cout << std::boolalpha;

		Container<int> c(10);
		Container<float> f(9.99);

		cout << c << endl;
		cout << f << endl;

		cout << isGreater(10,20)<< endl;

		/*C++20 , use a templated lambda*/
		auto l = []<typename T> (T t1, T t2){
			return t1 == t2;
		};
		cout << "Lambda returns : " << l(10,10) << endl;
}
