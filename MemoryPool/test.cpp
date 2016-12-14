#include <stdio.h>

#include "MemoryPool.h"

void main()
{
	CMemoryPool<int> MemPool(10);
	
	int *c = MemPool.Alloc();
	int *d = MemPool.Alloc();

	*c = 79;
	*d = 120;

	printf("%d ", *c);

	MemPool.Free(c);
}