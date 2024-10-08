#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;  // A vector to store all the tasks

public:
    // Adds a task to the task manager
    void addTask(const Task& task);

    // Removes a task by name
    void removeTask(const std::string& taskName);

    // Displays all tasks in the manager
    void displayTasks() const;

    // Prioritizes tasks (for now, based on the deadline; can be extended later)
    void prioritizeTasks();
};

#endif
