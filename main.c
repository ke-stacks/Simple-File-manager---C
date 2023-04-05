#include <stdio.h>
#include <dirent.h>

int main() {
    char path[100];
    DIR *directory;
    struct dirent *file;

    printf("Enter directory path: ");
    scanf("%s", path);

    directory = opendir(path);

    if (directory == NULL) {
        printf("Error: Unable to open directory.\n");
        return 1;
    }

    printf("Contents of directory: \n");

    while ((file = readdir(directory)) != NULL) {
        printf("%s\n", file->d_name);
    }

    closedir(directory);

    return 0;
}
