#include <iostream>
using namespace std;

int main(){
    
    string nama;
    string sandi="Reza";

    cout<<"MASUKAN NAMA: ";
    cin>>nama;

    if (nama==sandi)
    {
        cout<<"login";
    } 
    else{
        cout<<"gagal";
    }
}