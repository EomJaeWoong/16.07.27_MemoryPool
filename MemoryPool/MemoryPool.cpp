#include "Stack.h"
#include "MemoryPool.h"

template <template DATA>
CMemoryPool<DATA>::CMemoryPool(int iBlockNum, bool bLockFlag)
{
	m_iBlockCount = iBlockNum;

	if (iBlockNum <= 0)	return;

	m_Stack.Initial(m_iBlockCount);

	m_Stack(m_iBlockCount);
	st_NODE *stpTemp = new st_NODE;
	st_NODE *stpPreTemp;
	m_Stack.Push(stpTemp->stBlockNode);

	for (int iCnt = 0; iCnt < iBlockNum - 1; iCnt++)
	{
		stpPreTemp = new st_NODE;
		stpPreTemp->stBlockNode = stpTemp->stBlockNode;
		stpTemp = stpPreTemp;
		m_Stack.Push(stpTemp->stBlokNode);
	}

	m_stBlockHeader = stpTemp;
}
	/*
	m_stBlockHeader = new st_NODE;

	st_BLOCK_NODE *stpTemp;
	stpTemp = m_stBlockHeader;

	for (int iCnt = 0; iCnt < iBlockNum - 1; iCnt++)
	{
	stpTemp->stpNextBlock = new st_BLOCK_NODE;
	stpTemp = stpTemp->stpNextBlock;
	}
	*/



template <template DATA>
CMemoryPool<DATA>::virtual	~CMemoryPool()
{
	for (int iCnt = 0; iCnt < m_iBlockCount; iCnt++)
	{
		st_NODE *stpNode = m_stBlockHeader;
		m_stBlockHeader = m_stBlockHeader->stBlockNode;
		delete stpNode;
	}
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
