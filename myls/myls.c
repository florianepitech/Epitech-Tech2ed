/*
** EPITECH PROJECT, 2021
** myls.c
** File description:
** myls
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/options.h"
#include "include/myls.h"

//Parameters
/*
 *  -l : use a long listing format (OK !)
 *  -R : list subdirectories recursively
 *  -r : reverse order while sorting (OK !)
 *  -d : list directories themselves, not their contents
 *  -t : sort by time, newest first; see --time (OK !)
 *  -a : do not ignore entries starting with . (OPTIONAL BUT (OK !)
 *  -s : print the allocated size of each file, in blocks (OPTIONAL)
 */

int l_OPTION = 0;
int R_OPTION = 0;
int d_OPTION = 0;
int r_OPTION = 0;
int t_OPTION = 0;
int a_OPTION = 0;
int s_OPTION = 0;

int main(int argc, char **argv)
{
    check_option("-l", &l_OPTION, argc, argv);
    check_option("-R", &R_OPTION, argc, argv);
    check_option("-d", &d_OPTION, argc, argv);
    check_option("-r", &r_OPTION, argc, argv);
    check_option("-t", &t_OPTION, argc, argv);
    check_option("-a", &a_OPTION, argc, argv);
    check_option("-s", &s_OPTION, argc, argv);

    if (d_OPTION == 1)
        return my_ls_d();

    char **files = remove_options(argc, argv);
    my_array_str_sort(files);
    int files_len = my_array_str_len(files);

    if (files_len == 0) {
        free(files);
        return my_ls_all();
    } else {
        return my_ls_files(files, files_len);
    }
}