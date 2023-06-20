#include<iostream>
#include<stdexcept>
#include<numeric>
#include<vector>
#include<set>

/*Template function range
template <typename SequenceContainer>

SequenceContainer range(const size_t from , const size_t to){
	SequenceContainer container; //instance of SequenceContainer
	for (size_t i = from ; i < to ; ++i){
		container.insert(container.end(),i);/*iterator , insert at the end
	}
	return container;
}
*/
class Range{
	const size_t from,to;
	public:
		Range(const size_t from,const size_t to):from (from), to(to){
			if(from>to) throw std::logic_error{""};

	}
	/*convertion operator,implicit to any type using template*/
	template<typename SequenceContainer>
	operator SequenceContainer(){
		SequenceContainer container;
		for(size_t i = from;i<to;++i){
			container.insert(container.end(),i);
		}
		return container;
	}
};

/*String to int and double conversion*/
class String{
	const std::string & s; /*variable string by reference*/
				public:
					String(const std::string & s) :s(s){}
					operator int(){ return std::stoi(s);};
					operator float(){return std::stof(s);};
					operator double(){return std::stod(s);};
};
int main(){
	/*std::vector<int> r = range<std::vector<int>>(0,5);*/
/*	std::vector<int> r = Range(0,5);*/
	std::set<float> r = Range(0,4);
	for (auto i : r){
		std::cout<<i<<std::endl;
	}

	std::string s = "123";
	int x = String(s);
	float y = String("345");
	double z = String("789");
	std::cout << x << y << z <<std::endl;
	return 0;
}
