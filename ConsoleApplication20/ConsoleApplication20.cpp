#include <iostream>
#include <set>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    set<int> mySet;

    // Добавление 5 элементов
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(15);
    mySet.insert(5);
    mySet.insert(25);

    // Вывод на экран
    cout << "Исходное множество:";
    for (const auto& element : mySet) {
        cout << " " << element;
    }
    cout << endl;

    // Удаление двух элементов
    mySet.erase(15);
    mySet.erase(25);

    // Вывод на экран после удаления
    cout << "Множество после удаления:";
    for (const auto& element : mySet) {
        cout << " " << element;
    }
    cout << endl;

    return 0;
}
