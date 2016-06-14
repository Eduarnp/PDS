/*
 * main.cpp
 *
 *  Created on: 04/05/2016
 *      Author: eduarnp
 */


#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <vector>
#include "Signal.h"

using namespace std;

string linea;

int main()
{
	float fr, min, max;
	vector<double> y1, y2, correlacion, correlacionx;
	Signal S1,S2;
	S1.SetData();
	S2.SetData();
	fr=S1.GetFrequency();
	y1=S1.GetFunction();
	y2=S2.GetFunction();
	/*cout<<"Frecuencia "<< fr <<endl;
	cout<<"Valores"<< endl;*/
	/*for(int i=0; i< (int) y1.size(); i++ )
			{
				cout << y1[i] << endl;
			}*/
	S1.Vm();
	/*for(int i = 0; i < y.size(); ++i )
	    {
	    	cout<< y.at<double>(i)<< endl;
	    }*/
	S2.SumDif(y1, y2);
	correlacion= S2.CorrA(y1);
	correlacionx= S2.CorrX(y1,y2);
	min= S2.GetMin(y1);
	max= S1.GetMax(y1);
	cout<<"Valor mínimo de la señal "<< "y1: "<< endl;
	cout << min<<endl;
	cout<<"Valor máximo de la señal "<< "y2: "<< endl;
	cout<< max<< endl;
	return 0;
}
