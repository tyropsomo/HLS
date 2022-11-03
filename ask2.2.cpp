#include <iostream>
using namespace std;

unsigned int checksum (unsigned int a){
	unsigned int ld;//last digit
	unsigned int sum=0;
	bool es=true;//every second digit
	while(a!=0){
		ld=a%10;
		if (es==true){
			sum=sum+ld;
			es=false;
		} else {
			if (ld*2>9) {sum = sum + (2*ld)%10 + (2*ld)/10;} else {sum=sum+2*ld;}
			es=true;
		}
		a=a/10;
	}
	return sum;
}


int main(){
	cout<<checksum(3561)<<", expected:15"<<endl;
	cout<<checksum(98321)<<", expected:24"<<endl;
	cout<<checksum(678)<<", expected:19"<<endl;
	cout<<checksum(12345)<<", expected:21"<<endl;
	cout<<checksum(7777)<<", expected:24"<<endl;
	
	return 0;
}
