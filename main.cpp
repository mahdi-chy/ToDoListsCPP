#include <iostream>
#include <vector>
#include <fstream>
#include "newtask.h"



std::vector<Task> tasks;

void taskLoad() {
    // Implement loading tasks from a file (e.g., "backup.txt") into the 'tasks' vector.
    std::ifstream inputFile("backup.txt");
    if (inputFile.is_open()) {
        int lineID;
        std::string stringID;
        std::string lineDes;
        while (std::getline(inputFile,stringID)) {
            lineID = std::stoi(stringID);
            std::getline(inputFile, lineDes);
            tasks.push_back({lineID,lineDes}); 
        }
    }
    inputFile.close();
}

void taskSave() {
    // Implement saving tasks from the 'tasks' vector to a file (e.g., "backup.txt").
    std::ofstream outputFile("backup.txt");
    int lineID;
    std::string lineDes;
    if (outputFile.is_open()) {
        for (const Task& task : tasks) {
            lineID  = task.id;
            lineDes = task.description;
            outputFile << lineID<<std::endl;
            outputFile << lineDes<<std::endl;
        }

    }
    outputFile.close();
}

int main() {
    bool isRunning = true;

    taskLoad(); // Load tasks from a file if needed

    int userInput = 0;
    while (isRunning) {
        std::cout << "---------- To-Do List ---------\n"
                  "1. Enter a new task\n"
                  "2. Delete a task\n"
                  "3. Edit a task\n"
                  "4. Show all tasks\n"
                  "5. Exit the program\n"
                  << std::endl;

        std::cin >> userInput;
        std::cin.ignore();
        switch (userInput) {
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
                showTask();
                break;
            case 5:
                isRunning = false;
                break;
            default:
                break;
        }
    }

    taskSave(); // Save tasks to a file before exiting

    return 0;
}
