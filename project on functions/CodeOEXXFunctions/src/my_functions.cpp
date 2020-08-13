#include "my_functions.hpp"

int sumNatModBy3Or5(int startingLimit, int endingLimit)
{
    int s = 0;
    
    for (int i = startingLimit; i < endingLimit + 1; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            s += i;
        }
    }
    
    return s;
}

int numberIs(int number)
{
    int r = 0;
    
    if (number > 0)
    {
        r = 1;
    }
    else if (number < 0)
    {
        r = -1;
    }
    
    return r;
}

int sumOfArray(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        s += intArray[i];
    }
    
    return s;
}

int dummyParity(int dummyArray[20])
{
    int r = dummyArray[0] % 2;
    int s = 1;
    
    for (int i = 1; i < 20; i++)
    {
        if (dummyArray[i] % 2 == r)
        {
            s += 1;
        }
    }
    
    return s; 
}


int indexOfGreatestNumber(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (intArray[i] > intArray[s])
        {
            s = i;
        }
    }
    
    return s;
}


int greatestNumber(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (intArray[i] > intArray[s])
        {
            s = i;
        }
    }
    
    return intArray[s];
}

int isLeapYear(int intYear)
{
    int isLeap = 0;
    
    if (intYear % 4 == 0)
    {
        if (intYear % 100 == 0)
        {
            if (intYear % 400 == 0)
            {
                isLeap = 1;
            }
        }
        
        isLeap = 1;
    }
    
    return isLeap;
}

