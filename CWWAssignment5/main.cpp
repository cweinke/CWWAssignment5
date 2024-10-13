// Assignment 5 - Math Quiz
// Connor Weinke

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;



int main()
{

	string quizPath = "C:\\CPlus\\MathQuiz.txt";
	string resultPath = "C:\\CPlus\\QuizResults.txt";

	
	
	srand(time(NULL));

	cout << "Welcome to the Math Quiz!\n\n";
	
	int lines = 0;
	int questionNumber = 0;
	string line;
	string answer;
	ofstream ofs(resultPath);
	ifstream ifs(quizPath);

	vector<string> questions;
	while (getline(ifs, line))
	{
		questions.push_back(line);
	}


	while (lines <= 2)
	{
			int num = questions.size();
			int randomNumber = rand() % num;
			string currentLine = questions[randomNumber];

			++lines;
		
			cout << "Question " << (lines + 1) << ": " << currentLine << " =\n";
			cout << "Enter your answer: ";
			cin >> answer;
			cout << "\n\n";
			ofs << currentLine << " = " << answer << "\n";
		
		

	}

	cout << "Results Saved to QuizResults.txt";

	ifs.close();
	ofs.close();
	

	(void)_getch();
	return 0;
}