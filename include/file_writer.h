#ifndef __FIEL_WRITTER_API
#define __FILE_WRITTER_API


#include <stdio.h>
//opens the log file for writting
FILE * open_log_file(char *path);

//we will use this function to write contents to the log file
void write_log_to_file(FILE * file,unsigned long long free_memory);

//close this log file
void close_log_file(FILE * file);

#endif

