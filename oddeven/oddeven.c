#include <stdio.h>

int main() {
long long integer;
printf("Enter your phone number  : "); // To check your phone number, whether is it even or odd.
scanf("%lld",&integer);
if(integer % 2 == 0) {
	printf("\nGiven integer %lld is even ", integer);
}
else {
	printf("\nGiven integer %lld is odd ", integer);
}
return 0;
}