#include <stdio.h>

int main(void) {
	printf("%d",countNumberOfDigits(999999));
	return 0;
}

int countNumberOfDigits(int a) {
    if(a){
        return countNumberOfDigits(a/10) + 1;
    }
    return 0;
}
