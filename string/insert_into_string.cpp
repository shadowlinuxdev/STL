#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "james";
	string line(50,'#');
	/*Insert into a string*/
	name.insert(0,"I am aware of your name");
	cout << name;
	cout << endl;

	return 0;
}
