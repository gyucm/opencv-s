#include <stdio.h>
#include <iostream>
//istream vs ostream
//cin ">>"   cout "<<"

//#include "abc.h" user defined header file

//�Լ� ����
//[��ȯ��] [�Լ���](�Ű�����) {}

int main()
{
	printf("Hello, ");
	printf("World\n");
	std::cout << "Hello, ";
	std::cout << "world\n";
	std::cout << "Hello, world" << std::endl;

	printf("math - %d\n", 100);
	std::cout << "math - " << 100 << std::endl;

	printf("pi - %lf\n", 3.14);
	std::cout << "pi - " << 3.14 << std::endl;

	printf("Score - %c\n", 'A');
	std::cout << "Score - " << 'A' << std::endl;

	//�Է�
	//cŸ��
	int i = 0;
	scanf("input-%d", &i); //������ ������ ����
	printf("%d typed", i);

	//c++
	std::cout << "input - ";
	std::cin >> i; //��ȯ�� ���� ����
	std::cout << i << "typed" << std::endl;

	return 1; //true - 1 , false - 0
}