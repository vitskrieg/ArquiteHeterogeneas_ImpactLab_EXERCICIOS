#include <iostream>
#include <thread>

// First lesson of C++

using namespace std;

void print_hello() {
    cout <<"Hello from thread!" << endl;
}


void nome() {
    cout <<"Vilson" << endl;

}

void sobrenome() {
    cout <<"Oliveira" << endl;
}

// void laco() {
//     for (int n = 0; n <= 10; n++){
//         cout << n << endl;
//         //cout << "End For" << endl;
//     }
// }

int main() {

    cout << "UFAM" << endl;
    thread t1(nome);
    t1.join();
    cout << "IComp" << endl;
    thread t2(sobrenome);
    t2.join();
    // thread t3(laco);
    // t3.join();
    
    for (int n = 0; n <= 10; n++){
        cout << "o valor de n é: " << n << endl;
    }
    
    
    return 0;

}