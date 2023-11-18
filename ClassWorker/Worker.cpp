#include <iostream>
#include <Windows.h>
#include "Worker.h"

using namespace std;

void Worker::showWorker(const Worker* workers, int count) const
{
    for (int i = 0; i < count; i++)
    {
        cout << "ФИО: " << workers[i].getFullName();
        cout << ", Должность: " << workers[i].getPosition();
        cout << ", Год поступления: " << workers[i].getStartYear();
        cout << ", Зарплата: " << workers[i].getSalary() << endl;
    }
    cout << endl;
};

