#ifndef TASK_H
#define TASK_H

#include <random>
#include <time.h>
#include <vector>
#include <iostream>

using namespace std;

class Task
{
public:
    int r; //сколько выстрелов дается каждому стрелку
    int N; //сколько раз проводим эксперимент
    vector<int> v; //ряд распределения св
    vector<double> p1; //массив вероятностей попаданий для 1го стрелка
    vector<double> p2;
    vector<double> p3;

    Task(int r, int n, double p);

    int Shots(vector<double> p);
    void Probability(double p);
    void Experiment();

};

#endif // TASK_H
