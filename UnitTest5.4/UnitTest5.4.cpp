#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;
			s = S5(0);
			Assert::AreEqual(s, 0);
		}
	};
}
