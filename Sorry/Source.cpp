#include <iostream>
#include <windows.h>

class Animal {
public:
	Animal()//�����������, ��������
	{
	
	}
	Animal(int data)//���� �����������
	{
		age = data;
	}
	Animal(int data, std::string datas)//�����������
	{
		age = data;
		name = datas;
	}

	~Animal() {//���������� �� ��������� ����������
		//������� ������������ ������� ���� ����


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
		std::cout << type << " " << name << " " << age << " ��� " << voice << std::endl;
	}

private:
	std::string name,type,voice;
	int age;


};


class Dog :public Animal {
public:
	Dog(int ag, std::string typ, std::string nam, std::string voic) {
		
		All(9, "�����", "������", "���");
	}
private:






};

class Cat : public Animal {
public:

private:





};



//class Bird: public Animal { //������������
//public:
//
//	void Fly(bool fly) {
//		if (fly==true)
//		{
//			std::cout << "\n� ����";
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

	//Animal one(30, " ����");
	//std::cout<<one.SetAge();

	//Bird two;
	//two.All(10, "�����");
	//std::cout << std::endl << two.SetAge();
	//std::cout<<std::endl<<two.GetName();
	Cat cat;
	cat.All(15, "������", "���","���");
	//std::cout <<cat.GetType()<< cat.GetName()<<cat.SetAge()<<" ��� "<<cat.GetVoice();
	Dog dogTwosdasd(9, "���", "������", "���");//�������� ������������
	dogTwosdasd.PrintAnimal();

	return 0;
}
