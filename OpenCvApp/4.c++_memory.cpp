//memory
//alloc,release
//pointer vs reference
//1D array and index

#include <iostream>
#include <memory>
using namespace std;

//1) int sum(int* const pData, int size)
//2) int sum(const int* pData, int size)
//3) int sum(const int* const pData, int size)

int sum(int* const pData, int length){
	int sum = 0;
	for (size_t i = 0; i < length; i++) {sum += pData[i];}
	return sum;
}

//partial_sum �Լ� start_index=5, finish_index = 23
int sum(int* const pData, int length,int start_index,int finish_index)
{
	if (finish_index >= length) return -1;
	int sum = 0;
	for (size_t i = start_index; i < finish_index; i++) { sum += pData[i]; }
	return sum;
	/*int start_index = 5;
	int finish_index = 23;
	int index[8] = { 0 };
	int sum = 0;
	for (int i = start_index; i < finish_index; i++)
		sum = sum + index[i];*/
	

}

//partial_sum �Լ� start_row,start_col (1,1), finish_row, finish_col (3,3)
int sum(int* const pData, int width, int height,
	int start_row, int start_col, int finish_row, int finish_col) {
	int sum = 0;
	//�ڵ� �ۼ�
	for (size_t row = start_row; row <= finish_row; row++)
	{
		for (size_t col = start_col; col <= finish_col; col++)
		{
			size_t index = (row)*width + (col);
			sum += pData[index];
		}
	}
	return sum;
}



int main()
{
	/*
	//memory
	int a; double b; char c;
	int* pA; double* pB; char* pC;
	//array
	int arr[100] = { 0, }; //100������������
	//dynamic memory alloc ���� �޸� �Ҵ�
	int sz = 100; //�޸� ũ�Ⱑ ��������

	//memory create
	int* pData = new int[sz] {0, };
	//CShape* pShape = new CCircle(); / CCircle from CShape
	//memory delete
	if (pData != nullptr) {
		delete[] pData; pData = nullptr;
	}*/
	//RAII (Resource Acquisition Is Initialization)
	//����� ���� �ؾ� ��Ȱ�� ���� �޸� ���� �� ���α׷� �̻�
	//C++11 ǥ��... smart pointer ����
	//unique_ptr : �ϳ��� ����Ʈ �����͸� Ư�� ��ü�� ����
	//	design pattern : �������� �ϴٺ��� ������ �������� ������ �װ� �������� ���� 
	//	�� �� �ϳ��� singletone 
	// 
	//shared_ptr : ���� Ƚ���� ���(Reperence Count)
	//	 �� ���䷹���͸� ������ ī��Ʈ�� ����
	/* ex)
	class int
	{
		unsigned int reference_count=0
		int(); //create
		~int() //destory
		{
			for (size_t rc = 0; rc < reference_count; rc++)
			{
				if (this_mem != nullptr) {
					delete[] this_mem; this_mem = nullptr;
				}
			}
		}

		//int* pData = new int[sz] {0, };->reference_count:1
		int* new operator
		{
			reference_count++ 
		}
	}*/

	//weak_ptr : �ϳ� �̻��� shred_ptr ������ �ִ� ��ü�� ���� ������ ����,
	//�������� ������ ���Ե��� ����
	//std::unique_ptr<int> pDatas = std::make_unique<int>(sz);
	//std::shared_ptr<int> pTypes = std::make_shared<int>(sz);

	
	//int* pData = nullptr; //�޸� ���
	//pData = new int[sz] {0,}; //���� �޸� ���� 

	/*memory leak...�޸� ���� �����÷ο� ������ �Ҹ����� ������
	if (pData != nullptr) {
		delete[] pData; pData = nullptr;
	}*/


	//pointer and reference
	//int dA = 10;
	//int* pdA = &dA;
	/*
	int function_name(int a)//int a = int obj : copy
	{
	���ε���Ÿ != �ܺε���Ÿ, ����
	}
	int function_name(int* pA)//int* pa = int* obj : pointer
	{
	���ε���Ÿ(pA �ּ�,pointer) == �ܺε���Ÿ ����
	}
	int function_name(int* pA)//int* pa = &int obj : pointer
	int function_name(int& A)//int& A = int obj nickname
	

	void swap_A(int lhs, int rhs)// a(10), b(20) 
	{
		int tmp;
		tmp = lhs; //temp=10
		lhs = rhs; //10 -> 20, ���ε���Ÿ ����
		rhs = tmp; //20 -> 10, ���ε���Ÿ ����
	}

	void swap_B(int* lhs, int* rhs) //&a(10),&b(20) -> a:20, b:10
	{
		int tmp;
		tmp = *lhs; //temp=10
		*lhs = *rhs; //10 -> 20, �ܺε���Ÿ ����
		*rhs = tmp; //20 -> 10, �ܺε���Ÿ ����
	}*/

	//3���� ��� ������
	//int num = 10; //int* pnum = &num;
	/*
	int* const numRef1 = &num;
	1) int Ÿ�� �����͸� ����Ű�� const pointer
	�ʱ�ȭ ���� �ٸ� �ּ� �� ���� �Ұ�
	const int* numRef2 = &num;
	2) const int Ÿ�� ����Ÿ�� ����Ű�� ������
	*�����ڷ� ���� �� ������ �Ұ�
	const int* const numRef3 = &num;
	3) const int Ÿ�� �����͸� ����Ű�� const ������
	1), 2) �ΰ��� Ư���� ��� ����

	int anotherNum = 20;
	const int* ptr1 = &num;
	*ptr1 = 5; // 10->5, const int�� ���� �Ұ�, l-valueȭ ��
	ptr1 = &anotherNum;

	//int* const ptr2; //�ʱ�ȭ�� ���ϸ� ����
	int* const ptr2 = nullptr; //nullptr�ʱ�ȭ
	int* const ptr3 = &num;//�ʱ�ȭ
	*ptr3 = 6;
	ptr3 = &anotherNum;//const pointer�� ��� �ּҸ� �������� ����*/

/*���ۺ�����
	int* pImg = new int(5){ 1,2,3,4,5 };
	if (pImg != nullptr)
	{
		delete[]pImg; pImg = nullptr;
	}
	*/

// alt + Ŀ���� ���� �巡�� / shift+tap �Ŀ� ����

int width = 5;
int height = 5;
int* pImg = new int[width * height] {
	//->col[0]...[4]
	3, 4, 5, 6, 2,//row[0]
		6, 5, 8, 3, 4,
		4, 1, 3, 6, 8,
		6, 5, 8, 2, 3,
		2, 4, 8, 3, 4,//row[4]
};
cout << "image data sum = " << sum(pImg, width * height) << endl;
//partial data ����
//partial_sum �Լ� start_index = 5, finish_index = 23
int start_index = 6, finish_index = 23;
cout << "image data sum = " << sum(pImg, width * height, start_index, finish_index) << endl;
//partial_sum �Լ� start_row,start_col (1,1), finish_row, finish_co (3,3)
cout << "image data sum = " << sum(pImg, width, height, 1, 1, 3, 3) << endl;
if (pImg != nullptr)
{
	delete[] pImg;
}
	return 0;
}

//f9 �극��ũ  / f10 ��ĭ��  /