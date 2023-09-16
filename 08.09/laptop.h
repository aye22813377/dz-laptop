#pragma once 
#include"Cpu.h"
#include"SSD.h"
#include"Gpu.h"
#include"Ram.h"    
class Car
{
    char* model;
    int year;   
    Engine eng;
    SSD sd;
    RAM rm;
    Gpu gp;
public:  

    Car();
    Car(const char* m, int y, const char * engName,int pr,const char * gpuname, int pri,const char * rmname, int prr, const char* sdname,int prs);
    Car(const Car& obj); // copy constructor
   
    void Print();
    ~Car();

};

