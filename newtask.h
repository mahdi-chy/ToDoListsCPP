#ifndef NEWTASK_H
#define NEWTASK_H

#include <string>

struct Task {
    int id;
    std::string description;

};

void newTask();
void deleteTask();
void editTask();
void showTask();

#endif // NEWTASK_H
