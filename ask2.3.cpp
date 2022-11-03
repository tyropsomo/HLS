#include <iostream>
using namespace std;

template<int N, int M>
void compute_row_sum (short a[N][M], short row_sum[N]){
	
	for (int i=0;i<N;i=i+1){
		row_sum[i]=0;
		for (int j=0;j<M;j=j+1){
		row_sum[i]=row_sum[i]+a[i][j];
		}
	}
}

int main(){
	cout<<"test 1"<<endl;
	short m1[2][3];
	m1[0][0]=1;
	m1[0][1]=2;
	m1[0][2]=5;
	m1[1][0]=5;
	m1[1][1]=15;
	m1[1][2]=20;
	short rs1[2];
	compute_row_sum<2,3>(m1,rs1);
	cout<<"rs1[0]="<<rs1[0]<<", expected:8"<<endl;
	cout<<"rs1[1]="<<rs1[1]<<", expected:40"<<endl;
	
	cout<<"\ntest 2"<<endl;
	short m2[1][6];
	m2[0][0]=1;
	m2[0][1]=2;
	m2[0][2]=5;
	m2[0][3]=5;
	m2[0][4]=15;
	m2[0][5]=20;
	short rs2[1];
	compute_row_sum<1,6>(m2,rs2);
	cout<<"rs2[0]="<<rs2[0]<<", expected:48"<<endl;
	
	cout<<"\ntest 3"<<endl;
	short m3[4][2];
	m3[0][0]=14;
	m3[0][1]=26;
	m3[1][0]=55;
	m3[1][1]=45;
	m3[2][0]=159;
	m3[2][1]=201;
	m3[3][0]=60;
	m3[3][1]=80;
	short rs3[1];
	compute_row_sum<4,2>(m3,rs3);
	cout<<"rs3[0]="<<rs3[0]<<", expected:40"<<endl;
	cout<<"rs3[1]="<<rs3[1]<<", expected:100"<<endl;
	cout<<"rs3[2]="<<rs3[2]<<", expected:360"<<endl;
	cout<<"rs3[3]="<<rs3[3]<<", expected:140"<<endl;
	
	
	return 0;
}
