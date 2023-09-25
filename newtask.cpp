#include"iostream"
#include"newtask.h"


int newTask() {

	return 0;
}


int deleteTask() {

	return 0;
}


int editTask() {

	return 0;
}


void showTask(std::vector<std::string>& tasks, std::vector<std::string>& taskID) {
	for (auto i = tasks.begin(); i != tasks.end();i++) {
		auto j = taskID.begin(); j != taskID.end(); j++;
		std::cout << tasks[1];
		std::cout << taskID[1];
	}
	
}

