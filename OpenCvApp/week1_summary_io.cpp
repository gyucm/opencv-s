#include <stdio.h>
#include <iostream>
//istream vs ostream
//cin ">>"   cout "<<"

//#include "abc.h" user defined header file

//함수 형태
//[반환형] [함수명](매개변수) {}

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

	//입력
	//c타입
	int i = 0;
	scanf("input-%d", &i); //사전에 정수로 정의
	printf("%d typed", i);

	//c++
	std::cout << "input - ";
	std::cin >> i; //반환형 정의 없음
	std::cout << i << "typed" << std::endl;

	return 1; //true - 1 , false - 0
}