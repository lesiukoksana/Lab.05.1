#include "pch.h"
#include "CppUnitTest.h"
#include "/Student/Lab_05_1/Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n;

			double a = 1;
			double b = 1;

			n = h(a, b);

			Assert::AreEqual(n, 1.545351286587159);
		}
	};
}
