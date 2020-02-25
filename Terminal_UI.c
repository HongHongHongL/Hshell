#include "Hshell.h"

void UI_init()
{
    UI_info = malloc(sizeof(struct UI_Info));
    extern struct passwd *pwd;
    pwd = getpwuid(getuid());
    strcpy(UI_info->UserName, pwd->pw_name);
    char* hostName = malloc(sizeof(char) * 256);
    if (gethostname(hostName, 256))
        hostName = "unknown";
    strcpy(UI_info->HostName, hostName);
    char* pathName = malloc(sizeof(char) * 1024);
    getcwd(pathName, 1024);
    strcpy(UI_info->PathName, pathName);
    UI_info->isRoot = 1 - geteuid();
}
