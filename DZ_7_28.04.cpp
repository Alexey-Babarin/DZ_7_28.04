#include <iostream>
using namespace std;

class Fraction 
{
private:
    int numerator;
    int denominator;

public:
    // Конструктор класса
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    // Перегрузка оператора сложения для дробей
    Fraction operator+(const Fraction& other) 
    {
        int result_num = numerator * other.denominator + other.numerator * denominator;
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

    // Перегрузка оператора вычитания для дробей
    Fraction operator-(const Fraction& other) 
    {
        int result_num = numerator * other.denominator - other.numerator * denominator;
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

    // Перегрузка оператора умножения для дробей
    Fraction operator*(const Fraction& other) 
    {
        int result_num = numerator * other.numerator;
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

    // Перегрузка оператора деления для дробей
    Fraction operator/(const Fraction& other) 
    {
        int result_num = numerator * other.denominator;
        int result_den = denominator * other.numerator;
        return Fraction(result_num, result_den);
    }

    // Метод для вывода дроби
    void display() 
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian");

    Fraction a(1, 2);
    Fraction b(3, 4);

    // Сложение дробей
    Fraction sum = a + b;
    cout << "Сумма дробей: ";
    sum.display();

    // Вычитание дробей
    Fraction diff = a - b;
    cout << "Разность дробей: ";
    diff.display();

    // Умножение дробей
    Fraction prod = a * b;
    cout << "Произведение дробей: ";
    prod.display();

    // Деление дробей
    Fraction div = a / b;
    cout << "Частное дробей: ";
    div.display();

    return 0;
}