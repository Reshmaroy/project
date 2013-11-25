/*
 * main.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: Anna Roy
 */



#include<iostream.h>
#include "bloodtest.hpp"
using namespace std;
int main ()

{
	bloodcount BC;
	BC.b_test();
	BC.annotation();
	BC.test();
	bloodglucose BG;
	BG.plasmaglucose();
	lipoprotein LP;
	LP.totalcholesterol();
	LP.LDLcholesterol();
	LP.HDLcholesterol();
	return 0;
}


