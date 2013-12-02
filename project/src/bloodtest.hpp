/*
 * bloodtest.hpp
 *
 *  Created on: Nov 20, 2013
 *      Author: Anna Roy
 */
//
#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_


#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

// The base class

class bloodtest {
    protected:
		string firstname, lastname;
		string gender,doctor_name;
        string bloodtype;
        string occupation;
     public:

    void b_test();
    void annotation();

};
// Derived class 1
class bloodcount : public bloodtest
{
private:
    float RBC;
    float WBC;
    float platelets;
    float hemoglobins;
     float hematocrit;
    float MCV;
public:
    bloodcount()
    {
    	RBC=0;
    	WBC=0;
    	platelets=0;
    	hemoglobins=0;
    	hematocrit=0;MCV=0;
    }
    void test();

};
// Derived class 2
class bloodglucose : public bloodtest
{
private:
    float pla_glucose;
public:
    bloodglucose()
{
    	pla_glucose=0;
}
    void plasmaglucose();
};
// Derived class 3
class lipoprotein : public bloodtest
 {
private:
    float total_chol;
    float LDL_chol;
    float HDL_chol;
public:

    void totalcholesterol();
    void LDLcholesterol();
    void HDLcholesterol();

};




#endif // BLOODTEST_HPP_
