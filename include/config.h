#include <stdlib.h>
#include <stdio.h>

#pragma once
#define RED(string)     "\x1b[31m" string "\x1b[0m"
#define GREEN(string)   "\x1b[32m" string "\x1b[0m"
#define YELLOW(string)  "\x1b[33m" string "\x1b[0m"
#define BLUE(string)    "\x1b[34m" string "\x1b[0m"
#define MAGENTA(string) "\x1b[35m" string "\x1b[0m"
#define CYAN(string)    "\x1b[36m" string "\x1b[0m"

#define exit_on_error(msg) ({fprintf(stderr,"[" RED("-") "] %s\n",msg); exit(EXIT_FAILURE);}) 
#define print_success(msg) ({fprintf(stdout,"[" GREEN("+") "] %s\n",msg);}) 
#define print_info(msg) ({fprintf(stdout,"[" CYAN("!") "] %s\n",msg);}) 

#define PKEXEC "/usr/bin/pkexec"
#define SHELL "/bin/sh"
#define DIR ".sus"
#define SHARED_OBJECT "exploit"
#define AUTHOR "whokilleddb"
