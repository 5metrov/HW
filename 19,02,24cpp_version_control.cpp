#include <iostream>
#include <vector> //жёлтая сирень
using namespace std;

void osn0() {
    int unum = 0;
    do {
        cout << "Hello World! \nВывести сообщение ещё раз? 1 - да; 2 - нет;\n";
        cin >> unum;
        switch (unum) {
        case 1: continue; break;
        case 2: break; break;
        }
    } while (unum != 2);
}

int main(){
    setlocale(LC_ALL, "ru");
    osn0();
    return 0;
}

