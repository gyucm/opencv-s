//quiz
//namespace�� �̿��Ͽ� ��Ģ���� ���⸦ ����� ���ϴ�.
//�� �� a,b �Է��� �޽��ϴ�.
//����� ��ȣ +,-,/,* �Է��� �޽��ϴ�.
//namespace Calc{} �����մϴ�.
//Calc ���ӽ����̽����� add(+), sub(-), mul(*), div(/) �Լ��� ������
//main�� �Լ��Դϴ�.
//�Է°� ����� cin, cout�� ����մϴ�.

/*��������
Calc program Started
input 1 - 10
input 2 - 20
input symbol - *
result => 10 * 20 = 200

result �Լ��� ȣ���ؼ� ��� ���


#include <iostream>

namespace Calc{
	int a, b, resVal;
	char symbol;
	int add(int a, int b) { return a + b; }
	int sub(int a, int b) { return a - b; }
	int mul(int a, int b) { return a * b; }
	int div(int a, int b) { return a / b; }
	int result()
	{
		if (symbol == '+')
		{
			resVal = add(a, b);
		}
		else if (symbol == '-')
		{
			resVal = sub(a, b);
		}
		else if (symbol == '*')
		{
			resVal = mul(a, b);
		}
		else if (symbol == '/')
		{
			resVal = div(a, b);
		}
		
		return resVal;
		
	}
	
}

//using namespace Calc;

int main()
{
	int a, b;
	char symbol;
	std::cout << "input1 - ";
	std::cin >> a;
	std::cout << "symbol - ";
	std::cin >> symbol;
	std::cout << "input2 - ";
	std::cin >> b;
	std::cout << "result = " << Calc::result() << std::endl;
	

}*/


#include <iostream>

namespace Calc 
{
	int a=0, b=0, resVal=0;
	char symbol=' ';
	int add(int a, int b) { return a + b; }
	int sub(int a, int b) { return a - b; }
	int mul(int a, int b) { return a * b; }
	int div(int a, int b) { return a / b; }
	int result()
	{
		if (symbol == '+') resVal = add(a, b);
		else if (symbol == '-') resVal = sub(a, b);
		else if (symbol == '*') resVal = mul(a, b);
		else if (symbol == '/') resVal = div(a, b);
		return resVal;
	}
	
	

}

//using namespace Calc;

int main()
{
	//set Calc variables
	//call calc result
	std::cout << "input 1 : "; std::cin >> Calc::a;
	std::cout << "input 2 : "; std::cin >> Calc::b;
	std::cout << "input S : "; std::cin >> Calc::symbol;
	std::cout << "result : " << Calc::result();
}