#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task {
private:
    std::string name;
    int deadline;
    int priority;
    int estimatedTime;

public:
    Task(std::string n, int d, int p, int e);
    std::string getName() const;
    int getDeadline() const;
    int getPriority() const;
    int getEstimatedTime() const;
    void displayTask() const;
};

#endif