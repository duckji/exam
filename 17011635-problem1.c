#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
	pid_t pid;
	pid = fork();

	if(pid < 0)
		perror("error in fork()\n");

	else if(pid==0) {
		printf("Child PID is %d, Parent PID is %d.\n", getpid(),getppid());
	}
	else if(pid > 0){
		sleep(2);
		printf("Parent PID is %d.\n", getpid());
	}
}
