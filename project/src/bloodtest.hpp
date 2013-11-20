/*
 * bloodtest.hpp
 *
 *  Created on: Nov 20, 2013
 *      Author: Anna Roy
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_


#include <iostream>

using namespace std;


class bloodtest {
    protected:
        string name;
        string doctor;
        string bloodtype;
     public:
    bloodtest();
    void display();
    void annotation();
};

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
};

class bloodglucose : public bloodtest
{
private:
    float plasmaglucose;
public:
    void plasmaglucose();
};

class lipoprotein : public bloodtest
 {
private:
    float totalcholesterol;
    float LDLcholesterol;
    float HDLcholesterol;
public:
    void totalcholesterol();
    void LDLcholesterol();
    void HDLcholesterol();

};



#endif /* BLOODTEST_H_ */





#endif /* BLOODTEST_HPP_ */
