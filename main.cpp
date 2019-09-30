#include <iostream>

template <typename T>
constexpr T SumThreeValues(T a, T b, T c)
{
	return a+b+c;
}
template <typename T>
constexpr T MultiplyThreeValues(T a, T b, T c)
{
	return a*b*c;
}
int main()
{
	std::cout << "You name is Bond, James Bond ... (spoken with strong Scotish accent of Mr Sean Connery)." << std::endl;
	std::cout << "You are about to use on of the gadgets M has provided you and hack into a secret computer." << std::endl;
	std::cout << "In order to be succesfull enter the correct code. Failure will result in an alarm and your probable death." << std::endl;
	std::cout << "Good luck 007!" << std::endl;
	std::cout << std::endl;
	const int CodeA = 5;
	const int CodeB = 10;
	const int CodeC = 4;
	const int CodeSum = SumThreeValues(CodeA,CodeB,CodeC);
	const int CodeProduct = MultiplyThreeValues(CodeA,CodeB,CodeC);

	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The numbers in the code add up to: " << CodeSum << std::endl;
	std::cout << "The numbers in the code multiply to: " << CodeProduct << std::endl;

	int PlayerGuess {};
	return 0;
}