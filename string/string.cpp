#include <iostream>
#include <string>

using namespace std;

int main(){
	/*String Declearation*/
	string name = "James Bond";
	string name1("XYZ");
	string name2(name);

	string name3{'J','a','m','e','s'};
	string last(name,6,6);
	string line(20,'-');
	string reverse(name.rbegin(),name.rend());


	cout << name << std::endl;
	cout << name1 << std::endl;
	cout << name2 << std::endl;

	cout <<name3 << std::endl;
	cout << last << std::endl;
	cout << line << std::endl;
	cout << reverse << std::endl;
	return 0;
}
