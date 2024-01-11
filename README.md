## Some exercises from the "Everything you need to know to start coding your own shell" page

## Exercises
0. getppid: Create a C program that prints the PID of the parent process
1. /proc/sys/kernel/pid_max: Create a shell script to print the maximum value a process ID can be
2. av: Write a program that prints all the arguments, without using ac
3. getline: Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
	- 3.1. Write your own version of getline
4. 

## Compilation
- Exercise 0
	- gcc -Wall -Werror -pedantic pid.c -o ppid
	- ./ppid
- Exercise 1
	- ./max_pid
- Exercise 2
	- gcc -Wall -werror -pedantic printargs.c -o args
	- ./args [any argument], e.g ./args hi hello welcome
- Exercise 3
	- gcc -Wall -Werror -pedantic readline.c -o ./read
	- ./read
- Exercise 3.1
	- gcc -Wall -Werror -pedantic readline.c _getline.c -o ./read
	- ./read
- 
