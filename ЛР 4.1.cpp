#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, N;
	double S; //Позначка для суми "Σ"

	cout << "N = "; cin >> N;

	//Спосіб 1 (While)
	S = 0;
	k = 1;

	while (k <= N)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	}

	cout << "while: " << S << endl;

	//Спосіб 2 (Do - While)
	S = 0;
	k = 1;

	do
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	} while (k <= N);

	cout << "do-while: " << S << endl;

	//Спосіб 3 (For, k++)
	S = 0;
	for (k = 1; k <= N; k++)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}

	cout << "for, k++: " << S << endl;

	//Спосіб 4 (For, k--)
	S = 0;
	for (k = N; k >= 1; k--)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}

	cout << "for, k--: " << S << endl;

	return 0;
}
