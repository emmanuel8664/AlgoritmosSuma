
#include "stdafx.h"
using namespace std;

#include <iostream>
#include <chrono>
#include <fstream>
#include <iostream>

using namespace std;
using namespace std::chrono;



//Se debe inicializar
int **matrizInt32;
long **matrizInt64;
float **matrizFloat;
double **matrizDouble;
//int matriz[20][20];

void inicializar(int &n)
{
	// creamos la matrizInt32!
	matrizInt32 = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrizInt32[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			matrizInt32[i][j] = 10;
		}
	}

	// creamos la matrizInt64!
	matrizInt64 = new long*[n];
	for (int i = 0; i < n; i++)
	{
		matrizInt64[i] = new long[n];
		for (int j = 0; j < n; j++)
		{
			matrizInt64[i][j] = 10;
		}
	}

	// creamos la matrizFloat!
	matrizFloat = new float*[n];
	for (int i = 0; i < n; i++)
	{
		matrizFloat[i] = new float[n];
		for (int j = 0; j < n; j++)
		{
			matrizFloat[i][j] = 10;
		}
	}

	// creamos la matrizDouble!
	matrizDouble = new double*[n];
	for (int i = 0; i < n; i++)
	{
		matrizDouble[i] = new double[n];
		for (int j = 0; j < n; j++)
		{
			matrizDouble[i][j] = 10;
		}
	}
}

double sumaAInt32(int &n)
{
	int sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + matrizInt32[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double) (n*n);

	return tiempoPorIteracion;
}

double sumaBInt32(int &n) 
{
	int sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum = sum + matrizInt32[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaCInt32(int &n)
{
	int sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j+=2)
	{
		for (int i = 0; i < n; i+=2)
		{
			sum = sum + matrizInt32[i][j] + matrizInt32[i+1][j] + matrizInt32[i][j+1]+ matrizInt32[i+1][j+1];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

//PARA INT64
double sumaAInt64(int &n)
{
	long sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + matrizInt64[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaBInt64(int &n)
{
	long sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum = sum + matrizInt64[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaCInt64(int &n)
{
	long sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j += 2)
	{
		for (int i = 0; i < n; i += 2)
		{
			sum = sum + matrizInt64[i][j] + matrizInt64[i + 1][j] + matrizInt64[i][j + 1] + matrizInt64[i + 1][j + 1];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

//FLOAT
double sumaAFloat(int &n)
{
	float sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + matrizFloat[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaBFloat(int &n)
{
	float sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum = sum + matrizFloat[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaCFloat(int &n)
{
	float sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j += 2)
	{
		for (int i = 0; i < n; i += 2)
		{
			sum = sum + matrizFloat[i][j] + matrizFloat[i + 1][j] + matrizFloat[i][j + 1] + matrizFloat[i + 1][j + 1];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

//DOUBLE
double sumaADouble(int &n)
{
	double sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + matrizDouble[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaBDouble(int &n)
{
	double sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum = sum + matrizDouble[i][j];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}

double sumaCDouble(int &n)
{
	double sum = 0;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < n; j += 2)
	{
		for (int i = 0; i < n; i += 2)
		{
			sum = sum + matrizDouble[i][j] + matrizDouble[i + 1][j] + matrizDouble[i][j + 1] + matrizDouble[i + 1][j + 1];
		}
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	double duracion = duration_cast<nanoseconds>(t2 - t1).count();
	double tiempoPorIteracion = duracion / (double)(n*n);

	return tiempoPorIteracion;
}


void funcion()
{
	int replicas = 5;


	int arreglo[17] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800 };

	ofstream archivo;
	ofstream newFile("archivoC++.txt");
	archivo.open("archivoC++.txt");

	//REPLICAS
	for (int i = 0; i < replicas; i++)
	{
		//TAMANIO REPLICA
		for each (int tamanio in arreglo)
		{
			inicializar(tamanio);

			//TIPO DE DATO
			for (int j = 0; j < 4; j++)
			{
				if (j == 0)
				{
					double tiempoSumaA = sumaAInt32(tamanio);
					double tiempoSumaB = sumaBInt32(tamanio);
					double tiempoSumaC = sumaCInt32(tamanio);

					archivo << tiempoSumaA << endl;
					archivo << tiempoSumaB << endl;
					archivo << tiempoSumaC << endl;
				}
				if (j == 1)
				{
					double tiempoSumaA = sumaAInt64(tamanio);
					double tiempoSumaB = sumaBInt64(tamanio);
					double tiempoSumaC = sumaCInt64(tamanio);

					archivo << tiempoSumaA << endl;
					archivo << tiempoSumaB << endl;
					archivo << tiempoSumaC << endl;
				}
				if (j == 2)
				{
					double tiempoSumaA = sumaAFloat(tamanio);
					double tiempoSumaB = sumaBFloat(tamanio);
					double tiempoSumaC = sumaCFloat(tamanio);

					archivo << tiempoSumaA << endl;
					archivo << tiempoSumaB << endl;
					archivo << tiempoSumaC << endl;
				}
				if (j == 3)
				{
					double tiempoSumaA = sumaADouble(tamanio);
					double tiempoSumaB = sumaBDouble(tamanio);
					double tiempoSumaC = sumaCDouble(tamanio);

					archivo << tiempoSumaA << endl;
					archivo << tiempoSumaB << endl;
					archivo << tiempoSumaC << endl;
				}
			}
		}
	}

	archivo.close();

}

int main(int argc, const char * argv[]) 
{
	funcion();
	cout << "TERMINADO";
}
	