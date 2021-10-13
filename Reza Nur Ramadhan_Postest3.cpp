#include <iostream>
using namespace std;

int main (){
	
	int a;
	
	cout<<"Masukan Angka: ";
	    cin>> a;
	cout<<"\n";
	
	switch (a){
	    case 1:
		    cout<< " Satu ";
		break;
		
		case 2:
			cout<< " Dua ";
		break;
		
	    case 3:
	    	cout<< " Tiga ";
	    break;
	    
	    case 4:
	    	cout<< " Empat ";
	    break;
	    
	    case 5:
	    	cout <<" Lima ";
	    break;
	    
	    case 6:
	    	cout<<" Enam ";
	    break;
	    
	    case 7:
	    	cout<<" Tujuh ";
	    break;
		
		case 8:
		    cout<<" Delapan ";
		break;
		
		case 9:
		    cout<<" Sembilan ";
		break;
		
		default:
		    cout<< a;
		cout<<"\n\n";		
	}
	return 0;
}
