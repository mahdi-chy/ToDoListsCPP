#include"iostream"
#include<vector>
#include"newtask.h"

extern std::vector<std::string> tasks;
extern std::vector<std::string> taskID;


int newTask() {

	return 0;
}


int deleteTask() {

	return 0;
}


int editTask() {

	return 0;
}


std::string showTask() {
	auto j = taskID.begin();
	for (auto i = tasks.begin(); i != tasks.end();i++) {
		 j != taskID.end(); j++;
		std::cout << tasks[1];
		std::cout << taskID[1];
	}
	return 0;
}

