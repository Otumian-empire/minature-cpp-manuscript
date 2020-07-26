# Cpp Note On Functions And How To Use Header And Source Files

## Data Types
int, float, double, char, string, void

## Function
A function is a piece of code that performs a specific function

## How to create a function
``` cpp
<return type> <function name>(<parameter list>) {
    <function body>
}
```

## Parts
- `<return type>` is a data type.
- `<function name>` is the name of a function. Make sure that the name
 of the function starts with a letter or an underscore, followed by
 either a letter, an underscore or a number. So a function can not
 have a any special character in it, such as `+, -, /` etc. Functions
 must not have spaces in their name. In place of the space use underscore.
 
    ### Some examples of function names:
    - age
    - name1
    - player_1
    
- `<parameter list>` is a made up of the parameters you want to pass to the function
 a parameter is something the data you want the function to compute upon
 If there is no need of a data to compute on then, the `<parameter list>` can be empty
`<parameter list>` is just like a command separated list of declared variables, as in
 `int min`, `int max`, `...` where `int` is the data type and, `min` and `max` are the parameter 
 (variable) name 
 
 
- `<function body>` is the actual code logic

- `{` and `}`, specifies the entry (starting) and exiting (ending) point of the function. It is also delimits function body.
 
 
## Calling a function
write the function name with the required parameter list


## A simple function that prints helloworld to the screen

According to how to create a function, a function must have a `<return type>`, `<function name>`, a `<parameter list>` if data would be passed to the function and finally and a `<function body>`. 


## Analysis
- Our function will not return but print data to the screen, so the `<return type>` would
 be `void`
- from the problem, it seems that we can call the function, helloworld, so the `<function name>` will be `helloworld`
- Our function will not compute on any data, so the `<parameter list>` will be empty
- Our function prints _"hello world"_, so the `<function body>` will print _"hello world"_



### In short:
``` cpp
<return type>: void
<function name>: helloworld
<parameter list>: none
<function body>: prints hello world to screen
```

## Creating the function and running the program

Create a file called, `helloworld.cpp`, in it, type the code below.

``` cpp
#include <iostream>

using namespace std;

// creating a helloworld function
void helloworld() {
    cout << "Hello world" << endl;
}


int main() {
    
    // calling helloworld
    helloworld();
        
    return 0;
}
```

### Note
To create a function, in the same file as the main function, either,
1. the function implementation (definition) will be above the main function
1. the function header (signature) will be above the main function and the function definition below the main function.
 
## For the case of the above code, we'd have,

Create a file called, _`helloworld_1.cpp`_, in it, type the code below.

``` cpp
#include <iostream>

using namespace std;

// helloworld header
void helloworld();

int main() {
    
    // calling helloworld
    helloworld();
        
    return 0;
}

// helloworld definition
void helloworld(); {
    cout << "Hello world" << endl;
}
```

## A simple function that returns the sum of two numbers

**Analysis:**
- function name could be `sum_of_2_nums` or any name you want
- function returns a number, either a `float/double/int` but lets assume the return type to be `int`
- function computes on two data
- function returns the sum of the 2 data
    
**Code:**

create a file called, _`sum_of_2_nums.cpp`_, and write the code below into
- we will create the header which would look like this:
    `int sum_of_2_nums(int num1, int num2);`
- The function body makes use of the function header
    ``` cpp
    int sum_of_2_nums(int num1, int num2) {
        return num1 + num2;
    }
    ```

``` cpp
#include <iostream>

using namespace std;

// helloworld sum_of_2_nums
int sum_of_2_nums(int num1, int num2);

int main() {
    int sum_nums, a, b;
    a = 12;
    b = 24;
    
    // calling sum_of_2_nums and passing two numbers
    sum_nums = sum_of_2_nums(a, b);
    
    cout << "The sum of " << a << " and " << b << " is " << sum_nums << endl;
    // an alternative to the above line would be
    // cout << "The sum of " << a << " and " << b << " is " << sum_of_2_nums(a, b) << endl;
    // so that we won't have to create sum_nums variable
    
    return 0;
}

// helloworld sum_of_2_nums
int sum_of_2_nums(int num1, int num2) {
    return num1 + num2;
}
```


## Header and source files

Say we have a project where we will be creating a lot of funtions, it will be better
  we separate the functions from the main function.
  
We have seen an example where we had a function implementation before the in function,
we have seen where the function declaration came before the main function then later the 
function definition. The last of these is where we separate the function declarations into
one file and the definitions into another file. Reference/include the path to the header
file into the in the main function file and work with it.

Consider an example where we create a function to perform basic arithmetics such as 
addition, subtraction, multiplcation, and division

As I am aware, you know what addition, subtraction, multiplcation and division is so no need
to talk much about it. But One thing i believe is that, we need to know that addition, subtraction
, multiplcation and division are binary operators as such they take on two arguments (data).

These are the function definitions for the functions we want to create
- `int add_a(int x, int y)` for addition
- `int subt_a(int x, int y)` for subtraction
- `int mult_a(int x, int y)` for multiplcation
- `int div_a(int x, int y)` for division

In this example, we shall create three file, _`main.cpp`_, _`arithmetic.hpp`_ and _`arithmetic.cpp`_.
- _`main.cpp`_ with be the drive file that will have the main function
- _`arithmetic.hpp`_ will have the headers (the function signatures/declarations)
- _`arithmetic.cpp`_ will have the function implementations/definitions

There is something special about header files and I wish you really just try to understand
with thinking much. The header file acts as an interface.

