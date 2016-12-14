#ifndef __STACK__H__
#define __STACK__H__

template <class DATA>
class CStack
{
private :
	struct st_STACK_NODE
	{
		DATA data;
		st_STACK_NODE *stpNextNode;
	};

public :
	CStack()
	{
		Initial();
	}
	~CStack()
	{
		DATA *pTemp;
		for (int iCnt = 0; iCnt < _iStackCount; iCnt++)
		{
			
		}
	}

private :
	st_STACK_NODE *_iTop;
	int _iStackCount;

public :
	void Initial()
	{
		_iTop = NULL;
		_iStackCount = 0;
	}

	bool Push(DATA data)
	{
		st_STACK_NODE *stpNode = new st_STACK_NODE;
		stpNode->data = data;

		stpNode->stpNextNode = _iTop;

		_iTop = stpNode;

		_iStackCount++;

		return true;
	}

	bool Pop(DATA *outData)
	{
		st_STACK_NODE *stpNode;

		if (_iStackCount == 0) return false;

		stpNode = _iTop;
		*outData = stpNode->data;

		_iTop = stpNode->stpNextNode;

		delete stpNode;

		return true;
	}

	int GetDataSize(){
		return _iStackCount; 
	}
};

#endif