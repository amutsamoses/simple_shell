0x16. C- Simple Shell

Shell Scripting Terminologies

Kernel
Shell
Terminal

What is Kernel?
The kernel is a computer program that is the core of a computer’s operating system, with complete control over everything in the system. It manages the following resources of the Linux system –

File management
Process management
I/O management
Memory management
Device management 

What is Shell?
A shell is a special user program that provides an interface for the user to use operating system services. Shell accepts human-readable commands from users and converts them into something which the kernel can understand. It is a command language interpreter that executes commands read from input devices such as keyboards or from files. The shell gets started when the user logs in or starts the terminal.

Shell is broadly classified into two categories –

Command Line Shell
Graphical shell

Command Line Shell
Shell can be accessed by users using a command line interface. A special program called Terminal in Linux/macOS, or Command Prompt in Windows OS is provided to type in the human-readable commands such as “cat”, “ls” etc. and then it is being executed. The result is then displayed on the terminal to the user.
Working with a command line shell is a bit difficult for beginners because it’s hard to memorize so many commands. It is very powerful; it allows users to store commands in a file and execute them together. This way any repetitive task can be easily automated. These files are usually called batch files in Windows and Shell Scripts in Linux/macOS systems.

Graphical Shells
Graphical shells provide means for manipulating programs based on the graphical user interface (GUI), by allowing for operations such as opening, closing, moving, and resizing windows, as well as switching focus between windows. Window OS or Ubuntu OS can be considered as a good example which provides GUI to the user for interacting with the program. Users do not need to type in commands for every action

There are several shells are available for Linux systems like –

BASH (Bourne Again SHell) – It is the most widely used shell in Linux systems. It is used as default login shell in Linux systems and in macOS. It can also be installed on Windows OS.
CSH (C SHell) – The C shell’s syntax and its usage are very similar to the C programming language.
KSH (Korn SHell) – The Korn Shell was also the base for the POSIX Shell standard specifications etc.
Each shell does the same job but understands different commands and provides different built-in functions.

What is a terminal?
A program which is responsible for providing an interface to a user so that he/she can access the shell. It basically allows users to enter commands and see the output of those commands in a text-based interface. Large scripts that are written to automate and perform complex tasks are executed in the terminal.

Shell Scripting
Usually, shells are interactive, which means they accept commands as input from users and execute them. However, sometimes we want to execute a bunch of commands routinely, so we have to type in all commands each time in the terminal.

As a shell can also take commands as input from file, we can write these commands in a file and can execute them in shell to avoid this repetitive work. These files are called Shell Scripts or Shell Programs. Shell scripts are similar to the batch file in MS-DOS. Each shell script is saved with `.sh` file extension e.g., myscript.sh.

A shell script has syntax just like any other programming language. If you have any prior experience with any programming language like Python, C/C++ etc. It would be very easy to get started with it.

A shell script comprises the following elements –

Shell Keywords – if, else, break etc.
Shell commands – cd, ls, echo, pwd, touch etc.
Functions
Control flow – if..then..else, case and shell loops etc.
Why do we need shell scripts?
There are many reasons to write shell scripts:

To avoid repetitive work and automation
System admins use shell scripting for routine backups.
System monitoring
Adding new functionality to the shell etc.
Some Advantages of shell scripts
The command and syntax are exactly the same as those directly entered in the command line, so programmers do not need to switch to entirely different syntax
Writing shell scripts are much quicker
Quick start
Interactive debugging etc.
Some Disadvantages of shell scripts
Prone to costly errors, a single mistake can change the command which might be harmful.
Slow execution speed
Design flaws within the language syntax or implementation
Not well suited for large and complex task
Provide minimal data structure unlike other scripting languages
