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
