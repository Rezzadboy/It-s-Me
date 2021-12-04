#include <iostream>
using namespace std;

int main(){
	int A, B, x, N;
	int hasil;
	
	
	cin>>A >> B >> x >> N;
	
	for(int i=0; i<N; i++){
		hasil= (A-B+1) * x + 1;
		x = hasil;
	}
	cout<<x;
	
}
