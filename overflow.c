#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i;

    for(i=1;; i*=2)
  {
    printf("%i\n", i);
    sleep(1);
  }


}

