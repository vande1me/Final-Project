#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int randNum(int n);
void pick_a_question();
int select_next_available(int n);

bool quest_ans[4];
int questions;

int main(){
		int score = 0;
		int count = 0;
		int questions;
		int r, i, n;
		char answer;
		
		srand(time(0)); // set seed for randomizing
			cout << "How many questions would you like to answer? ";
			cout << endl;
		for (i = 1; i <= questions; i++)	
			pick_a_question();

		switch (r)
			
		{
			
		case 1:
				cout << "What fruit is red? " << endl;
				cout << "A) Banana" << endl;
				cout << "B)/>/> Strawberry" << endl;
				cout << "C) Kiwi" << endl;
				cout << "D) Pineapple" << endl;
				cin >> answer;

				questions--;
				if (answer == 'b' || answer == 'B')
				{
					cout << "Correct" << endl;
					score++;
				}
				else
	
				{
						cout << "Incorrect" << endl;
						cout << "The correct answer is B" << endl;
				}
					break;

	

