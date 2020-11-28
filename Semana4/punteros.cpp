#include <iostream>

using namespace std;

int main(){
    int x1;
    int* p1 = &x1;   // p1 = &x1


    cout<<p1<<endl; // direc memoria
    cout<<&x1<<endl;
    cout<<&p1<<endl;  // el puntero por si solo tiene una doreccion de memoria, 
    cout<<*p1<<endl;  // valor q vive en p1

    *p1 = 8;
    cout<<x1<<endl;

    char x2;
    char* p2 = &x2;

    *p2='f';

    cout<<x2<<endl;


    return 0;

}