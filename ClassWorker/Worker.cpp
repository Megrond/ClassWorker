#include <iostream>
#include <Windows.h>
#include "Worker.h"

using namespace std;

void Worker::showWorker(const Worker* workers, int count) const
{
    for (int i = 0; i < count; i++)
    {
        cout << "���: " << workers[i].getFullName();
        cout << ", ���������: " << workers[i].getPosition();
        cout << ", ��� �����������: " << workers[i].getStartYear();
        cout << ", ��������: " << workers[i].getSalary() << endl;
    }
    cout << endl;
};

