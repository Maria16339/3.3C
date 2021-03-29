#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/3.3C/3.3C/Object.h"
#include "C://Users/User/source/repos/3.3C/3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Object a;
			int test = Object::Count();
			Assert::AreEqual(test, 1);
		}
	};
}
