#include "Task.h"

Task::Task(std::string n, int d, int p, int e)
    : name(n), deadline(d), priority(p), estimatedTime(e) {}

std::string Task::getName() const {
    return name;
}

int Task::getDeadline() const {
    return deadline;
}

int Task::getPriority() const {
    return priority;
}

int Task::getEstimatedTime() const {
    return estimatedTime;
}

void Task::displayTask() const {
    std::cout << "Task: " << name << " | Deadline: " << deadline 
              << " | Priority: " << priority << " | Estimated Time: " << estimatedTime << std::endl;
}
