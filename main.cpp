// TODO: comments here

#include <iostream>

template <class T>
T half(T num)
{



	return num;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	half(a);
	half(b);
	half(c);

	
	std::cout << '\n';
	system("pause");
	return 0;
}