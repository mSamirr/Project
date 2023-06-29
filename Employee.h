#include "Person.h"

class Employee : public Person
{
    double salary;
    public:
    
    //Constructors
    Employee () : Person ()
    {
        id++;
        Person::id--;
        salary = 0;
    }
    Employee (string name, string password, double salary) : Person (name,password)
    {
        setName(name);
        setPassword(password);
        setSalary (salary);
    }

    //Setters

    void setPassword (string password)
    {
        Validation::checkEmployeePassword(password);
        this -> password = password;
    }

    void setSalary (double salary)
    {
        Validation:: checkEmployeeSalary(salary);
        this -> salary = salary;
    }

    //Getters

    double getSalary ()
    {
        return salary;
    }
    //PrintInfo
    void printInfo ()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Password: " << password << endl;
        cout << "Employee ID: " << id <<endl;
        cout << "Employee Salary: " << salary <<endl;
    }


//==========================================================================
//Employee Error Handling Classes


    class EmployeePasswordLengthError
    {
        public:
        void employeePasswordLength()
        {
            cout << "Employee password must be between 8 and 20 characters" <<endl;
        }
    };

    class EmployeePasswordWhiteSpaceError
    {
        public:
        void employeePasswordWhiteSpace()
        {
            cout << "Employee password cannot contain white spaces" <<endl;
        }
    };

    class EmployeeSalaryError 
    {
        public:
        void employeeSalary ()
        {
            cout << "Employee's salary must be at least 5000 pounds" <<endl;
        }
    };
};
