#include <iostream>
#include <array>


using namespace std;

template <typename T>

void dutch_flag_sort(T arr[],int size,T midVal){

	int i = 0;
	int j = 0;
	int n = size-1;


	while(j<=n){
		if(arr[j]<midVal){
			T temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i++;
			j++;
		}
		else if(arr[j]>midVal){
			T temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			n--;
		}
		else{
			j++;
		}
	}
}
int main(){

	int numbers[20]={0,1,2,3,4,5,6,7,8,9,10,0,2,3,4,7,5,5,11,99};
	std::array<int,20> numbers2 = {0,2,3,4,5,6,7,8,9,10,22,12,8,7,8,9,11,21,32,44};


	cout << "Numbers"<< endl;

	for (int i:numbers){
		cout << i << endl;
	}

	dutch_flag_sort(numbers,20,9);
	dutch_flag_sort(numbers2.data(),numbers2.size(),22);
	dutch_flag_sort(&numbers2[0],numbers2.size(),22);
	cout << "+++++++++++++++++";
	cout << endl;
	return 0;
}
