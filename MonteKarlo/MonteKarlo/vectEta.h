#pragma once
#pragma once
#include <cmath>
#include <string>
#include <vector>
#include <random>
#include <ctime>

using namespace std;
class vectEta
{
public:
	vector<double> Eta;
	vector<double> EtaMid;
	double Etamax = 0, Etamin = 10000;
	double h;
	vector<double> x;
	vector<double> v;
	vector<double> f;


	vectEta(int N, double H);

	void vectX();

	void vectV_EtaMid();

	void vectE(int N);

	void vectF();

	double M();

	double D();

	double Mo();

	double Me();

	double Norm();
};

