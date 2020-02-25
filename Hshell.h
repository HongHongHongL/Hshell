#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int loop_status = 1;
struct UI_Info
{
    char* UserName;
    char* HostName;
    char* PathName;
    int isRoot;
}*UI_info;

void init();
void main_loop();