#pragma once

namespace StackExercise
{
	const int STACK_SIZE = 10;
	template <class T>
	class TStack
	{
	public:
		TStack() : m_nextIndex(0)
		{}

		void Push(T val);
		T Pop();

	private:
		T m_impl[STACK_SIZE];
		int m_nextIndex;
	};
}