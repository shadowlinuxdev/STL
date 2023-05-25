#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> mylist {10,20,22,33,21,50};
	list<int> other {12,32,43,56,11,20};

	mylist.merge(other);
	for(auto i=mylist.begin(); i!=mylist.end();++i){
		cout << *i << "\n";
	}
	cout <<"Size of the list -->"<< mylist.size()<<endl;
	//only hold the unique values
	mylist.unique();

	for (auto i=mylist.begin();i!=mylist.end();++i){
		cout << *i ;
		cout << endl;
	}
	return 0;
}
