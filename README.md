<div align="center">
  <br>
<h1>Some PID and PPID Programs & scripts 🌱</h1>
</div

* program that prints the PID of the parent process
* shell script that prints the maximum value a process ID can be.
*program that prints all the arguments, without using ac Some programs & scripts in C
* program that prints "$ ", wait for the user to enter a command, prints it on the next line.
*  function that splits a string and returns an array of each word of the string
* Write the function without strtok
* program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
* program that looks for files in the current PATH.
# Exercises
0. printenv with environ
Write a program that prints the environment using the global variable environ.

1. env vs environ
Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?

2. getenv()
Write a function that gets an environment variable. (without using getenv)

Prototype: char *_getenv(const char *name);
man 3 getenv

3. PATH
Write a function that prints each directory contained in the the environment variable PATH, one directory per line.

4. PATH
Write a function that builds a linked list of the PATH directories.

5. setenv
Write a function that changes or adds an environment variable (without using setenv).

Prototype: int _setenv(const char *name, const char *value, int overwrite);
man 3 setenv

6. unsetenv
Write a function that deletes the variable name from the environment (without using unsetenv).

Prototype: int _unsetenv(const char *name);
man 3 unsetenv
