#include <iostream>
#include <clocale>

using namespace std;

void show_menu(){
    cout << "[--------Главное меню--------]";
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    show_menu();
    return 0;
}

