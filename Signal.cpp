/*
 * Signal.cpp
 *
 *  Created on: 22/04/2016
 *      Author: eduarnp
 */
 
#include "Signal.h"
#include <fstream>
#include <vector>
#include <iostream>
#include <string.h>
#include <sstream>


using namespace std;

Signal::Signal(void)
{
}

//Función que interpola la señal de menor frecuencia.
Signal Interp(const Signal& S2)
{
	Signal S3;
	S3.frequency =5
	vector<double>
	if (s1.size()<s2.size())
	return S3;
}

 //Función que lee los datos de un archivo.
void Signal::SetData()
{
	cout << "Introduzca la ruta del archivo(por ejemplo: /home/.../MiSeñal"<<endl;
	cin >> address;
	ifstream ifs( address.c_str() , ios::in);
	if (ifs){
			double d1;
			cout<<"El archivo se abrió correctamente"<< endl;
			string y;
			ifs>> frequency;

			while (!ifs.eof())
			{
				ifs>>d1;
				if(ifs.eof())
					continue;
				/*getline(ifs, y);
				if(ifs.eof())
					continue;
				stringstream ss(y);*/

				//ss >> d1;
				function.push_back(d1);
			}
			//int i= function.size();
			/*cout << "Frecuencia: "<< frequency <<endl;
			cout<< "Funcion:"<<endl;
			for(int i=0; i< function.size(); i++ )
			{
				cout << function[i] << endl;
			}
			cout<< "Numero de datos del archivo: "<< i << endl;*/

	ifs.close();
	}
	else cout<<"No se pudo abrir el archivo para leer la señal"<< endl;

}

 //Función que devuelve la frecuencia guardada en un archivo(primer valor)
float Signal::GetFrequency (){return frequency;}

 //Función que devuelve un vector con los valores de la función
vector<double> Signal::GetFunction (){return function;}

 //Función que calcula el valor medio y lo guarda en un archivo.
void Signal::Vm()
{
	int i=0;
	string add;
	vector<double> vm;
	float sum=0;
	for(; i< (int) function.size(); ++i){
		sum+=function[i];
	}
	sum/=(i+1);
	cout<<"Introduzca la dirección seguida del nombre para guardar la señal menos su valor medio(punto apunto)"<<endl;
	cin>>add;
	ofstream oofs( add.c_str(), ios::out);
		if (oofs){
			cout<<"La nueva señal se guardó correctamente"<< endl;
			for(i=0; i< (int) function.size(); i++ )
			{
						oofs<<function[i]-sum << endl;
					}
		oofs.close();
		}
		else cout <<"No se guardó correctamente la nueva señal"<< endl;

}

 //Función que calcula la suma y la resta de dos señales y guarda cada una en un archivo.
