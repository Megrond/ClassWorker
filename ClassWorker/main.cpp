#include <iostream>
#include <Windows.h>
#include "Worker.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    Worker workers[4]
    {
        Worker("������ ���� ��������", "��������", 2010, 50000),
        Worker("������ ���� ��������", "�������", 2008, 60000),
        Worker("������� ����� ���������", "�������", 2015, 40000),
        Worker("�������� ������� ����������", "�����������", 2012, 70000)
    };
    workers->showWorker(workers, 4);


    uint32_t howYears = 10;
    Worker Workers[4]; 
    uint32_t workersCount{ 0 };
    for (uint32_t i{ 0 }; i < 4; i++)
    {
        if (workers[i].getStartYear() <= 2023 - howYears) 
        {
            Workers[workersCount++] = workers[i];
        }
    }
    cout << "��������� �� ������ ����� " << howYears << " ���:" << endl;
    workers->showWorker(Workers, workersCount);


    uint32_t salaryFull = 55000; 
    Worker salaryWorkers[4]; 
    uint32_t salaryWorkersCount = 0;

    for (uint32_t i = 0; i < 4; i++)
    {
        if (workers[i].getSalary() > salaryFull)
        {
            salaryWorkers[salaryWorkersCount++] = workers[i];
        }
    }
    cout << "��������� � ��������� ���� " << salaryFull <<": " << endl;
    workers->showWorker(salaryWorkers, salaryWorkersCount);


    const char* position = "��������";
    Worker positionWorkers[4]; 
    int positionWorkersCount = 0;
    for (int i = 0; i < 4; i++) 
    {
        if (strcmp(workers[i].getPosition(), position) == 0)
        {
            positionWorkers[positionWorkersCount++] = workers[i];
        }
    }
    cout << "��������� � ���������� " << position << ":" << endl;
    workers->showWorker(positionWorkers, positionWorkersCount); 

    return 0;
}


