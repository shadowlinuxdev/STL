#include<iostream>
#include<vector>
#include<exception>

using namespace std;

template<typename T>

void printVector(const vector<T>& vec){
	cout << "used: "<<vec.size() << "/" << vec.capacity()<< endl;
	cout << "max size"<< vec.max_size()<<endl;

	for (const T& t : vec){
		cout << t << endl;
	}
}
int main(){

	vector<int> numbers;
	vector<string> strings{"Hello","World","C++","Templates"};

	numbers.push_back(102);
	numbers.push_back(11);
	numbers.push_back(234);

	printVector(numbers);
	printVector(strings);

	strings.resize(5,"xyz");
	numbers[0]=-9;


	std::cout<< "======================="<<std::endl;
	printVector(numbers);
	printVector(strings);

	/*Display all the elements in the number vector*/
	for(int *p= &numbers[0]; p<(&numbers[0]+numbers.size());++p){
		cout << *p;
		cout << endl;
	}

	// array out of bound exception
	try{
		cout << numbers.at(10);
	}catch(std::out_of_range& e){
		cerr<<e.what()<<endl;
	}

	cout << numbers.front()<<"Numbers at front"<< endl;
	cout << numbers.back()<< "Numbers at Back"<<endl;
	return 0;
}
