#ifndef HEAD_STACK_H
#define HEAD_STACK_H

template <class DATA>
class CStack
{
public :
	CStack(int MaxData)
	{
		_ptrStack = new DATA[MaxData];
		_iTop = -1;
		_iMaxData = MaxData;
	}
	~CStack(){}

private :
	DATA *_ptrStack;
	int _iTop;
	int _iMaxData;

public :
	bool Push(DATA data)
	{
		if (_iTop < _iMaxData){
			_ptrStack[++_iTop] = data;
			return true;
		}
		return false;
	}

	bool Pop(DATA *outData)
	{
		if (_iTop > -1){
			*outData = _ptrStack[_iTop--];
			return true;
		}
		return false;
	}

	int GetDataSize(){
		return _iTop + 1; 
	}
};

#endif