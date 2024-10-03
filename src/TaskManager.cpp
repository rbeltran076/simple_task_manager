#include "TaskManager.h"
#include <algorithm>

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(const std::string& name) {
    tasks.erase(std::remove_if(tasks.begin(), tasks.end(), [&name](Task& task) {
        return task.getName() == name;
    }), tasks.end());
}

void TaskManager::displayTasks() const {
    for (const auto& task : tasks) {
        task.displayTask();
    }
}

void TaskManager::prioritizeTasks() {
    // Sort tasks based on their deadline
    std::sort(tasks.begin(), tasks.end(), [](Task& t1, Task& t2) {
        return t1.getDeadline() < t2.getDeadline();
    });
}
