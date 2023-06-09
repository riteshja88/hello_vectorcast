#include <stdio.h>
#include <stdlib.h>
int function_vector_cast_hello_001_001(const int a,
									   const int b)
{
	return a+b;
}


int function_vector_cast_hello_002_001(const int * const a,
									   const int * const b)
{
	return *a + *b;
}


int function_vector_cast_hello_002_002(const int * const a,
									   const int * const b)
{
	if(NULL == a ||
	   NULL == b) {
		return 0;
	}
	return *a + *b;
}


void function_vector_cast_hello_003_001(const int * const a,
										const int * const b,
										int * const result)
{
	*result = *a + *b;
}

void function_vector_cast_hello_003_002(const int * const a,
										const int * const b,
										int * const result)
{
	if(NULL == a ||
	   NULL == b) {
		return;
	}
	*result = *a + *b;
}

void function_vector_cast_hello_003_003(const int * const a,
										const int * const b,
										int * const result)
{
	if(NULL == result) {
		return;
	}
	*result = *a + *b;
}

void function_vector_cast_hello_003_004(const int * const a,
										const int * const b,
										int * const result)
{
	if(NULL == a ||
	   NULL == b ||
	   NULL == result) {
		return;
	}
	*result = *a + *b;
}

int * function_vector_cast_hello_004_001(const int * const a,
										 const int * const b)
{
	if(NULL == a ||
	   NULL == b) {
		return NULL;
	}
	int *result = (int*)malloc(sizeof(int));
	*result = *a + *b;
	return result;
}

int * function_vector_cast_hello_004_002(const int * const a,
										 const int * const b)
{
	if(NULL == a ||
	   NULL == b) {
		return NULL;
	}
	int *result = (int*)malloc(sizeof(int));
	if(NULL != result) {
		*result = *a + *b;
	}
	return result;
}

int * function_vector_cast_hello_004_003(const int * const a,
										 const int * const b)
{
	if(NULL == a ||
	   NULL == b) {
		return NULL;
	}
	int *result = (int*)malloc(sizeof(int));
	if(NULL != result) {
		*result = *a + *b;
	}
	free(result);
	return result;
}

int * function_vector_cast_hello_004_004(const int * const a,
										 const int * const b)
{
	if(NULL == a ||
	   NULL == b) {
		return NULL;
	}
	int *result = (int*)malloc(sizeof(int));
	if(NULL != result) {
		*result = *a + *b;
		free(result);
	}
	return result;
}
