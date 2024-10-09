#include "HpcTask.h"
#include <iostream>

HpcTask::HpcTask(std::string name, int priority, int estimatedTime)
    : BaseTask(name, priority, estimatedTime) {}

void HpcTask::displayTask() const {
    std::cout << "AI Task: " << name
              << " | Priority: " << priority
              << " | Estimated Time: " << estimatedTime << " hours"
              << " | Completed: " << (isCompleted ? "Yes" : "No")
              << std::endl;
}
