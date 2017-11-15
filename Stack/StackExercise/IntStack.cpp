#include "IntStack.h"
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{
	
	template <class T>
	void TStack<T>::Push(T val)
	{
		if (m_nextIndex < STACK_SIZE)
		{
			m_impl[m_nextIndex] = val;
			++m_nextIndex;
		}
		else
		{
			throw StackOverflowException();
		}
	}

	template <class T>
	T TStack<T>::Pop()
	{
		if (m_nextIndex > 0)
		{
			--m_nextIndex;
			return m_impl[m_nextIndex];
		}
		else
		{
			throw StackUnderflowException();
		}
	}
}
