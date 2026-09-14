#include <iostream>
#include <deque>
#include <stack>
#include <string>

using namespace std;

int main()
{
	deque<string> tasks;
	tasks.push_back("Check email");
	tasks.push_back("Check portal");
	tasks.push_back("Grade assignments");

	cout << "Original Tasks: ";

	for (string task : tasks){
		cout << task << ", ";
	}

	cout << endl;

	tasks.push_front("Urgent Meeting");
	tasks.push_back("Make PowerPoint");

	cout << "After adding to both ends: ";

	for (string task : tasks)
	{
		cout << task << ", ";
	}

	cout << endl;

	cout << "Front: " << tasks.front() << endl;
	cout << "Back: " << tasks.back() << endl;

	//part 2 using stack - last in, first out (only work with top elements
	stack<string, deque<string> > history;
	history.push("Opened Portal");
	history.push("Graded latest homework assignment");
	history.push("Opened next assignment");

	cout << "\nMost recent action: ";
	cout << history.top() << endl << endl;

	cout << "After undo, most recent action is: " << history.top() << endl << endl;

	// part 3 using a queue - first in first out like people in a line
	queue<string, deque<string> > printQueue;

	printQueue.push("Document A");
	printQueue.push("Document B");
	printQueue.push("Document C");

	cout << "\nNext document to print: " << printQueue.front() << endl;

	printQueue.pop();

	cout << "Next Document after printing: " << printQueue.front() << endl;

	return 0;
}
