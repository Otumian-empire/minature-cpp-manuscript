#include <iostream>

using namespace std;


int *sum_arr(int arr_a[], int arr_b[], int s);
void print_r(int arr[], int s);
void print_r(char arr[], int s)


int main()
{
    int  a[] = {41, 52, 73, 14, 65};
    int  b[] = {11, 22, 33, 14, 45};
    char c[] = "Hello";
    
    cout << "The sum of the arrays, ";
    print_r(a, 5);
    cout << " and ";
    
    print_r(b, 5);
    cout << " is ";
    print_r(sum_arr(a, b, 5), 5);
    
    cout << endl << endl;
         
    cout << "the string, ";
    print_r(c, 5);
    cout << endl;
    
    return 0;
}


int *sum_arr(int arr_a[], int arr_b[], int s)
{   
    for (int i = 0; i < s; i++)
    {
        arr_a[i] = arr_a[i] + arr_b[i];
    }
    
    return arr_a;
}

void print_r(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i];
        
        if (i < (s - 1))
        {
            cout << ", ";
        }
    }
}

void print_r(char arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i];
        
        if (i < (s - 1))
        {
            cout << ", ";
        }
    }
}

