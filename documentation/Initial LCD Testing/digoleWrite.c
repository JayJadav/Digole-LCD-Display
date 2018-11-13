#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <string.h>

int main(void) {
	int file_i2c;
	int addr = 0x27;
	char *filename = (char*) "/dev/i2c-1";
	char message[100] = "Hello, World!";

	printf("\nStarting connection with Digole LCD...\n");

	if ((file_i2c = open(filename, O_RDWR)) < 0) {
		printf("\nFailed to open I2C bus.");
		return -1;
	}

	if (ioctl(file_i2c, I2C_SLAVE, addr) < 0) {
		printf("\nFailed to communicate with slave");
		return -1;
	}
	
	while(strncmp(message, "-1", 2) != 0) {
		printf("Enter a message (max 100char) or -1 to quit: ");
		fflush(stdout);
		fgets(message, sizeof(message), stdin);
		write(file_i2c, "CL", 2);
		write(file_i2c, "CS1", 3);

		write(file_i2c, "TT", 2);
		write(file_i2c, message, sizeof(message));
		write(file_i2c, "0", 1);
	}
	
	write(file_i2c, "CL", 2);
	close(file_i2c);

	return 0;
}

