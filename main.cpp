#include <iostream>
#include <ctime>

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
	if (Difficulty == 1)
	{
	std::cout << "\nWelcome in Cyberpunks' 2077 simple hacking game." << "\n";
	std::cout << "You are a beginning netrunner climbing its way into the cartels of the Night City." << "\n";
	std::cout << "You are about to score your first job by hacking into poorly secured data server of minor corporation. " << "\n";
	std::cout << "In order to performe a succesfull hacking enter the correct code." << "\n";
	std::cout << "You might need to go through many layers of security. Failure might result in an alarm." << "\n";
	std::cout << "Good luck Samurai!" << "\n";
	std::cout << "\n";
	}
	else if (Difficulty < 10)
	{
		std::cout << "\nYou are on layer "<<  Difficulty << ".\n";
	}
	else
	{
		std::cout << "\nAlmost there Samurai! You can do it! Last layer!" << "\n";
	}
	
}
bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);
	const int CodeA = rand() % Difficulty+Difficulty;
	const int CodeB = rand() % Difficulty+Difficulty;
	const int CodeC = rand() % Difficulty+Difficulty;
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
		std::cout << "*** Hacking successful... Good job Samurai! ***" << "\n";
		std::cout << "*** This security is piece of cake. ***" << "\n";
		return true;
	}
	else
	{
		std::cout << "*** Code incorrect. Security breach! ***" << "\n";
		std::cout << "*** Fortunetlly you did not start the alarm, try again! **" << "\n";
		return false;
	}
		
}
int main()
{
	srand(time(NULL));
	int LevelDifficulty {1};
	const int MaxDifficulty {6};

	while (LevelDifficulty <= MaxDifficulty)
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}
	}
	std::cout << "Excellent work Samurai. You retrived the data successfuly. Any gang will welcome you now. Take care!" << "\n";
	return 0;
}