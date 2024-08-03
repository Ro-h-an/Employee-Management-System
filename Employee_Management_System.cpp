#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<stdio.h>
const char* fileName="Employee.txt";
using namespace std;

class Employee{
    private:
    int EmpID;
    char EmpName[50],Post[50],Department[10];
    float Salary;
    public:
    void ReadData();
    int GetID();
    void DisplayRecord();
    char* GetDepartment();
};

void Employee::ReadData(){
    cout<<endl<<"Employee ID:";
    cin>>EmpID;
    cout<<"Employee Name:";
    cin>>EmpName;
    cout<<"Employee's Post:";
    cin>>Post;
    cout<<"Employee's Department:";
    cin>>Department;
    cout<<"Salary:";
    cin>>Salary;
}

void Employee::DisplayRecord(){
    cout<<endl<<"_______________________________";
    cout<<endl<<setw(5)<<EmpID<<setw(15)<<EmpName<<setw(15)<<Post<<setw(15)<<Department<<setw(8)<<Salary;
}

int Employee::GetID(){
    return EmpID;
}

char* Employee::GetDepartment(){
    return Department;
}