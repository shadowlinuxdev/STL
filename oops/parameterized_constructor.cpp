#include<iostream>

class Integer{
				int m,n;
				public:
					Integer(int,int);
					void display(void);
				
};

Integer::Integer(int x ,int y){
		this->m = x;
		this->n = y;
}
void Integer::display(){
				std::cout << m <<std::endl;
				std::cout << n << std::endl;
}

int main(){
	
	Integer *intg = new Integer(4,5);
	intg->display();
	return 0;
}
