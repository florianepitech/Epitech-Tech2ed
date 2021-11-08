/*
** EPITECH PROJECT, 2021
** print_user_owner.c
** File description:
** print_user_owner
*/

#include <sys/stat.h>

#include <pwd.h>
#include <grp.h>

#include "../include/print_file_info.h"
#include "../include/my.h"

void print_user_owner(struct stat *s)
{
    struct group *grp;
    struct passwd *pwd;

    grp = getgrgid(s->st_gid);
    pwd = getpwuid(s->st_gid);
    my_putstr(grp->gr_name);
    my_putstr(" ");
    my_putstr(pwd->pw_name);
}