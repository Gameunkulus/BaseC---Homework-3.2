// Homework-3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        this->count = 1;
    };

    Counter(int count) {
        if (count == 1) {
        this->count = 1;
        }
        else {
            this->count = count;
        }
    };

    void add() {
        count++;
    };

    void remove() {
        count--;
    }

    void mes() {
        cout << count << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "rus");
    
    int num = 1;
    string text;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> text;
    
    if (text == "да") {
        cout << "Введите начальное значение счётчика: ";
        cin >> num;
    }

    Counter counter(num);
    while (true) {
        char sym;
        cout << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> sym;
        switch (sym) {
        case ('+'):
            counter.add();
            break;
        case ('-'):
            counter.remove();
            break;
        case ('='):
            counter.mes();
            break;
        case ('x'):
            return 0;
            break;
        default: return;
        }

    }
    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
