#include "InAx_adders.h"
#include <stdlib.h>
#include <math.h>

static int InAx1_sum(int a, int b, int cin);
static int InAx1_carry(int a, int b, int cin);
static int InAx2_sum(int a, int b, int cin);
static int InAx2_carry(int a, int b, int cin);
static int InAx3_sum(int a, int b, int cin);
static int InAx3_carry(int a, int b, int cin);

int InAx1_adder(int a, int b, int nab)
{
	int i;
       	int current_carry = 0;
	int lsb_a, lsb_b, lsb_sum;
        int acc = 0;
	for(i = 0; i < nab; i++){
		lsb_a = (a & (1U<<i)) >> i;
		lsb_b = (b & (1U<<i)) >> i;
		lsb_sum = InAx1_sum(lsb_a, lsb_b, current_carry);
		acc |= (lsb_sum << i);
		current_carry = InAx1_carry(lsb_a, lsb_b, current_carry);
	}
	int mask = ~((1U << nab) -1);
	int precise_a = a & mask; 
	int precise_b = b & mask;
       	return precise_a + precise_b + acc;	
}


int InAx2_adder(int a, int b, int nab)
{
	int i;
       	int current_carry = 0;
	int lsb_a, lsb_b, lsb_sum;
        int acc = 0;
	for(i = 0; i < nab; i++){
		lsb_a = (a & (1U<<i)) >> i;
		lsb_b = (b & (1U<<i)) >> i;
		lsb_sum = InAx2_sum(lsb_a, lsb_b, current_carry);
		acc |= (lsb_sum << i);
		current_carry = InAx2_carry(lsb_a, lsb_b, current_carry);
	}
	int mask = ~((1U << nab) -1);
	int precise_a = a & mask; 
	int precise_b = b & mask;
       	return precise_a + precise_b + acc;	
}

int InAx3_adder(int a, int b, int nab)
{
	int i;
       	int current_carry = 0;
	int lsb_a, lsb_b, lsb_sum;
        int acc = 0;
	for(i = 0; i < nab; i++){
		lsb_a = (a & (1U<<i)) >> i;
		lsb_b = (b & (1U<<i)) >> i;
		lsb_sum = InAx3_sum(lsb_a, lsb_b, current_carry);
		acc |= (lsb_sum << i);
		current_carry = InAx3_carry(lsb_a, lsb_b, current_carry);
	}
	int mask = ~((1U << nab) -1);
	int precise_a = a & mask; 
	int precise_b = b & mask;
       	return precise_a + precise_b + acc;	
}

static int InAx1_sum(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(0 == a && 1 == b && 1 == cin) ||
	   	(1 == a && 0 == b && 1 == cin) ||		
	   	(1 == a && 1 == b && 0 == cin)	)
		return 0;
	return 1;	
}

static int InAx1_carry(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(0 == a && 1 == b && 0 == cin) ||
	   	(1 == a && 0 == b && 0 == cin) ||		
	   	(1 == a && 1 == b && 0 == cin)	)
		return 0;
	return 1;
}

static int InAx2_sum(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(1 == a && 1 == b && 0 == cin)	)
		return 0;
	return 1;	
}


static int InAx2_carry(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(0 == a && 0 == b && 1 == cin) ||
	   	(0 == a && 1 == b && 0 == cin) ||		
	   	(1 == a && 0 == b && 0 == cin)	)
		return 0;
	return 1;
}

static int InAx3_sum(int a, int b, int cin)
{
	if(	(0 == a && 1 == b && 1 == cin) ||
	   	(1 == a && 0 == b && 1 == cin) ||
	   	(1 == a && 1 == b && 0 == cin)	)
		return 0;
	return 1;	
}


static int InAx3_carry(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(0 == a && 0 == b && 1 == cin) ||
	   	(0 == a && 1 == b && 0 == cin) ||		
	   	(1 == a && 0 == b && 0 == cin)	)
		return 0;
	return 1;
}
