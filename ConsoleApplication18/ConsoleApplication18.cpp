#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x = 7, y = 10;

    while (true) {
        cout << "Марсоход находится на позиции " << x << ", " << y << ", введите команду: ";
        string command;
        cin >> command;

        if (command == "W") {
            if (y < 20) {
                y += 1;
            }
        }
        else if (command == "S") {
            if (y > 1) {
                y -= 1;
            }
        }
        else if (command == "A") {
            if (x > 1) {
                x -= 1;
            }
        }
        else if (command == "D") {
            if (x < 15) {
                x += 1;
            }
        }
        else {
            cout << "Неверная команда" << endl;
        }
    }
