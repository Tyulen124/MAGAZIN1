#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int qt1 = 0;
	int qt2 = 0;
	int qt3 = 0;
	int qt4 = 0;
	int qt5 = 0;
	int qt6 = 0;
	int qt7 = 0;
	int qt8 = 0;
	int qt9 = 0;
	int qt10 = 0;
	int AJ = 50;

	const int size = 100;
	double price = 0;
	double priceAJ = 0;


	int id;
	int arr[size]{};

	int quantity;
	int qFJ = 0;

	int disTea;
	double priceN = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "| Фруктовые Соки | id-11 Яблочный | id-12 Апельсиновый | id-13 Абрикосовый | id-14 Грушевый |\n";
		std::cout << "|                | 85р за 1 литр  |    80р за 1 литр   |    82р за 1 литр  |  87р за 1 литр |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "| Овощные Соки   | id-21 Томатный |    id-22 Луковый   |  id-23 Огуречный  |                |\n";
		std::cout << "|                | 75р за 1 литр  |    70р за 1 литр   |    78р за 1 литр  |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "|     Чаи        | id-31 Чесночный|  id-32 Петрушевый  |                   |                |\n";
		std::cout << "|                | 90р за 1 литр  |    95р за 1 литр   |                   |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "|    Настойки    | id-41 Боярышник|                    |                   |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "Введите id товара который хотите выбрать (Максимальный размер чека 100 позиций)\nили введите 0 чтобы завершить добавление товаров: ";
		std::cin >> id;
		if (id == 0)
		{
			break;
		}

		std::cout << "Введите количество данного товара товаров которые хотите: ";
		std::cin >> quantity;


		if (id == 11 && quantity > 0)
		{

			/*AJ = AJ - quantity;
			if (quantity > AJ)
			{

				std::cout << "Такого количества яблочного сока нет в наличии\n его осталось: " << AJ;
				Sleep(2500);
			}

			else
			{}*/
				arr[i] = 85 * quantity;
				priceAJ += arr[i];
				qFJ += 1;

				qt1 += quantity;
			



		}


		if (id == 12 && quantity > 0)
		{
			arr[i] = 80 * quantity;
			price += arr[i];
			qFJ += 1;
			qt2 += quantity;

		}
		if (id == 13 && quantity > 0)
		{
			arr[i] = 82 * quantity;
			price += arr[i];
			qFJ += 1;
			qt3 += quantity;
		}
		if (id == 14 && quantity > 0)
		{
			arr[i] = 87 * quantity;
			price += arr[i];
			qFJ += 1;
			qt4 += quantity;
		}
		if (id == 21 && quantity > 0)
		{
			arr[i] = 75 * quantity;
			price += arr[i];
			qt5 += quantity;
		}
		if (id == 22 && quantity > 0)
		{
			disTea = quantity / 4;

			arr[i] = 70 * quantity;

			price += arr[i];
			price = price - (70 * disTea);
			qt6 += quantity;

		}
		if (id == 23 && quantity > 0)
		{
			arr[i] = 78 * quantity;
			price += arr[i];
			qt7 += quantity;
		}
		if (id == 31 && quantity > 0)
		{
			arr[i] = 90 * quantity;
			price += arr[i];
			qt8 += quantity;
		}
		if (id == 32 && quantity > 0)
		{

			arr[i] = 95 * quantity;
			price += arr[i];
			if (quantity > 3)
			{
				price = price * (1 - 0.05);
			}
			qt9 += quantity;
		}
		if (id == 41 && quantity > 0)
		{

			if (qFJ > 0)
			{
				std::cout << "Боярышник недоступен\n";
				Sleep(1000);
				priceN *= 0;

			}
			else
			{
				arr[i] = 150 * quantity;
				priceN += arr[i];
				qt10 += quantity;
			}



		}




		system("cls");
		Sleep(750);








	}
	if (qFJ > 0)
	{

		priceN *= 0;
	}
	int dis = 0;
	if (price > 1500)
	{
		price = price - (1.0 - 0.13);
		dis += 13;
	}
	price += priceN;
	price += priceAJ;


	std::cout << "Ваши товары: \n";
	if (qt1 > 0)
	{
		std::cout << "Яблочные соки - " << qt1 << "шт\n";
	}
	if (qt2 > 0)
	{
		std::cout << "Апельсиновые соки - " << qt2 << "шт\n";
	}
	if (qt3 > 0)
	{
		std::cout << "Абрикосовые   соки - " << qt3 << "шт\n";
	}
	if (qt4 > 0)
	{
		std::cout << "Грушевые соки - " << qt4 << "шт\n";
	}
	if (qt5 > 0)
	{
		std::cout << "Томатные соки - " << qt5 << "шт\n";
	}
	if (qt6 > 0)
	{
		std::cout << "Луковые соки - " << qt6 << "шт\n";
	}
	if (qt7 > 0)
	{
		std::cout << "Огуречные соки - " << qt7 << "шт\n";
	}
	if (qt8 > 0)
	{
		std::cout << "Чесночные чаи - " << qt8 << "шт\n";
	}
	if (qt9 > 0)
	{
		std::cout << "Петрушевые чаи - " << qt9 << "шт\n";
	}
	if (qt10 > 0)
	{
		std::cout << "Боярышник - " << qt10 << "шт\n";
	}
	std::cout << "\nОбщая стоимость покупки: " << price << "\n" << "Скидка: " << dis << "\n";



	return 0;
}