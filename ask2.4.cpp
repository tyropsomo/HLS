#include <iostream>
using namespace std;

template<int N>
void wave_sort(int a[N]){
	//bubble sort
	bool swaped=true;
	int tmp;
	while (swaped==true){
		swaped=false;
		for (int i=0;i<N-1;i=i+1){
			if(a[i]>a[i+1]) {
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
				swaped=true;
			}
		}
	}
	//permutations
	int m;
	if (N%2==0) {m=N;} else {m=N-1;}
	for (int j=0;j<m;j=j+2){
		tmp=a[j];
		a[j]=a[j+1];
		a[j+1]=tmp;
	}
}

template<int N>
bool testbench(int a[N]){
	bool ans=true;
	for (int i=0;i<N-1;i=i+1){
		if (i%2==0){
			if (a[i]<a[i+1]){
				ans=false;
				break;
			}
		} else {
			if (a[i]>a[i+1]){
				ans=false;
				break;
			}
		}
	}
	return ans;
}

int main(){
	//test 1
	int b1[]={5,2,9,3,2};
	wave_sort<5>(b1);
	for(int k=0;k<5;k=k+1){
		cout<<b1[k]<<" ";
	}
	if (testbench<5>(b1)==true) {cout<<"correct"<<endl;} else {cout<<"wrong"<<endl;}
	//test 2
	int b2[]={3,2,9,6,4,1};
	wave_sort<6>(b2);
	for(int k=0;k<6;k=k+1){
		cout<<b2[k]<<" ";
	}
	if (testbench<6>(b2)==true) {cout<<"correct"<<endl;} else {cout<<"wrong"<<endl;}
	//test if testbench actually works 
	int c[]={1,2,3,4,5,6};
	if (testbench<6>(c)==true) {cout<<"testbench doesn't work"<<endl;} else {cout<<"ok"<<endl;}
	return 0;
}
