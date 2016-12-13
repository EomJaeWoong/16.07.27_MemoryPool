#include "Stack.h"
#include "MemoryPool.h"

template <template DATA>
CMemoryPool<DATA>::CMemoryPool(int iBlockNum, bool bLockFlag = false)
{
	m_iBlockCount = iBlockNum;

	if (iBlockNum <= 0)	return;

	m_stBlockHeader = new st_BLOCK_NODE;
	
	st_BLOCK_NODE *stpTemp;
	stpTemp = m_stBlockHeader->stpNextBlock;

	for (int iCnt = 0; iCnt < iBlockNum - 1; iCnt++)
	{
		stpTemp = new st_BLOCK_NODE;
		stpTemp = stpTemp->stpNextBlock;
	}
}

template <template DATA>
CMemoryPool<DATA>::virtual	~CMemoryPool()
{

}


//////////////////////////////////////////////////////////////////////////
// 블럭 하나를 할당받는다.
//
// Parameters: 없음.
// Return: (DATA *) 데이타 블럭 포인터.
//////////////////////////////////////////////////////////////////////////
template <template DATA>
DATA CMemoryPool<DATA>::*Alloc(bool bPlacementNew = true)
{

}

//////////////////////////////////////////////////////////////////////////
// 사용중이던 블럭을 해제한다.
//
// Parameters: (DATA *) 블럭 포인터.
// Return: (BOOL) TRUE, FALSE.
//////////////////////////////////////////////////////////////////////////
template <template DATA>
bool CMemoryPool<DATA>::Free(DATA *pData)
{

}
