#include <iostream>
#include <vector>
#include"newtask.h"

void taskLoad(std::vector<std::string>&tasks) {

}

int main() {
	bool isRunning = true;
	std::vector<std::string> tasks;
	taskLoad(tasks);
	int userInput = 0;
	while (isRunning==true) {
		std::cout << "---------- To-Do List ---------\n"
			"1. Enter a new task\n"
			"2. Delete a task\n"
			"3. Edit a task\n"
			"4. Show all tasks\n"
			"5. Exit the program\n" << std::endl;
		std::cin >> userInput;
		std::cout<< userInput;
		switch (userInput){
		case 1:
			newTask();
			break;
		case 2:
			deleteTask();
			break;
		case 3:
			editTask();
			break;
		case 4:
			showTask;
			break;
		case 5:
			isRunning = false;
			break;
		default:
			break;
		}

	}

}