void Signal::SumDif(vector<double> s1, vector<double> s2)
{
	vector<double> s3,s4;
	float sum, rest;
	string add;
	int v1=s1.size(), v2=s2.size();
	if(v1 <= v2)
	{
		for(int i=0; i< v1 ;i++ )
		{
			sum= s1[i]+s2[i];
			s3.push_back(sum);
		}
		cout<<"Suma de dos señales"<<endl;
		cout<<"Introduzca la dirección donde desea guardar la suma de las dos señales y el nombre del archivo"<<endl;
		cin>>add;

		ofstream ofs( add.c_str(), ios::out);
				if (ofs){
					cout<<"El archivo para guardar la suma se abrió correctamente"<< endl;
					for(int i=0; i< (int) s3.size(); i++ )
					{
						ofs<<s3[i]<< endl;
					}
				ofs.close();
				}
				else cout <<"No se pudo abrir el archivo para guardar la suma"<< endl;

		for(int i=0; i< v1;++i )
		{
			rest= s1[i]-s2[i];
			s4.push_back(rest);
		}
		cout<<"Resta de dos señales"<<endl;
		cout<<"Introduzca la dirección donde desea guardar la resta de las dos señales el nombre del archivo"<<endl;
		cin>>add;
		ofstream ofss( add.c_str(), ios::out);
						if (ofs){
							cout<<"El archivo para guardar la resta se abrió correctamente"<< endl;
							for(int i=0; i< (int) s3.size(); i++ )
							{
								ofs<<s4[i]<< endl;
							}
						ofss.close();
						}
						else cout <<"No se pudo abrir el archivo para guardar la suma"<< endl;
	}
	else
	{
		for(int i=0; i< v2;++i )
		{
			sum= s1[i]+s2[i];
			s3.push_back(sum);
		}
		cout<<"Suma de dos señales"<<endl;
		cout<<"Introduzca la dirección donde desea guardar la suma de las dos señales y el nombre del archivo"<<endl;
		cin>>add;

		ofstream ofs( add.c_str(), ios::out);
				if (ofs){
					cout<<"El archivo para guardar la suma se abrió correctamente"<< endl;
					for(int i=0; i< (int) s3.size(); i++ )
					{
						ofs<<s3[i]<< endl;
					}
				ofs.close();
				}
				else cout <<"No se pudo abrir el archivo para guardar la suma"<< endl;

		for(int i=0; i< v2;++i )
		{
			rest= s1[i]-s2[i];
			s4.push_back(rest);

		}
		cout<<"Resta de dos señales"<<endl;
		cout<<"Introduzca la dirección donde desea guardar la resta de las dos señales el nombre del archivo"<<endl;
		cin>>add;
		ofstream ofss( add.c_str(), ios::out);
						if (ofs){
							cout<<"El archivo para guardar la resta se abrió correctamente"<< endl;
							for(int i=0; i< (int) s3.size(); i++ )
							{
								ofs<<s4[i]<< endl;
							}
						ofs.close();
						}
						else cout <<"No se pudo abrir el archivo para guardar la suma"<< endl;
	}
}

 //Función que calcula y devueve la autocorrelación.
 vector<double> Signal::CorrA(vector<double> s1)
{
	float sum=0;
	int n1= s1.size();
	vector<double> corr;
	for(int n=0; n<n1; ++n)
	{
		for(int i=0; i<n1; ++i)
		{
			sum+=s1[i]*s1[i+n];
		}
		corr.push_back(sum/n1);
		sum=0;
	}

return corr;
}


 //Función que calcula y devuelve la correlación cruzada entre dos funciones.
 vector<double> Signal::CorrX(vector<double> s1, vector<double> s2)
{
	 double sum=0;
	 int n1= s1.size(), n2= s2.size(), n=0;
	 vector<double> corr;
	 while(n<n1 || n<n2)
		n++;
		if(n1<=n2){
	 	for(int i=0; i<n1; ++i)
	 	{
	 		sum+=s1[i]*s2[i+n];
	 	}
	 	sum/=n1;
	 	corr.push_back(sum);
	 	sum=0;
	 	}

	 	else
	 	{
	 		for(int i=0; i<n2; ++i)
	 		{
	 			sum+=s1[i]*s2[i+n];
	 		}
	 		corr.push_back(sum/n2);
	 		sum=0;
	 	}
return corr;
}


 //Función que devuelve el valor máximo de la señal.
float Signal::GetMax(vector<double> s1)
{
	float max=0;
	for(int i=0; i< (int) s1.size(); ++i)
	{
		if(max < s1[i]) max=s1[i];
	}
	return max;
}

 //Función que devuelve el valor mínimo de la señal.
float Signal::GetMin(vector<double> s1)
{
	float min=0;
	for(int i=0; i< (int) s1.size(); ++i)
	{
		if(min > s1[i]) min=s1[i];
	}
	return min;
}

//Filtro promediador de 2 puntos
void Filt2(vector<double> s1)
{

	int n1= s1.size();
	for(int i=0; i<n1; ++i)
	{
		s1[i]+s1[i+1];
	}

}
//Filtro promediador de 5 puntos
void Filt5(vector<double> s1);

{

}






















