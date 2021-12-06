// TODO: comments here

#include <iostream>

template <class T>
T half(T num)
{
	T result = num / 2;

	return result;
}

template<>
int half<int>(int num)
{
	float tempResult = static_cast<float>(num) / 2;
	std::cout << tempResult << '\n';
	int result = round(tempResult);

	return result;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	std::cout << half(a) << '\n';
	std::cout << half(b) << '\n';
	std::cout << half(c) << '\n';

	
	std::cout << '\n';
	system("pause");
	return 0;
}