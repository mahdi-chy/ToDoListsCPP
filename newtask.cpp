#include "newtask.h"

extern std::vector<Task> tasks;

void newTask() {
    int taskID;
    std::string taskDes;

    if (tasks.empty()) {//checks if tasks vector is empty and initializes it
        taskID=1;
    }
    else{
        taskID = tasks.back().id + 1;
    }
    
    //std::cin.ignore();
    std::cout << taskID << "-> Enter Your Task: ";
    std::getline(std::cin,taskDes);
    std::cout<<std::endl;
    
    tasks.push_back({ taskID,taskDes });//pushes new task in tasks vector
}

void deleteTask() {
    std::cout << "Type in the ID of the task you want delete: " << std::endl;
    int userInput;
    std::cin >> userInput;
    std::cin.ignore();
    for (auto i = tasks.begin(); i != tasks.end(); ++i) {
        if (i->id==userInput) {
            i->description.clear();
        }
    }
}

void editTask() {
    int userInput;
    std::string line;
    std::cout << "Type the ID of the task you want to edit: ";
    std::cin >> userInput;
    std::cin.ignore();

    for (Task& i : tasks) {
        if (i.id==userInput) {
            std::cout << "ID: " << i.id << " Enter new details: ";
            std::getline(std::cin, line);
            i.description = line;
        }
    }
}

void showTask() {
    for (const Task& i:tasks) {
        std::cout << "ID: " << i.id << std::endl;
        std::cout << "Task: " << i.description << std::endl << std::endl;
   }


}
