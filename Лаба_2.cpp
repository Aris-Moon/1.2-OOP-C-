// Лаба_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "Matrix.h"

using namespace std;
using namespace math_subjects;

int main()
{
	//Matrix::get_counter();
	setlocale(LC_ALL, "RUS");
	
	
	/*srand(2019);
	double b[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	Matrix A(4, b);
	Matrix C = A;
	//Matrix C(-1,0,0.0);
	//C.find_max();
	cout << endl;
	//Matrix B(std::move(A));


	//cout << endl;
	cout.width(8);
	std::cout << C;
	cout << "**************************" << endl;
	std::cout << A;*/
	
	Matrix a(2, 4, 2.0);
	Matrix b(3, 2,1.0);
	cout << b << endl;
	
 	cout << a << endl;

	cout << "Multip ans = " << b.multip_ans(a) << endl;

	a *= b; 
	cout << b << endl;
	cout << a;

	return 0;
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
