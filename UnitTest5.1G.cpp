#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1G/Fraction.h"
#include "../Lab5.1G/Fraction.cpp"
#include "../Lab5.1G/Pair.h"
#include "../Lab5.1G/Pair.cpp"
#include "../Lab5.1G/Object.h"
#include "../Lab5.1G/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
