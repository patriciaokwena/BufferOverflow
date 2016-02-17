#include <stdio.h>
#include <string.h>


int main() {
	 // U- not authorized; A-admin, O-other
	char uName[5];
	char pw[5];
	char uType= 'U';
	printf("Enter user name: ");
	scanf("%s", &uName);
	printf("Enter password: ");
	scanf("%s", &pw);
	printf("%p %s\n", pw, pw);
	printf("%p %c\n", &uType , uType);
	printf("%p %s\n",uName, uName);
	
	if (uType == 'A')
		printf("I am admin\n");
	else
		printf("I am not admin\n");
	return 0;
}
