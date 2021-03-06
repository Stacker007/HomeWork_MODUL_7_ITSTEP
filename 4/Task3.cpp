/*
3.​ Написать перегруженную функцию mySum
для реализации различных способов сложения
двух дробных чисел. Функция должна выводить
результат сложения на консоль. Варианты перегрузки:

а) сложения десятичных дробей (с фиксированной точкой);

b) сложения натуральных дробей (каждое число задается числителем и знаменателем)
*/

#include <iostream>
using namespace std;
void mySum(double a, double b);
void mySum(int a, int b, int c, int d);


void main()
{
	setlocale(LC_ALL, "rus");
	int a = 1,//  a/b + c/d
		b = 2,
		c = 12,
		d = 8;
	double aDub = double(a) + double(b) / 100;
	double bDub = double(c) + double(d) / 100;



	mySum(aDub, bDub);
	cout << endl;
	mySum(a, b, c, d);
	cout << endl;
	system("pause");

}

void mySum(double a, double b) {
	printf("Сумма %.2f и %.2f равна %.2f", a, b, a + b);
}
void mySum(int a, int b, int c, int d) {
	int numerator = a*d + c*b;
	int denominator = b*d;
	int general = 1;
	while (general <= numerator && general <= denominator)
	{
		if (numerator % general == 0 && denominator%general == 0) {
			numerator /= general;
			denominator /= general;
			general = 1;
		}
		general++;
	}
	if(denominator-1) printf("Сумма %d/%d и %d/%d равна %d/%d", a, b, c, d, numerator, denominator);
	else printf("Сумма %d/%d и %d/%d равна %d", a, b, c, d, numerator);

}
