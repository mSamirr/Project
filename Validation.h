#include "Person.h"
#include "Client.h"
#include "Admin.h"

class Validation
{
    public:
    static void checkName (string name)
    {
            if (name.length() < 5 || name.length() > 20)
        { 
            throw Person :: PersonNameLengthError();
        }
        int n=0;
        int namelength = name.length();
        for (int i=0; i<namelength; i++)
        {
            if ((int (name [i]) <65) || (int (name[i])>122) || ((int (name[i])>90) && (int (name[i])<97)))
            {
                n++;
            }
        }
        if (n!=0)
        {
            throw Person :: PersonNameContainsSymbolError();
        }
    }

    static void checkEmployeePassword (string password)
    {
        if (password.length() <8 || password.length() >20 )
        {
            throw Employee :: EmployeePasswordLengthError();
        }
        int numberOfWhiteSpaces=0;
        int passwordLength;
        passwordLength= password.length();
        for (int i=0; i< passwordLength ; i++)
        {
            if(int (password[i])== 32)
            {
                numberOfWhiteSpaces++;
            }
        }
        if (numberOfWhiteSpaces!=0)
        {
            throw Employee :: EmployeePasswordWhiteSpaceError();
        }
    }

    static void checkEmployeeSalary (double salary)
    {
        if (salary < 5000)
        {
            throw Employee :: EmployeeSalaryError();
        }
    }

    static void checkClientPassword (string password)
    {
        if (password.length() !=4)
        {
            throw Client :: ClientPasswordError();
        }
    }

    static void checkClientBalance (double balance)
    {
        if (balance <1500)
        {
            throw Client :: ClientBalanceError();
        }
    }
};
