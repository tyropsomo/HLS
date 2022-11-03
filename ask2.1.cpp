#include <iostream>
using namespace std;

unsigned short count_ones (unsigned int a){
	unsigned const int xor_op = 1;//00000000000000000000000000000001
	unsigned int aa;
	unsigned short int counter=0;
	for (int i=0; i<32;i=i+1){
		aa=a;
		aa=(aa>>i);
		aa=(aa<<31);
		aa=(aa>>31);
		if (aa^xor_op==0) counter=counter+1;
	}
	return counter;
}


int main(){
	cout<<count_ones(3)<<", expected:2"<<endl;
	cout<<count_ones(5)<<", expected:2"<<endl;
	cout<<count_ones(2)<<", expected:1"<<endl;
	cout<<count_ones(15)<<", expected:4"<<endl;
	cout<<count_ones(255)<<", expected:8"<<endl;
	cout<<count_ones(256)<<", expected:1"<<endl;
	
	return 0;
}
