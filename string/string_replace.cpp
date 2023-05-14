#include <iostream>
#include <string>

using namespace std;

int main(){
	string user = "dipayan is a programmer";
	std::size_t pos = user.find("programmer");
	user.replace(pos,("programmer"s).length(),"system admin");

	cout << user;
	return 0;
}
