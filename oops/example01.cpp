#include<iostream>

using namespace std;

class Person{
				char name[40];
				int age;
				public:
						void getData(void);
						void displayData(void);
};

void Person::getData(){
	cout<<"Enter Name"<<endl;
	cin>>name;
	cout<<"Enter Age"<<endl;
	cin>>age;
}

void Person::displayData(){
	cout<<name;
	cout<<endl;
	cout<<age;
	cout<<endl;
}

int main(){
	Person *james = new Person();
	james->getData();
	james->displayData();
	return 0;
}
