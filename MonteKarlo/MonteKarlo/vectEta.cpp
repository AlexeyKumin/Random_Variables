#include "stdafx.h"
#include "vectEta.h"

double relKsi()
{
	double rel = rand();
	while (rel == RAND_MAX)
		rel = rand();
	return (((double)rel + 0.5) / (double)RAND_MAX);
}

double relEta()
{
	return (-log(1 - relKsi()) / 2);
}

void quickSort(vector<double> &numbers, int left, int right)
{
	double pivot; // разрешающий элемент
	int l_hold = left; //левая граница
	int r_hold = right; // правая граница
	pivot = numbers[left];
	while (left < right) // пока границы не сомкнутся
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
			left++; // сдвигаем левую границу вправо 
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
			right--; // сдвигаем правую границу вправо 
		}
	}
	numbers[left] = pivot; // ставим разрешающий элемент на место
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
		quickSort(numbers, left, pivot - 1);
	if (right > pivot)
		quickSort(numbers, pivot + 1, right);
}

void vectEta::vectE(int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		Eta.push_back(relEta());

		if (Eta[i] > Etamax)
			Etamax = Eta[i];
		if (Eta[i] < Etamin)
			Etamin = Eta[i];
	}
	quickSort(Eta, 0, Eta.size() - 1);
}

void vectEta::vectX()
{
	for (double xi = Etamin; xi < Etamax + h; xi += h)
		x.push_back(xi);
}

void vectEta::vectV_EtaMid()
{
	double p = 0;
	int k = 0;
	double Mid = 0;
	for (int i = 1; i < x.size(); i++)
	{
		k = 0;
		Mid = 0;
		while ((p < Eta.size()) && (Eta[p] <= x[i]))
		{
			k++;
			Mid += Eta[p];
			p++;
		}
		v.push_back((double)k / (double)Eta.size());
		if (k)
			EtaMid.push_back(Mid / (double)k);
		else
			EtaMid.push_back(x[i] + (x[i] - x[i - 1]) / (double)2);
	}
}

void vectEta::vectF()
{
	for (int i = 0; i < v.size(); i++)
		f.push_back(v[i] / h);
}

vectEta::vectEta(int N, double H)
{
	vectE(N);

	h = H; //(Etamax - Etamin) * 10 / (double)N;

	vectX();

	vectV_EtaMid();

	vectF();
}


double vectEta::M()
{
	double M = 0;
	for (int i = 0; i < Eta.size(); i++)
		M += Eta[i];
	return M / (double)Eta.size();
}

double vectEta::D()
{	
	vectEta E2(Eta.size(), h);
	for (int i = 0; i < E2.Eta.size(); i++)
	{
		double Eta2 = relEta();
		E2.Eta[i] = Eta2 * Eta2;

		if (E2.Eta[i] > E2.Etamax)
			E2.Etamax = E2.Eta[i];
		if (Eta[i] < Etamin)
			E2.Etamin = E2.Eta[i];
	}
	E2.h = h;
	E2.vectX();
	E2.vectV_EtaMid();
	double m = M();
	return (E2.M() - m * m);
}

double vectEta::Mo()
{
	double Max = 0, Mo = 0;
	for (int i = 0; i < f.size(); i++)
		if (f[i] > Max)
		{
			Max = f[i];
			Mo = EtaMid[i];
		}
	return Mo;
}

double vectEta::Me()
{
	if (Eta.size() % 2)
		return Eta[(Eta.size() / 2) + 1];
	else
		return (Eta[(Eta.size() / 2)] + Eta[(Eta.size() / 2) + 1]) / (double)2;
}

double vectEta::Norm()
{
	double Sum = 0;
	for (int i = 0; i < v.size(); i++)
		Sum += v[i];
	return Sum;
}