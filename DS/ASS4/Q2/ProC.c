#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include <arpa/inet.h>
#include<netinet/in.h>
#include<netdb.h>
#include <unistd.h>
#define SERV_TCP_PORT 5035

int main(int argc,char*argv[]){
    int sockfd;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    char buffer[4096];

    //Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv_addr.sin_port = htons(SERV_TCP_PORT);

    //Connect to remote server
    printf("\nReady for sending...");
    connect(sockfd,(struct sockaddr*)&serv_addr, sizeof(serv_addr));
    printf("\nClient Information: ");
    //fgets(buffer, 4096, stdin);

    FILE *pp;
    pp = popen("./cpuLoad.sh", "r");
    if (pp != NULL) {
        while (1) {
            char *line;

            line = fgets(buffer, sizeof buffer, pp);
            if (line == NULL) break;
            printf("%s", line); /* line includes '\n' */
        }
        pclose(pp);
    }

    //send to server
    write(sockfd,buffer,4096);
    printf("Serverecho:%s",buffer);
    printf("\n");
    close(sockfd);
    return 0;
}