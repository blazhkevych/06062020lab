/*
Задание №1
Создайте класс для подсчета площади геометрических фигур.
Класс должен предоставлять функциональность для подсчета
площади треугольника по разным формулам,
площади прямоугольника,
площади квадрата,
площади ромба.
the area of ​​the triangle according to different formulas,
rectangle area
square area
square rhombus.
Функции-члены для подсчета площади должны быть реализованы с помощью статических функций-членов.
Также класс должен считать количество подсчетов площади и возвращать это значение с помощью статической функции-члена.
*/
#include <iostream>
using namespace std;
class geometry
{
public:
	static double triangle1() /*Через основание и высоту*/
	{
		double S;
		double a = 0;
		double h = 0;
		cout << "Площадь треугольника через основание и высоту" << endl;
		cout << "Введите 1 параметр : ";
		cin >> a;
		cout << "Введите 2 параметр : ";
		cin >> h;
		S = (1.0 / 2.0) * h * a;
		++count;
		return S;
	}
	static double triangle2() // площадь треугольника по трем сторонам и радиусу описанной окружности
	{
		double S;
		double a = 0;
		double b = 0;
		double c = 0;
		double R = 0;
		cout << "Площадь треугольника по трем сторонам и радиусу описанной окружности" << endl;
		cout << "Введите 1 параметр : ";
		cin >> a;
		cout << "Введите 2 параметр : ";
		cin >> b;
		cout << "Введите 3 параметр : ";
		cin >> c;
		cout << "Введите 4 параметр : ";
		cin >> R;
		S = (a * b * c) / 4.0 * R;
		++count;
		return S;
	}
	static double square() // площадь квадрата по длине стороны
	{
		double S;
		double a = 0;
		int a1 = 2;
		cout << "Площадь квадрата по длине стороны" << endl;
		cout << "Введите 1 параметр : ";
		cin >> a;
		S = a * a;
		++count;
		return S;
	}
	static double rhombus() //площадь ромба по длине стороны и высоте
	{
		double S;
		double a = 0;
		double h = 0;
		cout << "Площадь ромба по длине стороны и высоте" << endl;
		cout << "Введите 1 параметр : ";
		cin >> a;
		cout << "Введите 2 параметр : ";
		cin >> h;
		S = a * h;
		++count;
		return S;
	}
	static double rectangle() //площадь прямоугольника
	{
		double S;
		double a = 0;
		double b = 0;
		cout << "Площадь прямоугольника" << endl;
		cout << "Введите 1 параметр : ";
		cin >> a;
		cout << "Введите 2 параметр : ";
		cin >> b;
		S = a * b;
		++count;
		return S;
	}	
	static int count;
};
int geometry::count = 0;
int main()
{
	setlocale(0, "");
	int n;
	double s;
	do
	{
		cout << "1. Площадь треугольника через основание и высоту" << endl;
		cout << "2. Площадь треугольника по трем сторонам и радиусу описанной окружности" << endl;
		cout << "3. Площадь квадрата по длине стороны" << endl;
		cout << "4. Площадь ромба по длине стороны и высоте" << endl;
		cout << "5. Площадь прямоугольника" << endl;
		cout << "0. Выход" << endl;
		cout << "Сделайте свой выбор : ";
		cin >> n;
		switch (n)
		{
		case 1:
			s = geometry::triangle1();
			cout << "S = " << s << endl;
			break;
		case 2:
			s = geometry::triangle2();
			cout << "S = " << s << endl;
			break;
		case 3:
			s = geometry::square();
			cout << "S = " << s << endl;
			break;
		case 4:
			s = geometry::rhombus();
			cout << "S = " << s << endl;
			break;
		case 5:
			s = geometry::rectangle();
			cout << "S = " << s << endl;
			break;
		default:
			cout << "Всего фигур : " << geometry::count << endl;
			n = 0;
		}
	} while (n != 0);
	system("pause");
	return 0;
}