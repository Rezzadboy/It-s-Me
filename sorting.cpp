#include <iostream>
using namespace std;

int main(){
	int angka[5] = {8, 3, 10, 1, 4};
	bool tukar;
    int pindah;
    int a = 4;
	
	do{
		tukar = false;
		for(int i=0; i<5; i++){
			if(angka[i] > angka[i+1]){
				pindah = angka[i];
				angka[i] = angka[i+1];
				angka[i+1] = pindah;
				tukar = true;
			}
		}
		a--;
	}while(tukar);
	
	for(int j = 0;j <5;j++){
		cout << angka[j] << " ";
	}
}
