#include "pch.h"
#include "CppUnitTest.h"
#include "../8_1_1/8_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char check[] = "csa_on_sc"; // ����������� ������ 
			Assert::AreEqual(true, Include(check)); // ������������ ������
			char check_2[] = "gsa_no_sqwr";
			Assert::AreEqual(true, Include(check_2));
		}
	};
}
