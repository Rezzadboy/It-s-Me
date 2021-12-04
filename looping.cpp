#include <iostream>
using namespace std;

int main(){

    string a[10]={"*"," *","  *","   *","    *",
                  "     *","      *","       *","        *",
                  "         *"};

    for (int j = 0; j < 10; j++){
        for(int i=0; i<10; i++){
            cout<< a[j];
        }
        cout<<"\n";
    }

}