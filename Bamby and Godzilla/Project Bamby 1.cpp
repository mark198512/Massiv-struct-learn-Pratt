#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;

};

int main()
{
	using namespace std;
	inflatable quests[2] =                   /*Инициализация массива структур*/
	{
		{"Bambi", 0.5, 21.99},              /*Первая структура в массиве*/
		{"Godzilla",2000, 565.99}           /*Вторая структура в массиве*/
	};

	cout << "The quests" << quests[0].name << "and" << quests[1].name
		<< "\nhave a combined volume of"
		<< quests[0].volume + quests[1].volume << "cubic feet\n";
	return 0;
}