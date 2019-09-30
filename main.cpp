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
void PrintIntroduction(int Difficulty)
{
	if (Difficulty == 0)
	{
	std::cout << "\nWelcome in Cyberpunks' 2077 simple hacking game." << "\n";
	std::cout << "You are a beginning netrunner climbing its way into the cartels of the Night City." << "\n";
	std::cout << "You are about to score your first job by hacking into poorly secured data server of minor corporation. " << "\n";
	std::cout << "In order to be succesfull enter the correct code. Failure is not an option." << "\n";
	std::cout << "Good luck Samurai!" << "\n";
	std::cout << "\n";
	}
	else if (Difficulty < 10)
	{
		std::cout << "\nThis security is piece of cake. Keep going! " << 10-Difficulty << " levels to go," << "\n";
	}
	else
	{
		std::cout << "\nAlmost there Samurai! You can do it! Last level!" << "\n";
	}
	
}
bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);
	const int CodeA = 5;
	const int CodeB = 10;
	const int CodeC = 4;
	const int CodeSum = SumThreeValues(CodeA,CodeB,CodeC);
	const int CodeProduct = MultiplyThreeValues(CodeA,CodeB,CodeC);

	std::cout << "There are 3 numbers in the code" << "\n";
	std::cout << "The numbers in the code add up to: " << CodeSum << "\n";
	std::cout << "The numbers in the code multiply to: " << CodeProduct << "\n";
	std::cout << "\n";

	int GuessA, GuessB, GuessC;
	std::cout<< "Enter 3 numbers seperated by spaces:";
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << " " << "\n";

	int GuessSum = SumThreeValues(GuessA,GuessB,GuessC);
	int GuessProduct = MultiplyThreeValues(GuessA,GuessB,GuessC);

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "Hacking successful... Good job Samurai!" << "\n";
		return true;
	}
	else
	{
		std::cout << "Code incorrect. Security breach!" << "\n";
		return false;
	}
		
}
int main()
{
	int LevelDifficulty {0};
	const int MaxDifficulty {11};

	while (LevelDifficulty != MaxDifficulty)
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}
		
	}
	return 0;
}