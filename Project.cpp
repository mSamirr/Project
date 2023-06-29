/*
Bank System
Create Bank system app which contains 3 modules
1. Client Module
a. Each client contains: client name, id,pin code balance.
b. Client can login to the system using id and pin code
c. Client can deposit amount of money
d. Client can withdraw amount of money
e. Client can check his balance
f. Client can transfer money to another client
2. Employee Module
a. Each employee contains: Employee name, id ,password, salary
b. Employee can login to the system by id and password
c. Employee can add new Client
d. Employee can search for client by id
e. Employee can list all clients
f. Employee can edit info of client
g. Employee can display his info
3. Admin Module
a. Admin will be the same like Employee
b. Admin can add new Employee
c. Admin can search for Employee
d. Admin can edit Employee
e. Admin can list all employees

Phase1
Create the following class
1. Client class which contains the following
a. String name, string pin_code,int id and double balance
b. Setter functions
i. setName : the name must be alphabetic chars and min size 5 and
max size 20
ii. setPinCode: pinCode must be digits chars and the size = 4
iii. Min balance is 1500
c. Getter functions
d. Display function
2. Employee Class
a. String name, int id,String password,double salary
b. Setter functions

i. setName : the name must be alphabetic chars and min size 5 and
max size 20
ii. setPassword: password mustn’t contain white space and the size
between 8 and 20
iii. Min Salary 5000
c. Getter functions
d. Display function
*/

#include "Admin.h"
#include "Client.h"

//Global attributes & Functions:

int Person :: id = 0;

//=======================================================================

int main ()
{
    Client a;
    try
    {
       a=Client ("ahmed","1245",1500);
    }
    catch (Person ::PersonNameLengthError e)
    {
        e.personNameLength();
    }
    catch (Person:: PersonNameContainsSymbolError e)
    {
        e.personNameContainsSymbols();
    }
    catch (Client :: ClientPasswordError e)
    {
        e.clientPassword();
    }
    catch (Client::ClientBalanceError e)
    {
        e.clientBalance();
    }
    a.printInfo();
//======================================================================
    Employee b;
    try 
    {
        b= Employee ("Mohammed", "P@ssw0rd", 5000);
    }
    catch (Person :: PersonNameLengthError e)
    {
        e.personNameLength();
    }
    catch (Person :: PersonNameContainsSymbolError e)
    {
        e.personNameContainsSymbols();
    }
    catch (Employee::EmployeePasswordLengthError e)
    {
        e.employeePasswordLength();
    }
    catch (Employee::EmployeePasswordWhiteSpaceError e)
    {
        e.employeePasswordWhiteSpace();
    }
    catch (Employee::EmployeeSalaryError e)
    {
        e.employeeSalary();
    }
    b.printInfo();
    return 0;
}