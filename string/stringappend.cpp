#include<iostream>
#include<string>

using namespace std;

int main(){
	string name;
	cout << "Enter the name of the programmer";
	cin >> name;
	string about = "is a programmer";
	/*string append*/
	name.push_back(' ');
	for (char c : about){
		name.push_back(c);
	}

	cout << name << endl;
	return 0;
}
