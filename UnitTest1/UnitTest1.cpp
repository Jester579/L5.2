#include "pch.h"
#include "CppUnitTest.h"
#include "../L5.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = (2, 3);
			double c = pow(2, 2 * 3 + 1) / (2 * 3 + 1);
		}
	};
}
