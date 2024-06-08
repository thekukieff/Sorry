#include <iostream>
#include <windows.h>

class Animal {
public:
	Animal()//конструктор, Собирает
	{
	
	}
	Animal(int data)//тоже конструктор
	{
		age = data;
	}
	Animal(int data, std::string datas)//конструктор
	{
		age = data;
		name = datas;
	}

	~Animal() {//диструктор не принимает аргументов
		//удаляем динамические массивы если есть


	}

	std::string String_name() {

	}

	/*int SetAge() {
		return age;*/
	//}
	//std::string GetName() {
	//	return name;
	//}

	//std::string GetVoice() {
	//	return voice;
	//}

	//std::string GetType() {
	//	return type;
	//}

	void All(int data, std::string dat,std::string typ, std::string voic) {
		age = data;
		name = dat;
		voice = voic;
		type = typ;
	}

	void PrintAnimal() {
		std::cout << type << " " << name << " " << age << " лет " << voice << std::endl;
	}

private:
	std::string name,type,voice;
	int age;


};


class Dog :public Animal {
public:
	Dog(int ag, std::string typ, std::string nam, std::string voic) {
		
		All(9, "Лайка", "Собака", "ГАВ");
	}
private:






};

class Cat : public Animal {
public:

private:





};



//class Bird: public Animal { //наследование
//public:
//
//	void Fly(bool fly) {
//		if (fly==true)
//		{
//			std::cout << "\nЯ лечу";
//		}
//	}7
//
//	void setFly(bool IsFly) {
//		Is_fly = IsFly;
//	}
//
//
//private:
//	bool Is_fly;
//
//
//
//};




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Animal one(30, " Боня");
	//std::cout<<one.SetAge();

	//Bird two;
	//two.All(10, "Гриша");
	//std::cout << std::endl << two.SetAge();
	//std::cout<<std::endl<<two.GetName();
	Cat cat;
	cat.All(15, "Барсик", "Кот","МЯУ");
	//std::cout <<cat.GetType()<< cat.GetName()<<cat.SetAge()<<" лет "<<cat.GetVoice();
	Dog dogTwosdasd(9, "кот", "НОРман", "Гав");//название конструктора
	dogTwosdasd.PrintAnimal();

	return 0;
}
