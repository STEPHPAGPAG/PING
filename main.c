#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <errno.h>

// Type ICMP
#define ICMP_ECHO_REQUEST   8
#define ICMP_ECHO_REPLY     0

// Code de sortie
#define EXIT_SUCCESS        0
#define EXIT_FAILURE        1
#define EXIT_NO_PERMISSIONS 2

int main(int argc, char *argv[]){

    int verbose = 0;
    char    *destination = NULL;
    int opt;

    while ((opt = getopt(argc, argv, "v?")) != -1){
        switch (opt){
            case 'v':
                verbose = 1;
                if(verbose)
                printf("mode verbose active\n");        
                break;
            case '?':
                if(optopt == '?'){
                    print_help(argv[0]);
                    return EXIT_SUCCESS;
                }else{
                    print_usage(argv[0]);
                    return EXIT_FAILURE;
                }
                break;
            default:
                print_usage(argv[0]);
                return EXIT_FAILURE;
                break;
            }
        }
}

/*    int sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);


    if (sockfd < 0){
        if (errno == EPERM){ //test droit root
            fprintf(stderr, "Erreur : Privileges root ->need socket raw\n");
            fprintf(stderr, "sudo %s\n", "ft_ping");
            return EXIT_NO_PERMISSIONS;
        }
        else{ //test erreur general
            perror("Erreur : A la creation du socket");
            return EXIT_FAILURE;
        }
    }
    printf("Success : Socket raw (fd=%d) \n", sockfd);
    close(sockfd);
    return EXIT_SUCCESS;*/
    