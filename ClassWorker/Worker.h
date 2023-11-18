#pragma once
#include <iostream>

using namespace std;

class Worker {
private:
    char* fullname;
    char* position;
    uint32_t startYear;
    uint32_t salary;

public:
    Worker(const char* fullname, const char* position, uint32_t startYear, uint32_t salary) :
        fullname{ fullname ? new char[strlen(fullname) + 1] : nullptr },
        position{ position ? new char[strlen(position) + 1] : nullptr },
        startYear{ startYear },
        salary{ salary } {

        if (fullname)
        {
            strcpy_s(this->fullname, strlen(fullname) + 1, fullname);
        }
        if (position)
        {
            strcpy_s(this->position, strlen(position) + 1, position);
        }
    }

    explicit Worker() : Worker(nullptr, nullptr, startYear, 0) {};

    const char* getFullName() const
    {
        return fullname;
    }

    const char* getPosition() const
    {
        return position;
    }

    uint32_t getStartYear() const
    {
        return startYear;
    }

    uint32_t getSalary() const
    {
        return salary;
    }

    void showWorker(const Worker* workers, int count) const;
};
