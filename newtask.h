#pragma once
#ifndef NEWTASK_H
#define NEWTASK_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

struct Task {
    int id;
    std::string description;

};

void newTask();
void deleteTask();
void editTask();
void showTask();

#endif // NEWTASK_H
