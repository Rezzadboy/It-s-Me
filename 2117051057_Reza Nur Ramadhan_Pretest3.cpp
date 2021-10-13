#include <iostream>
using namespace std;

int main (){
	
//  Reza Nur Ramadhan
//  kelas A
//  2117051057

	float harga_barang;
	float total_belanjaan;
	int x = 41000; //Ongkir 1
	int y = 11000; //Ongkir 2
	int z = 0;     //Ongkir 3
	
	cout<<"~~~~~~~~~Cara Menghitung Total Belanjaan~~~~~~~~~\t\t\t"<<"14 september 2021\n";
    cout<<"~~~~~~~~~Rumus Total Belanjaan~~~~~~~~~\n\n";
    
	cout<<"Harga Barang: Rp. ";
	    cin>> harga_barang;
	cout<<"\n\n";
	
	if (harga_barang < 50000){           // Kondisi pertama kita harga kurang dari 50k
		total_belanjaan = harga_barang + x ; 
		    cout<<"Ongkir: Rp. "<< x << "\n";    
		cout<<"Total Harga: Rp. "<< total_belanjaan;
		
	} else if (harga_barang < 120000){   // kondisi kedua jika harga lebih dari 50k dan kurang dari 120k
		total_belanjaan = harga_barang + y; 
		    cout<<"Ongkir: Rp. "<< y << "\n";
		cout<<"Total Harga: Rp. "<< total_belanjaan;
		
	} else {                             // kondisi ketiga jika harga lebih dari 120k
		total_belanjaan = harga_barang + z;
		    cout<<"Ongkir: Rp. "<< z << "\n";
		cout<<"Total Harga: Rp. " << total_belanjaan;
	}
	return 0;
}
