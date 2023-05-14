#include <iostream>
#include <string>

using namespace std;

int main(){
	

	string name = "james bond";
	string username(name);
	string search = "bond";
	string line(50,'#');

	/*Finding strings*/
	std::size_t pos = username.find(search);
	if (pos != std::string::npos){
		cout << "Found search string at position --> "<<pos<< std::endl;
	}
	/*Another way to search for a string using string literals*/
	std::cout << "Position of comma at:->" << ("Hello , World!"s).find(",")<<std::endl;
	cout << line << std::endl;
	return 0;
}
