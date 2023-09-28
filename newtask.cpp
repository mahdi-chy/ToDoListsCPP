#include <iostream>
#include <vector>
#include <string>
#include "newtask.h"

extern std::vector<Task> tasks;

// Define your functions here
void newTask() {
    // Implement adding a new task
    int taskID;
    if (tasks.empty()) {
        taskID=1;
    }
    else {
        taskID = tasks.back().id + 1;
    }
    
    std::string taskDes;
    //std::cin.ignore();
    std::cout << taskID << "-> Enter Your Task: ";
    std::getline(std::cin,taskDes);
    std::cout<<std::endl;
    
    tasks.push_back({ taskID,taskDes });
}

void deleteTask() {
    // Implement deleting a task
}

void editTask() {
    // Implement editing a task
}

void showTask() {
    // Implement displaying all tasks
}
