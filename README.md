## Some exercises from the "Everything you need to know to start coding your own shell" page

## Exercises
0. getppid: Create a C program that prints the PID of the parent process
1. /proc/sys/kernel/pid_max: Create a shell script to print the maximum value a process ID can be
2. av: Write a program that prints all the arguments, without using ac
3. getline: Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
	- 3.1. Write your own version of getline
4. strtok: Write a function that splits a string and returns an array of each word of the string.
	- 4.1. Write the function without strtok
5. fork + wait + execve: Write a program that executes the command ``ls -l /tmp`` in 5 different child processes.
6. super simple shell: Write a first version of a super simple shell that can run commands with their full path, without any argument.
7. 

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
- Exercise 4 and 4.1
	-  gcc -Wall -Werror -pedantic split_str.c notoken_split.c test_splitstr.c -o split
	- ./split
- Execrise 5
	- gcc -Wall -Werror -pedantic exec_ls.c -o ls
	- ./ls
- Exercise 6
	- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 pid.c exec_ls.c shell.c readline.c _getline.c -o shell
	- ./shell
- Exercise 7
	- 
