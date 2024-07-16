#include "abracadabra.h"

/*
./toralize 2.3.2.3 80
*/
int main(int argc, char *argv[]) {
    char *host;
    int port;

    int (argc < 3) {
        fprintf(stderr, "Usage: %s <host> <port>\n", argv[0]);
        return -1;
    }
    host = argv[1];
    port = atoi(argv[2]);

    return 0;
}