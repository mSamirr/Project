#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;

class Person
{   protected:
    string name;
    string password;
    static int id;
    public:
    //Constructors
    Person ()
    {
    }
    Person (string name, string password)
    {
        setName(name);
        setPassword(password);
    }

    //Setters:
    void setName (string name)
    {
        Validation::checkName(name);
        this -> name = name;
    }

    virtual void setPassword (string password) =0;

    //Getters:
    string getName ()
    {
        return name;
    }

    string getPassword ()
    {
        return password;
    }

    int getID ()
    {
        return id;
    }

    //Destructor
    ~Person ()
    {
    }

    class PersonNameLengthError
    {
        public:
        void personNameLength ()
        {
            cout << "Name length should be between 5-20 characters" <<endl;
        }
    };
    class PersonNameContainsSymbolError
    {
        public:
        void personNameContainsSymbols ()
        {
            cout << "Name cannot contain any symbols or numbers" <<endl;
            cout << "Name should only have alphabetic characters" <<endl;
        }
    };
};