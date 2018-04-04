#include "get_next_line.h"

int main(int ac, char **av)
{
  int fd;
  int fd2;
  char *line;
  char *line2;

  fd = 0;
  fd2 = 0;
  // printf("first\n");
  if (ac == 2)
    fd = open(av[1], O_RDONLY);
  if (ac == 3)
  {
    fd = open(av[1], O_RDONLY);
    fd2 = open(av[2], O_RDONLY);
  }
  // get_next_line(fd, &line);
  // printf(KGRN"-%s-\n", line);
  // get_next_line(fd2, &line2);
  // printf(KGRN"-%s-\n", line2);
  // get_next_line(fd, &line);
  // printf(KGRN"-%s-\n", line);
  // get_next_line(fd2, &line);
  // printf(KGRN"-%s-\n", line);
  // get_next_line(fd, &line);
  // printf(KGRN"-%s-\n", line);
  // get_next_line(fd2, &line2);
  // printf(KGRN"-%s-\n", line2);
  // get_next_line(fd, &line);
  // printf(KGRN"-%s-\n", line);
  // get_next_line(fd2, &line2);
  // printf(KGRN"-%s-\n", line2);
  if (ac == 3)
  {
    while (get_next_line(fd2, &line2) > 0)
      printf(KGRN"-%s-\n", line2);
    printf(KWHT"\n#-----------------------------------------------#\n\n");
    close(fd2);
  }
  int ret;
  while ((ret = get_next_line(fd, &line)) > 0)
  {
     printf(KGRN"-%s- ", line);
     printf("ret: %d\n", ret);
  }
  close(fd);
  return (ret);
}
