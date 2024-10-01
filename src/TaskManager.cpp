#include <vector>
#include <algorithm>
#include "TaskManager.h"

class TaskManager {
private:
    std::vector<Task> tasks;  // Stores all tasks

public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void removeTask(const std::string& name) {
        tasks.erase(std::remove_if(tasks.begin(), tasks.end(), [&name](Task& task) {
            return task.getName() == name;
        }), tasks.end());
    }

    void displayTasks() const {
        for (const auto& task : tasks) {
            task.displayTask();
        }
    }

    void prioritizeTasks() {
        // Basic sorting algorithm, can be modified later
        std::sort(tasks.begin(), tasks.end(), [](Task& t1, Task& t2) {
            return t1.getDeadline() < t2.getDeadline();
        });
    }
};
