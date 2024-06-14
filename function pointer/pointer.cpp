//тип функции(*имя указателя)(параметры функции)
#include <iostream>
#include<string>


int Plus(int num1, int num2) {
    return num1 + num2;
}

int Minus(int num1, int num2) {
    return num1 - num2;
}

int Umn(int num1, int num2) {
    return num1 * num2;
}

int Del(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        std::cout << "Ошибка: деление на ноль.";
        return 0;
    }
}

int persent(int num1, int num2) {
    if (num2 != 0) {
        return num1 % num2;
    }
    else {
        std::cout << "ошибка: деление на ноль" << std::endl;
        return 0;
    }
}

void makeDecision(int (*operation)(int, int), int number1, int number2) {
    std::cout << "результат: " << operation(number1, number2) << "\n";
}

int main() {
    setlocale(LC_ALL, "RU");
    int number1, number2;
    char operation;

    std::cout << "Введите 2 числа ";
    std::cin >> number1;
    std::cin >> number2;


    std::cout << "Выберите действие (+, -, *, /, %): ";
    std::cin >> operation;

    switch (operation) {
    case '+':
        makeDecision(Plus, number1, number2);
        break;
    case '-':
        makeDecision(Minus, number1, number2);
        break;
    case '*':
        makeDecision(Umn, number1, number2);
        break;
    case '/':
        makeDecision(Del , number1, number2);
        break;
    case '%':
        makeDecision(persent, number1, number2);
        break;
    default:
    {
        std::cout << "неверный выбор!";
    }


    return 0;
    }
}