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
	std::cout << "Welcome in Cyberpunks 2077 simple hacking game." << std::endl;
	std::cout << "You are a beginning netrunner climbing its way into the cartels of the Night City." << std::endl;
	std::cout << "You are about to score your first job by hacking into poorly secured data server of minor corporation. " << std::endl;
	std::cout << "In order to be succesfull enter the correct code. Failure will result in an alarm and your probable death." << std::endl;
	std::cout << "Good luck Samurai!" << std::endl;
	std::cout << std::endl;
	const int CodeA = 5;
	const int CodeB = 10;
	const int CodeC = 4;
	const int CodeSum = SumThreeValues(CodeA,CodeB,CodeC);
	const int CodeProduct = MultiplyThreeValues(CodeA,CodeB,CodeC);

	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The numbers in the code add up to: " << CodeSum << std::endl;
	std::cout << "The numbers in the code multiply to: " << CodeProduct << std::endl;
	std::cout << std::endl;

	int GuessA, GuessB, GuessC;
	std::cout<< "Enter 3 numbers seperated by spaces:";
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << " " << std::endl;

	int GuessSum = SumThreeValues(GuessA,GuessB,GuessC);
	int GuessProduct = MultiplyThreeValues(GuessA,GuessB,GuessC);

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
		std::cout << "Hacking successful... Good job Samurai!" << std::endl;
	else
		std::cout << "Code incorrect. Security breach!" << std::endl;
	return 0;
}