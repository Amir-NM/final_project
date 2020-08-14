#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
//#include "libpq-fe.h"

int main() {

	struct dirent *dir;
	DIR *d = opendir("/tmp/final_project/");
	if(d) {
		while((dir = readdir(d)) != NULL) {
			if(!((strcmp(dir->d_name, ".") == 0) ||
			(strcmp(dir->d_name, "..") == 0))) {
				char filename[100] = "/tmp/final_project/";
				strcat(filename, dir->d_name);
				
			}
		}
	}
	closedir(d);

	return 0;
}
