#include "vychisl.h"
#include <iostream>
using namespace std;
/*31. Дан прямоугольник размером 647 x 170. Сколько квадратов со стороной 30
можно вырезать из него ?*/
void func31() {
	const int x = 647, y = 170, side = 30;
	cout << "from 647x170 can make 30x30: " << (647 / 30) * (170 / 30) << endl;
}
/*36. Пользователь вводит номер месяца, вывести название месяца.*/
void func36() {
	cout << '>';
	int number;
	cin >> number;
	const char *months[12] =
	{ "Jan","Fab","March","April","May","June","July",
	"Aug","Sep","Oct","Nov","Dec" };
	cout << months[number - 1] << endl;
}
/*43. Пользователь вводит номер месяца. Вывести название поры года
(весна, лето и т.д.)*/
void func43() {
	cout << '>';
	short m;
	cin >> m;
	switch (m)
	{
	case 1:
	case 2:
	case 12: cout << "winter\n"; break;
	case 3:
	case 4:
	case 5: cout << "spring\n"; break;
	case 6:
	case 7:
	case 8:cout << "summer\n"; break;
	case 9:
	case 10:
	case 11:cout << "autumn\n"; break;
	}
}
/*48. Даны три числа. Найдите те два из них, сумма которых наибольшая.*/
void func48() {
	cout << '>';
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int sum, maxsum=0, i1, i2;
	for(int i=0;i<=1;i++)
		for (int j = i + 1; j <= 2; j++) {
			sum = a[i] + a[j];
			if (sum > maxsum) {
				i1 = i;
				i2 = j;
				maxsum=sum;
			}
		}
	cout << "maxsum=" << maxsum << ", a=" << a[i1] << ", b=" << a[i2] << endl;
		

}
/*59. Дано четырехзначное число. Верно ли, что цифр в нем расположены по
убыванию?Например, 4311 - нет, 4321 - да, 5542 - нет, 5631 - нет, 9871 - да.*/
void func59() {
	cout << '>';
	int n;
	cin >> n;
	int a, b, c, d;
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if (a > b && b > c && c > d)
		cout << "YES\n";
	else
		cout << "NO\n";


}
/*60. Дано трехзначное число. Переставьте первую и последнюю цифры.*/
void func60() {
	cout << '>';
	int n;
	cin >> n;
	int a, b, c;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	n = c * 100 + b * 10 + a;
	cout << n << endl;
}





