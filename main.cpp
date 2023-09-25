#include <iostream>
#include "fstream"
#include <vector>
#include <string>
#include"newtask.h"

struct taStruct {
	std::vector<std::string> tasks;
	std::vector<std::string> taskID;
};

std::string taskLoad(std::vector<taStruct>& tasks) {
	std::vector<taStruct> result;
	std::fstream saveFile;
	saveFile.open("backup.txt", std::ios::in | std::ios::out | std::ios::app);
	if (saveFile.is_open()) {
		std::cout << "--- File Loaded ---" << std::endl;
		std::string line;
		std::vector<taStruct>& temp=tasks;
		while (std::getline(saveFile,line)) {
			result.push_back({temp.tasks, });
			std::getline(saveFile, line);
			tasks.push_back(line);
		}

	}
	else {
		std::cout << "file error" << std::endl;
	}
	saveFile.close();
}

int main() {
	bool isRunning = true;
	taStruct tasks;

	taskLoad(tasks.taskID,tasks.tasks);
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
			tasks=showTask(tasks.taskID,tasks.tasks);
			break;
		case 5:
			isRunning = false;
			break;
		default:
			break;
		}

	}

}