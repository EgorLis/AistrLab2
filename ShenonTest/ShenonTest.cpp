#include "pch.h"
#include "CppUnitTest.h"
#include "../AISDLAB2b/ShenonList.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShenonTest
{
	TEST_CLASS(ShenonTest)
	{
	public:

		TEST_METHOD(CodingTest)
		{
			ShenonList List;
			List.coding();
		}

		TEST_METHOD(DecodingTest)
		{
			ShenonList List;
			List.coding();
			List.decoding();
		}

		TEST_METHOD(FindingTest)
		{
			ShenonList List;
			List.coding();
			List.decoding();
			List.FindSymbols();
		}
	};
}
