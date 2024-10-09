#include "TaskManager.h"
#include <algorithm>

void TaskManager::addTask(std::unique_ptr<BaseTask> task) {
    tasks.push_back(std::move(task));
}

void TaskManager::displayTasks() const {
    for (const auto& task : tasks) {
        task->displayTask();
    }
}

void TaskManager::prioritizeTasks() {
    std::sort(tasks.begin(), tasks.end(), [](const std::unique_ptr<BaseTask>& t1, const std::unique_ptr<BaseTask>& t2) {
        return t1->getPriority() > t2->getPriority(); // Sort in descending order of priority
    });
}

// New function to display tasks by priority (High -> Low)
void TaskManager::displayTasksByPriority() const {
    std::cout << "\nHigh Priority Tasks (Priority 3):\n";
    for (const auto& task : tasks) {
        if (task->getPriority() == 3) {
            task->displayTask();
        }
    }

    std::cout << "\nMedium Priority Tasks (Priority 2):\n";
    for (const auto& task : tasks) {
        if (task->getPriority() == 2) {
            task->displayTask();
        }
    }

    std::cout << "\nLow Priority Tasks (Priority 1):\n";
    for (const auto& task : tasks) {
        if (task->getPriority() == 1) {
            task->displayTask();
        }
    }
}

bool TaskManager::markTaskComplete(const std::string& taskName) {
    for (auto& task : tasks) {
        if (task->getName() == taskName) {
            task->markAsComplete();
            return true;
        }
    }
    return false;
}
