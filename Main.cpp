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
