#include<iostream>

/*Creating a template class*/
template <typename T>
class Container{
    T t;
    public:
    explicit Container(T t):t(t){

    }
    /*creating a friend function for operator overload of insertion operator
        This will allow our object to cout call directly
        outputing object without calling functions of it
    */
    friend std::ostream& operator<<(std::ostream& os, const Container<T>& c){
        return (os<< "Container holding: "<<c.t);
    }
};
using namespace std;

int main(){
    Container<int> c(100);
    Container<string> s("Hello World!");

    cout << c << endl;
    cout << s << endl;


    return 0;
}