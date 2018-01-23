//
// Created by ski on 23/01/18.
//

#ifndef C_ESSIONPROJECTC_STORAGE_H
#define C_ESSIONPROJECTC_STORAGE_H

#define DEFAULT_FOLDER "./data/"
/**
 * Create or update an existing table
 * @param path file concerned
 * @param data data to save in the file
 * @return EXIT_SUCCESS if the operation succeed, else return EXIT_FAILURE
 */
int writeFile(char *path, char *data);

/**
 *
 * @param path
 * @return 100 if isCyclic, 101 else. Return EXIT_FAILURE if an error happened
 */
int isCyclic(char *path);
/**
 *
 * @param path file concerned
 * @param n the n iteration wanted, if -1 return all, if n is not a number, return the first line
 * @return
 */
char *readFile(char *path, int n);

#endif //C_ESSIONPROJECTC_STORAGE_H
