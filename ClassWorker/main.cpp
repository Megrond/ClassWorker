#include <iostream>
#include <Windows.h>
#include "Worker.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    Worker workers[4]
    {
        Worker("Ромашов Виктор Викторович", "Менеджер", 2010, 50000),
        Worker("Малыгин Андрей Валерьевич", "Инженер", 2008, 60000),
        Worker("Петров Иван Михайлович", "Рабочий", 2015, 40000),
        Worker("Одегов Андрей Николаевич", "Программист", 2012, 70000)
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
    cout << "Работники со стажем более " << howYears << " лет:" << endl;
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
    cout << "Работники с зарплатой выше " << salaryFull <<": " << endl;
    workers->showWorker(salaryWorkers, salaryWorkersCount);


    const char* position = "Менеджер";
    Worker positionWorkers[4]; 
    int positionWorkersCount = 0;
    for (int i = 0; i < 4; i++) 
    {
        if (strcmp(workers[i].getPosition(), position) == 0)
        {
            positionWorkers[positionWorkersCount++] = workers[i];
        }
    }
    cout << "Работники с должностью " << position << ":" << endl;
    workers->showWorker(positionWorkers, positionWorkersCount); 

    return 0;
}


