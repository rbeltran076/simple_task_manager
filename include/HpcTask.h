#ifndef HPC_TASK_H
#define HPC_TASK_H

#include "BaseTask.h"

class HpcTask : public BaseTask {
public:
    HpcTask(std::string name, int priority, int estimatedTime);

    void displayTask() const override;  // Declaration only
};

#endif
