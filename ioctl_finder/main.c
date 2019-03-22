#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/gpio.h>
#include <sys/ioctl.h>

int main()
{
    printf("const int GPIO_GET_LINEHANDLE_IOCTL = %lu;\n", GPIO_GET_LINEHANDLE_IOCTL);
    return 0;
}
