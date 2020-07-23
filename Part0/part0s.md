# Part 0 (Set up)

## Objective
- overview
- c++ command line interface basics
- c++ environment setup (compiler and text editor)
- c++ hello world program (how to compile and run code)

## Goal
- Know what, programming, source code, text editor, compiler, c++ is
- get comfortable on the terminal, capable of CRUDing folders and files
- download, install and set up a c++ compiler
- compile and execute the first program in c++


## Overview
This is a book that introduces programming concepts, using c++.
There are projects after every Part.
Read more on what c++ is from [cpp, wikipedia][wiki-cpp].


## C++ Command Line Interface Basics
We will make use of the command more often, thus better to make acquaintance.

``` sh
pwd, current working directory
ls, list the content of the pwd
ls -a, including hidden files
mkdir dir_name(s), create/make directories where the dir_name(s) is (are) the name(s) of the directory(ies)
cd dir_name, change into another directory that is in the pwd
cd path_to_dir, change in another that may not necessarily be in the pwd
cd .., moves up the directory (to the parent directory of the pwd)
ls path_to_dir, list the content of the directory at path_to_dir
ls -a path_to_dir, list the content of the directory at path_to_dir, including hidden files
clear, clears the screen of the terminal
mv dir1 dir2, renames a directory called dir1 to dir2 in the pwd
mv dir dir_path/, moves a directory called dir1 to another path but does not rename it
cp -r dir another_dir_name, copies the content of dir into another_dir_name
cp -r dir dir_path/, duplicate dir into another path
rmdir dir(s), removes empty dir(s)
rm -r dir(s), remoevs dirs and their contents
```

``` sh
touch file(s), creates files
editor_name file, opens file in editor
cat > file, create a file and overwrites is content. opens the file for writing
cat >> file, opens file for writing but appending
echo data > file, just like cat, write data in file
echo data >> file, appends data to file
cp file1 file2, duplicates file1 as file2
cp file another_path, duplicates file to path, name remains the same
mv file1 file2, renames file1 to file2
mv file dir_path/, moves file from pwd to path
rm file(s), removes files(s)
```


## C++ Environment Setup (Compiler And Text Editor)

Download Gnu c++ compiler (add to env path) and vscode or any other text editor

C++ Hello World Program (How To Compile And Run Code)
In the current pwd, mkdir helloworldproject
``` sh
cd helloworldproject
touch helloworld.cpp
editor helloworld.cpp
```

or (open helloworld.cpp) and add the snippet below

``` cpp
// helloworld.cpp - project
#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!!" << endl;
    return 0;
}
```

save the file.
on the terminal compile helloworld.cpp,
`c++ helloworld.cpp `
`./a.out`


#
[wiki-cpp]:https://en.wikipedia.org/wiki/C%2B%2B
[unix-workbench]:https://seankross.com/the-unix-workbench/
[mingw-web]:https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/
[vscode-web]:https://code.visualstudio.com/download
[atom-web]:https://atom.io/
[sublim-web]:https://www.sublimetext.com/3
[bracket-web]:http://brackets.io/
[path-web]:https://docs.microsoft.com/en-us/previous-versions/office/developer/sharepoint-2010/ee537574(v=office.14)?redirectedfrom=MSDN
[xcode-web]:https://developer.apple.com/download/

The end.
