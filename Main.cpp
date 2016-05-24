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

		case 2:
				cout << "What day is graduation? " << endl << endl;
				cout << "A) June 6th" << endl;
				cout << "B)/>/> May 25th" << endl;
				cout << "C) July 57th" << endl;
				cout << "D) June 3rd" << endl;
				cin >> answer;
		
				questions--;
		
			if (answer == 'a' || answer == 'A')
				
			{
					cout << "Correct" << endl;
					score++;
			
			}
			
			else
			
			{
					cout << "Incorrect" << endl;
					cout << "The correct answer is A" << endl;
				
			}
		
				break;
		
		case 3:
				cout << "How much do I care about DHS? " << endl << endl;
				cout << "A) Ehhhh kind of" << endl;
				cout << "B)/>/> I love it!" << endl;
				cout << "C) A little bit" << endl;
				cout << "D) Zero percent" << endl;
				cin >> answer;
				questions--;
			
			if (answer == 'd' || answer == 'D')
				
			{
				
				cout << "Correct" << endl;
					score++;
				
			}
			else
			{
					cout << "Incorrect" << endl;
					cout << "The correct answer is D" << endl;
				
			}
			
			break;
		case 4:
				cout << "How many dogs do I have? " << endl << endl;
				cout << "A) One" << endl;
				cout << "B)/>/> Three" << endl;
				cout << "C) Two" << endl;
				cout << "D) Four" << endl;
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
		}
		


	

