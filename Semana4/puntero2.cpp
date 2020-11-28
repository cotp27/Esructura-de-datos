#include <iostream>

using namespace std;

int main(){
    int valor = 100;
    int valor1 = -100;
    int* ptr1= &valor;  // ptr1=&valor
    int* ptr2= &valor1; // ptr2=&valor1
    ++(*ptr1);

    cout << valor<< endl;
    cout << *ptr1 + *ptr2 << endl;
    //cout << ptr1 + ptr2 << endl; error
    return 0;  //ID
}