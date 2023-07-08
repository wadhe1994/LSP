#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
  
  int fd =0;
  //int Mode =0;
  
  printf("Usage : Name_Of_Executable Name_Of_File\n");
  if(argc != 2)
  {
    printf("\nInvalid number of arguments\n");
    return -1;
  }

  fd = creat(argv[1], 0777);
  if(fd == -1)
  {
    printf("Unable to create file\n");
    return -1;
  }
  else
  {
    printf("Successfully create fd %d\n",fd);
  }
  
  return 0;
}
