#include <iostream>
#include "src/my_functions.hpp"

using namespace std;

int main (int argc, char const* argv[])
{
    // test for sumNatModBy3Or5
    int startingLimit = 3, endingLimit = 100;
    int testResult = sumNatModBy3Or5(startingLimit, endingLimit);
    int testResultExpected = 2418;
    
    cout << "sumNatModBy3Or5: ";
    
    if (testResult == testResultExpected)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
    
    
    // test for numberIs
    int testArrayForNumberIs[] = {-5, 0, 6};
    int testArrayExpectedForNumberIs[] = {-1, 0, 1};
    
    for (int i = 0; i < 3; i++)
    {
        cout << "numberIs for " << testArrayForNumberIs[i] << ": ";
        
        if (numberIs(testArrayForNumberIs[i]) == testArrayExpectedForNumberIs[i])
        {
            cout << "passed";
        }
        else
        {
            cout << "failed";
        }
        
        cout << endl;
    }
    
    cout << endl;
    
    
    // test for sumOfArray
    int testArrayForSumOfArray[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };
    
    int testValueOfSumOfArray = sumOfArray(10,
        testArrayForSumOfArray);
    int testValueExpectedForsumOfArray = 35;
    
    cout << "sumOfArray: ";
    
    if (testValueOfSumOfArray == testValueExpectedForsumOfArray)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
        
    
    // test for dummyParity
    int testArrayForDummyParity[20] = {
        21, 1, 9, 14, 4,
        65, 43, 99, 41, 0,
        56, 61, 23, 10, 11,
        27, 4, 1002, 30, 245
    };
    
    int testValueForDummyParity = dummyParity(testArrayForDummyParity);
    int testValueExpectedForDummyParity = 12;
    
    cout << "dummyParity: ";
    
    if (testValueForDummyParity == testValueExpectedForDummyParity)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
    
    
    // test for indexOfGreatestNumber
    int testArrayForIndexOfGreatestNumber[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };
    
    int testValueOfIndexOfGreatestNumber = indexOfGreatestNumber(10,
         testArrayForIndexOfGreatestNumber);
    
    int testValueExpectedForindexOfGreatestNumber = 7;
    
    cout << "indexOfGreatestNumber: ";
    
    if (testValueOfIndexOfGreatestNumber == testValueExpectedForindexOfGreatestNumber)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
        
    
    // test for greatestNumber
    int testArrayForGreatestNumber[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };
    
    int testValueOfGreatestNumber = greatestNumber(10,
        testArrayForGreatestNumber);
    
    int testValueExpectedForGreatestNumber = 99;
    
    cout << "greatestNumber: ";
    
    if (testValueOfGreatestNumber == testValueExpectedForGreatestNumber)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
    
    // leap year
    int testValueForIsLeapYear = 3004;
    
    cout << "isLeapYear: ";
    
    if (isLeapYear(testValueForIsLeapYear))
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
    
    cout << endl
        << endl;
    
    return 0;
}

