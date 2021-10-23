#include <iostream>
#include <cmath>

using namespace std;

// Рекурсивний спуск, парметр спадає
double S1(const int N, const int i)
{
	if (i < 1)
		return 0;
	else
		return 1. / i + sqrt(1 + sin(1. * i) * sin(1. * i)) + S1(N, i - 1);
}

// Рекурсивний спуск, параметр зростає
double S2(const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return 1. / i + sqrt(1 + sin(1. * i) * sin(1. * i)) + S2(N, i + 1);
}

// Рекурсивний підйом, параметр спадає
double S3(const int N, const int i, double t)
{
	t = t + 1. / i + sqrt(1 + sin(1. * i) * sin(1. * i));
	if (i <= 1)
		return t;
	else
		return S3(N, i - 1, t);
}

// Рекурсивний підйом, параметр зростає
double S4(const int N, const int i, double t)
{
	t = t + 1. / i + sqrt(1 + sin(1. * i) * sin(1. * i));
	if (i >= N)
		return t;
	else
		return S4(N, i + 1, t);
}


// Інтераційний спосіб
double S5(const int N)
{
	double s = 0;
	for (int i = 1; i <= N; i++)
		s += 1. / i + sqrt(1 + sin(1. * i) * sin(1. * i));
	return s;
}

int main() {
	double i, N, s;
	cout << "N = "; cin >> N;
	cout << endl;

	cout << "S1 = " << S1(N, N) << endl;
	cout << "S2 = " << S1(1, N) << endl;
	cout << "S3 = " << S3(1, N, 0) << endl;
	cout << "S4 = " << S4(N, 1, 0) << endl;
	cout << "S5 = " << S5(N) << endl;

	return 0;
}