### The concept of an interface
> In English, the word interface means a common boundary between two distinct entities. The surface of a pond, for example, is the interface between the water and the air.

> In programming, an interface constitutes a conceptual boundary rather than a physical one: an interface is the boundary between the implementation of a library and programs that use that library.

> Information passes across that boundary whenever functions in that library are called. The interface mediates and gives structure to the exchange of information between the library and its users. 

> Conceptually, a programming interface also represents a shared understanding about the nature of that boundary, providing both creators and users of a library with the critical information they need to know.

___`from the Art and Science of C by Eric S. Roberts`___

### This is how we would have normally created our functions
 
create a file called, _`temp.cpp`_ and write the code below into it.

``` cpp
#include <iostream>

using namespace std;

// function declarations
int add_a(int x, int y);
int subt_a(int x, int y);
int mult_a(int x, int y);
int div_a(int x, int y);

int main ()
{
    int num1, num2;
    
    num1 = 10;
    num2 = -4;
    
    // adding num1 and num2
    cout << "The sum of " << num1 << " and " << num2 << " is " << add_a(num1, num2) << endl;
    
    // subtraction num2 from num1
    cout << num1 << " minus " << num2 << " is " << subt_a(num1, num2) << endl;

    // multiplying num1 and num2
    cout << "The product of " << num1 << " and " << num2 << " is " << mult_a(num1, num2) << endl; 
    
    // dividing num1 by num2
    cout << num1 << " divided by " << num2 << " is " << div_a(num1, num2) << endl;
    
    return 0;
}


// function definitions

/* returns the sum of 2 numbers, x and y */
int add_a(int x, int y) {
    return x + y;
}

/* returns x - y*/
int subt_a(int x, int y) {
    return x - y;
}

/* returns the product of x and y */
int mult_a(int x, int y) {
    return x * y;
}

/* returns x divided by y */
int div_a(int x, int y) {
    // the denominator, y, must no be zero
    // if y is zero, return 0, else return x / y
    if (y == 0) {
        return 0;
    } else {
        return x / y;
    }
}
```

## Note
the `div_a` funtion, does not return the full value when one number is divided by the other. Try developing a better version of it where by the data types a `float/double`.

## Using header and source files.

In the header file, you have to make sure that this particual header (interface) exist.
to do that, in the header file, add the following:

``` h
#ifndef NAME_OF_HEADER_FILE_HPP
#define NAME_OF_HEADER_FILE_HPP

#endif
```

### Parts

- `NAME_OF_HEADER_FILE_HPP`, is made up of the name of the header file and the extension, all in
**uppercase**. Consider this:

    >if file name is, hello_world.hpp, then it will be `HELLO_WORLD_HPP`

    > if file name is, helloworld.hpp,  then it will be HELLOWORLD_HPP

    **`I hope you got the idea.`**

- Now what does all that means?
`#ifndef NAME_OF_HEADER_FILE_HPP`, says if the header file with the name, name_of_header.hpp is not defined
### define `NAME_OF_HEADER_FILE_HPP`, says define the header file with the name, _`name_of_header.hpp`_

    `#endif`, says end the if statement

    you can look at this as:
    ``` cpp
    if (header file is not defined) {
        define header file
    } 
    ```

- This will prevent the multiple inclusion of headers.

    Between the #define and #endif, we put the function declarations

### In, _`arithmetic.hpp`_, we would write,
``` h
#ifndef ARITHMETIC_HPP
#define ARITHMETIC_HPP

int add_a(int x, int y);
int subt_a(int x, int y);
int mult_a(int x, int y);
int div_a(int x, int y);

#endif
```

    > All that we did was rewrite the function declarations into arithmetic.hpp

### Now in arithmetic.cpp, we would write,

``` cpp
#include "arithmetic.hpp"

/* returns the sum of 2 numbers, x and y */
int add_a(int x, int y) {
    return x + y;
}

/* returns x - y*/
int subt_a(int x, int y) {
    return x - y;
}

/* returns the product of x and y */
int mult_a(int x, int y) {
    return x * y;
}

/* returns x divided by y */
int div_a(int x, int y) {
    // the denominator, y, must no be zero
    // if y is zero, return 0, else return x / y
    
    if (y == 0) {
        return 0;
    } else {
        return x / y;
    }
}
```

    > All we did was included the header file, arithmetic.hpp and wrote the function definitions into arithmetic.cpp. 

Now, what will actually make the difference. Add the path to the interface/header file

Now just like we included, the header file (interface) into the source file, we shall do the same in the _`main.cpp`_ file and make use of the functions.
 
### In main.cpp, write the following,

``` cpp
#include <iostream>
#include "arithmetic.hpp"

using namespace std;

int main ()
{
    int num1, num2;
    
    num1 = 10;
    num2 = -4;
    
    // adding num1 and num2
    cout << "The sum of " << num1 << " and " << num2 << " is " << add_a(num1, num2) << endl;
    
    // subtraction num2 from num1
    cout << num1 << " minus " << num2 << " is " << subt_a(num1, num2) << endl;

    // multiplying num1 and num2
    cout << "The product of " << num1 << " and " << num2 << " is " << mult_a(num1, num2) << endl; 
    
    // dividing num1 by num2
    cout << num1 << " divided by " << num2 << " is " << div_a(num1, num2) << endl;
    
    return 0;
}
``` 

## To compile
To compile, all that you do is compile the _`main.cpp`_ and he source file, _`arithmetic.cpp`_, as in,

`c++ main.cpp arithmetic.cpp` and thats all.


# The end

 





