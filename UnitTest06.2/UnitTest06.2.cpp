#include "pch.h"
#include "CppUnitTest.h"
#include "../PR06.2 рек/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062
{
	TEST_CLASS(UnitTest062)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test_arr[] = { 4, -2, 15, 7, 3 };
			int n = 5;
			int expected = 2;
			int actual = findMax(test_arr, n, 0, -1000, -1);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod2)
		{
			int test_arr[] = { 4, -2, 15, 7, 3 };
			int n = 5;
			int index_to_swap = 2;
			swapLastWithMax(test_arr, n, index_to_swap);
			Assert::AreEqual(3, test_arr[2]);
			Assert::AreEqual(15, test_arr[4]);
		}
	};
}
