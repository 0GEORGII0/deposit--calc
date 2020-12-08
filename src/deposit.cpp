#include "deposit.h"

int verifyDeposit(int deposit) {
	return deposit >= 1000;
}

int verifyDays(int days) {
	if(days < 0) return 1;
	if(days > 365) return 2;
	return 0;
}