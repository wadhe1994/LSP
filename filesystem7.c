#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
  
  int fd =0;
  
  if(argc != 2)
  {
    printf("\nInvalid number of arguments\n");
    return -1;
  }
  fd = open(argv[1], O_RDONLY);
  if(fd == -1)
  {
    printf("Could not open file\n");
    return -1;
  }
  else
  {
    printf("Successfully open fd %d\n",fd);
  }
  
  return 0;
}
