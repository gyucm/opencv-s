#include <iostream>
int main()
{
	const int maxLength = 5 * 5; //상수화
	int data[maxLength] = {
		1,2,3,4,5,
		1,0,2,0,4,
		2,3,0,2,3,
		3,1,2,3,2,
		1,2,3,0,2 };

	//data{ 0~5 }:6개
	//8bit img {0~255}:256개
	//16bit img {0~65534}:65535개

	const int histo_max = 6; //from data[]:0~5
	int histo[histo_max] = { 0 };

	for (size_t i = 0; i <maxLength; i++)histo[data[i]]++;

	for (size_t row = 0; row < histo_max; row++)
	{
		std::cout << row << "|";
		for (size_t col = 0; col < histo[row]; col++)
		{
			std::cout << "=";
		}
		std::cout << std::endl;
	}


}