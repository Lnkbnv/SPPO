#include <iostream>

using namespace std;

struct ListElement //Создание класса списка
{
	int value;
	ListElement* pointer;

	ListElement() // Нулевой эллемент списка
	{
		value = 0;
		pointer = NULL;
	}
};
void InputList(ListElement*& first, int x)
{
	ListElement* l = NULL;
	int i = 0;
	cout << "Введите каждый элемент ";
	while (i < x)
	{
		ListElement* p1 = new ListElement();
		cin >> p1->value;
		if (first == NULL)
		{
			first = p1;
			l = p1;
		}
		else
		{
			l->pointer = p1;
			l = p1;
		}
		i++;
	}
}
void AscendingSortList(ListElement* first) // Сортировка списка по возрастанию элементов
{
	ListElement* l = first->pointer; //чтобы нам не сравнивать 1 элемент с самим собой
	ListElement* p = first; // первый элемент
	while (p->pointer != NULL) { // пока не последний элемент
		while (l != NULL) // пока не дошли до конца
		{
			if (l->value < p->value)
			{
				int buf = l->value; // буферу присуждается число, записанное в элементе l
				l->value = p->value; // l указывает на число, которому присваивается p
				p->value = buf; // p указывает на число, которому присваивается старое значение
			}
			l = l->pointer;// переходим на следующий не меняя p
		}
		p = p->pointer; // сравниваем со всеми теперь следующий элемент
		l = p->pointer; // чтобы не сравнивать с самим собой
	}

}
void OutputList(ListElement* l) // Вывод
{
	while (l != NULL)
	{
		cout << l->value;
		l = l->pointer;
		if (l != NULL) cout << ", ";
	}
	cout << endl;
}
int main() // Главная Функция
{
	setlocale(LC_ALL, "Russian");
	ListElement* first = NULL;
	int x;
	cout << "Введите количество элементов списка = ";
	cin >> x;
	InputList(first, x);
	OutputList(first);
	AscendingSortList(first);
	OutputList(first);
	system("pause");
	return 0;
}