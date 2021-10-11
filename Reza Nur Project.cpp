#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;


void cek (string c, int b, int j, string l){
	cout<<"Silahkan login\n";
	l="Reza Nur Ramadhan";
	cout<<"Nama: ";
	cin.ignore(1, '\n'); 
    getline (cin, c);
    j=1234;
	cout<<"Password (4 digit): ";
	cin>>b;
	system ("cls");
	
	if (l==c && b==j){
		cout<<"Nama: "<<c <<" "<<"\n";
		cout<<"Berhasil Login!";
		getch();
		system ("cls");
		
	} else if (l!=c && b!=j){
		cout<<"Gagal Login!";
		getch();
		system ("cls");
		cek (c, b, j, l);
		
	} else if (l!=c && b==j){
		cout<<"Gagal Login!";
		getch();
		system ("cls");
		cek (c, b, j, l);
		
	} else if (l==c && b!=j){
		cout<<"Gagal Login!";
		getch();
		system ("cls");
		cek (c, b, j, l);
	}
	
}

void film(int a){
	system ("color f");
	cout<<"Pilih Genre Film:\n";
	cout<<"1. Drama\n";
	cout<<"2. Action\n";
	cout<<"3. Komedi\n";
	cout<<"4. Horor\n";
	cout<<"5. Romance\n";
	cout<<"6. Segera Hadir\n";
	cout<<"7. Keluar\n";
	cout<<"Masukan Nomor: ";
	cin>>a;
	system("cls");
	
	if(a==1){
		system ("color 3");
		cout<<"Daftar Film:\n";
		cout<<"1. The Shawshank Redemption\n";
		cout<<"2. Forrest Gump\n";
		cout<<"3. Pulp Fiction\n";
		cout<<"4. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system ("cls");
		
		if (a==1){
			cout<<"Tiket Anda";
		} else if (a==2){
			cout<<"Tiket Anda";
		} else if (a==3){
			cout<<"Tiket Anda";
		}else if(a==4){
			film(a);
		}
	}
	else if (a==2){
		system ("color 8");
		cout<<"Daftar Sub-Genre:\n";
		cout<<"1. Action Comedy\n";
		cout<<"2. Disaster Movie\n";
		cout<<"3. Spy Film\n";
		cout<<"4. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system ("cls");
		
		if (a==1){
			cout<<"Daftar Film:\n";
			cout<<"1. Bad Boys\n";
			cout<<"2. 21st Jump Street\n";
			cout<<"3. The Nice Guys\n";
			cout<<"4. Kembali ke Menu Sebelumnya\n";
			cout<<"Masukan Nomor: ";
			cin>>a;
			system ("cls");
			
			if (a==1){
				cout<<"Tiket Anda";
				
			} else if (a==2){
				cout<<"Tiket Anda";
			
			} else if (a==3){
				cout<<"Tiket Anda";
			
			}else if(a==4){
				film(a);
			}
		} 
		else if (a==2){
			cout<<"Daftar Film:\n";
			cout<<"1. 2012\n";
			cout<<"2. Indepedence Day\n";
			cout<<"3. Deep Impact\n";
			cout<<"4. Kembali ke Menu Sebelumnya\n";
			cout<<"Masukan Nomor: ";
			cin>>a;
			system ("cls");
			
			if (a==1){
				cout<<"Tiket Anda";
				
			} else if (a==2){
				cout<<"Tiket Anda";
			
			} else if (a==3){
				cout<<"Tiket Anda";
			
			}else if(a==4){
				film(a);
			}
			
			
		}
		else if (a==3){
			cout<<"Daftar Film:\n";
			cout<<"1. Mission Impossible 1\n";
			cout<<"2. Mission Impossible 2\n";
			cout<<"3. James Bond\n";
			cout<<"4. Kembali ke Menu Sebelumnya\n";
			cout<<"Masukan Nomor: ";
			cin>>a;
			system ("cls");
			
			if (a==1){
				cout<<"Tiket Anda";
				
			} else if (a==2){
				cout<<"Tiket Anda";
			
			} else if (a==3){
				cout<<"Tiket Anda";
			
			}else if(a==4){
				film(a);
			}
		}
		else if (a==4){
			film(a);
		}
	}
	else if (a==3){
		system ("color 6");
		cout<<"Daftar SubGenre:\n";
		cout<<"1. Black comedy\n";
		cout<<"2. Slapsticks\n";
		cout<<"3. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system ("cls");
		
		if(a==1){
			cout<<"Daftar Film:\n";
			cout<<"1. Burn After Reading\n";
			cout<<"2. The Wolf of Wall Street\n";
			cout<<"3. Kembali ke Menu Sebelumnya\n";
			cout<<"Masukan Nomor: ";
			cin>>a;
			system("cls");
			
			if (a==1){
				cout<<"Tiket Anda";
				
			} else if (a==2){
				cout<<"Tiket Anda";
			
			} else if (a==3){
				film(a);
			}
				
			
		}
		else if (a==2){
			cout<<"Daftar Film:\n";
			cout<<"1. Johnny English\n";
			cout<<"2. Meet the Parents\n";
			cout<<"3. Home Alone\n";
			cout<<"4. Kembali ke Menu Sebelumnya\n";
			cout<<"Masukan Nomor: ";
			cin>>a;
			system("cls");
			
			if (a==1){
				cout<<"Tiket Anda";
				
			} else if (a==2){
				cout<<"Tiket Anda";
			
			} else if (a==3){
				cout<<"Tiket Anda";
				
			} else if (a==4){
				film(a);
			}
		} else if (a==3){
			film(a);
		}
	}
	else if (a==4){
		system ("color 4");
		cout<<"Daftar Film\n";
		cout<<"1. The Conjuring\n";
		cout<<"2. The Ring\n";
		cout<<"3. Friday the 13th\n";
		cout<<"4. Silent Hill\n";
		cout<<"5. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system ("cls");
		
		if (a==1){
				cout<<"Tiket Anda";
				
		} else if (a==2){
				cout<<"Tiket Anda";
			
		} else if (a==3){
				cout<<"Tiket Anda";
				
		} else if (a==4){
				cout<<"Tiket Anda";
				
		} else if (a==5){
			film(a);
		}
	}
	else if (a==5){
		system ("color c");
		cout<<"Daftar Film:\n";
		cout<<"1. Titanic\n";
		cout<<"2. The Notebook\n";
		cout<<"3. (500) Days of Summer\n";
		cout<<"4. The Fault in Our Stars\n";
		cout<<"5. About Time\n";
		cout<<"6. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system("cls");
		
		if (a==1){
			cout<<"Tiket Anda";
				
		} else if (a==2){
			cout<<"Tiket Anda";
			
		} else if (a==3){
			cout<<"Tiket Anda";
				
		} else if (a==4){
			cout<<"Tiket Anda";
				
		} else if (a==5){
			cout<<"Tiket Anda";
		} else if (a==6){
			film(a);
		}
	}
	else if (a==6){
		system ("color 7");
		cout<<"Daftar Film:\n";
		cout<<"1. Fantastic Beasts\n";
		cout<<"2. The Hobbit\n";
		cout<<"3. Pirates of the Caribbean\n";
		cout<<"4. Interstellar\n";
		cout<<"5. Gravity\n";
		cout<<"6. Sherlock Holmes\n";
		cout<<"7. Kembali ke Menu Sebelumnya\n";
		cout<<"Masukan Nomor: ";
		cin>>a;
		system ("cls");
		
		if (a==1){
			cout<<"29 November";
			getch();
			system ("cls");
			film(a);
				
		} else if (a==2){
			cout<<"29 Agustus";
			getch();
			system ("cls");
			film(a);
			
		} else if (a==3){
			cout<<"29 Januari";
			getch();
			system ("cls");
			film(a);
				
		} else if (a==4){
			cout<<"29 Maret";
			getch();
			system ("cls");
			film(a);
				
		} else if (a==5){
			cout<<"29 Mei";
			getch();
			system ("cls");
			film(a);
			
		} else if (a==6){
			cout<<"29 Juni";
			getch();
			system ("cls");
			film(a);
			
		} else if (a==7){
			film(a);
		}
	}
	else if (a==7){
		cout<<"Terima Kasih Telah Berkunjung";
	}
}

int main(){
	int a;
	string c, l;
	int b, j;
	cek(c, b, j, l);
	film(a);

}
