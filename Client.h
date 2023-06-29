#include "Person.h"

class Client : public Person
{   
    double balance;
    public:
    //Constructors
    Client () : Person ()
    {
        id++;
        Person::id--;
        balance =0;
    }
    Client (string name, string password, double balance) : Person (name,password)
    {
        id++;
        Person::id--;
        setName(name);
        setPassword(password);
        setBalance(balance);
    }

    //Setters

    void setPassword (string password)
    {
        Validation :: checkClientPassword(password);
        this -> password = password;
    }

    void setBalance (double balance)
    {
        Validation :: checkClientBalance (balance);
        this -> balance = balance;
    }
    //Getters

    string getPassword ()
    {
        return password;
    }

    double getBalance ()
    {
        return balance;
    }

    //Printinfo
    void printInfo ()
    {
        cout << "Client Name: " << name << endl;
        cout << "Client Pin_Code: " << password << endl;
        cout << "Client ID: " << id <<endl;
        cout << "Client Balance: " << balance <<endl;
    }
    //Destructor
    ~Client ()
    {
    }

//===========================================================================

    class ClientPasswordError
    {
        public:
        void clientPassword ()
        {
            cout << "Password must be 4 digits" <<endl;
        }
    };
    class ClientBalanceError
    {
        public:
        void clientBalance ()
        {
            cout << "Minimum Balance must be 1500 Pounds" <<endl;
        }
    };
};