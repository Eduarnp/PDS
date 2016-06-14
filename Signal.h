/*
 * Signal.h
 *
 *  Created on: 22/04/2016
 *      Author: eduarnp
 */


#ifndef SIGNAL_H_
#define SIGNAL_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

class Signal
{
	private:
		float frequency;
		vector<double> function;
		string address;
		Signal Interp(const Signal& S2);
	public:
		//constructores
		Signal(void);

		//SetThings
		void SetData();

		float GetFrequency ();

		vector<double>GetFunction ();

		void Vm();

		void SumDif(vector<double>, vector<double>);

		vector<double> CorrA(vector<double>);//23/5

		vector<double> CorrX(vector<double>, vector<double>);//23/5

		float GetMax(vector<double>);

		float GetMin(vector<double>);

		void Filt2(vector<double>);

		void Filt5(vector<double>);


};

#endif // SIGNAL_H_
