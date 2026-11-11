#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main (void){
    int server = socket(AF_INET, SOCK_STREAM, 0);
    if (server < 0) {
	perror("socket");
	exit(1);
    }
    return 0;
}
