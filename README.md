Reverse Shell Example

This project demonstrates a simple implementation of a reverse shell in C++ for Windows and Linux operating systems.
The main goal is to showcase network usage and creating connections between a client and a server.

---------------------------------------------------------------------------------------------------------------------

Description
This code is a simple reverse shell that:

Prompts for an IP address and port to connect to.
Uses WinSock library for Windows systems.
Uses standard UNIX socket libraries for Linux.

---------------------------------------------------------------------------------------------------------------------

Prerequisites
Before using this code, you need:

Compilers:
Windows: Minimum compiler version is MSVC 2015 with C++14 support.
Linux: g++ compiler version 5.4 or higher.
Libraries:
Windows: ws2_32.lib for working with WinSock.
Linux: Standard libraries sys/socket.h, arpa/inet.h, unistd.h.

---------------------------------------------------------------------------------------------------------------------

Usage Instructions

On Windows:
~~~

Install g++ if it’s not already installed:
sudo apt update
sudo apt install g++

Navigate to the directory with your code:
cd /path/to/your/code

Compile the code:
g++ main.cpp -o out

Run the program:
./out

The program will prompt for the IP address and port. Enter the data and follow the instructions.

~~~
On Linux:
~~~

Ensure that g++ is installed:
sudo apt update
sudo apt install g++

Navigate to the directory with your code:
cd /path/to/your/code

Compile the code:
g++ main.cpp -o out

Run the program:
./out

~~~

The program will prompt for the IP address and port. Enter the data and follow the instructions.
```
Notes:
Security: Use this code only in educational or legal contexts. Unauthorized use can lead to serious consequences and legal violations.
Troubleshooting: If issues arise, make sure that your network and the specified IP address and port are correct, and ensure that the connection is not blocked by firewalls or antivirus software.
```
