#include <task.h>

Task::Task(int n1, int n, double p)
{
    r = n1;
    N = n;
    srand(time(0));

    Probability(p);

    Experiment();

}

int Task::Shots(vector<double> p)
{
    int i = 1;
    double temp = ((double)rand() /(double)RAND_MAX);
    while ((temp > p[i - 1]) && (i < r))
    {
        temp = (rand() /(double)RAND_MAX);
        i++;
    }
    return i;
}

void Task::Probability(double p)
{
    for (int i = 0; i < r; i++)
    {
        p1.push_back(p);
        p2.push_back(p);
        p3.push_back(p);
    }
}

void Task::Experiment()
{
    int temp = 0;
    for (int i = 0; i < (3*r - 2); i++)
        v.push_back(0);
    for (int i = 0; i < N; i++)
    {
        temp = Shots(p1) + Shots(p2) + Shots(p3);
        int j = 0;
        while (temp != j + 3)
            j++;
        v[j]++;
    }

}
