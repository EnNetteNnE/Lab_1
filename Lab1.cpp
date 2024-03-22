#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "=== МЕНЮ ===\n" << "1. Прямоугольник\n" << "2. Треугольник\n" << "============\n" << "Введите номер фигуры:\n";
    int number;
    cin >> number;
    if (number == 1)
    {
        double width, height;

        cout << "Введите ширину прямоугольника: ";
        cin >> width;
        cout << "Введите высоту прямоугольника: ";
        cin >> height;

        double perimeter = 2 * (width + height);
        double area = width * height;
        double diagonalLength = sqrt(width * width + height * height);

        cout << "Периметр прямоугольника: " << perimeter << endl;
        cout << "Площадь прямоугольника: " << area << endl;
        cout << "Длина диагонали прямоугольника: " << diagonalLength << endl;
    }
    else if (number == 2)
    {
        cout << "Введите 3 стороны треугольника через пробел:\n";
        double st1, st2, st3;
        cin >> st1 >> st2 >> st3;
        double maxTr = (st1 <= st2 && st3 <= st2) ? st2 : (st2 <= st1 && st3 <= st1) ? st1 : st3;
        if (maxTr * 2 >= st1 + st2 + st3)
        {
            cout << "\nТакого треугольника не существует\n";
        }
        else
        {
            cout << "\nПериметр треугольника равен " << st1 + st2 + st3 << endl;
            double p = (st1 + st2 + st3) / 2;
            cout << "Площадь треугольника равна " << sqrt(p * (p - st1) * (p - st2) * (p - st3)) << endl; // "площадь по формуле Герона."
            cout << "Площадь треугольника равна " << sqrt(p * (p - st1) * (p - st2) * (p - st3)) << endl; 
            cout << "Площадь треугольника равна " << sqrt(p * (p - st1) * (p - st2) * (p - st3)) << endl; 
            if ((st1 == st2) or (st2 == st3) or (st1 == st3))
            {
                cout << "Треугольник равнобедренный\n";
            }
            else
            {
                cout << "Треугольник не равнобедренный\n";
            }
        }
    }
    else
    {
        cout << "Такой фигуры нет\n";
    }
}
