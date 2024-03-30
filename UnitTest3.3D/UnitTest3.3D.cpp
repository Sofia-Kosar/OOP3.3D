#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.3D/DateOpen.h"
#include "../OOP3.3D/DateOpen.cpp"
#include "../OOP3.3D/Triad.cpp"
#include "../OOP3.3D/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DateOpen date1(1, 1, 2023);
			DateOpen date2(2, 1, 2023);
			Assert::IsTrue(date1 < date2);
		}
	};
}
