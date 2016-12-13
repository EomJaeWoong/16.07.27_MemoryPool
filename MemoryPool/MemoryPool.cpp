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
// �� �ϳ��� �Ҵ�޴´�.
//
// Parameters: ����.
// Return: (DATA *) ����Ÿ �� ������.
//////////////////////////////////////////////////////////////////////////
template <template DATA>
DATA CMemoryPool<DATA>::*Alloc(bool bPlacementNew = true)
{

}

//////////////////////////////////////////////////////////////////////////
// ������̴� ���� �����Ѵ�.
//
// Parameters: (DATA *) �� ������.
// Return: (BOOL) TRUE, FALSE.
//////////////////////////////////////////////////////////////////////////
template <template DATA>
bool CMemoryPool<DATA>::Free(DATA *pData)
{

}
