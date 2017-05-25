#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>
#include <unistd.h>



#define NOMEFILE "SBoard.lp"
#define TAGLIA 14

int main(int argc, char ** argv){

char* n = argv[1];
char* m = argv[2];
char* p = argv[3];

char*c = malloc(sizeof(char*));
char*c2 = malloc(sizeof(char*));

int rows, cols;
double prob;

rows = atoi(n);
cols = atoi(m);
prob = atof(p);


int ris = remove(NOMEFILE);
if (ris == -1) {}

int fd = open(NOMEFILE, O_CREAT| O_RDWR | O_APPEND, 0666);
if (fd == -1) { printf("Errore nella creazione/apertura del file\n");}

int i,j;

srand ( time(NULL) );

for(i=1; i<=rows;i++){
	for(j=1; j<=cols; j++){
		if((rand()%10) < (prob*10)){
			sprintf(c, "%d", i);
			sprintf(c2, "%d", j);
			
			//printf("land(");
			//printf("%s",c);
			//printf(",");
			//printf("%s",c2);
			//printf(")");
			//printf(".\n");
			
			int result;
						
			result = write(fd,"land(", 5);
			result = write(fd, c, strlen(c));
			result = write(fd, ", ",2);
			result = write(fd, c2,strlen(c2));
			result = write(fd, ").\n",3);
			if (result == -1){ printf("Errore scrittura su file\n");}
		}
	}

}


return 0;
}