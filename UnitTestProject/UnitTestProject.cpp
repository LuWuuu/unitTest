#include "pch.h"
#include "CppUnitTest.h"
#include "Calcu.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
	TEST_CLASS(UnitTestProject)
	{
	public:
		Calcu* calcu;

		TEST_METHOD_INITIALIZE(init)
		{
			calcu = new Calcu;
		}
		TEST_METHOD(TestMethod1)
		{
			double num1 = -5.5;
			double num2 = 97.543;
			Assert::AreEqual(calcu->Add(num1, num2), 92.043);
		}
		TEST_METHOD(TestMethod2)
		{
			double num1 = -777.421;
			double num2 = 5.4321;
			Assert::AreEqual(calcu->Sub(num1, num2), -782.8531);
		}
		TEST_METHOD(TestMethod3)
		{
			double num1 = -5.5;
			double num2 = 97.543;
			Assert::AreEqual(calcu->Multi(num1, num2), -536.4865);
		}
		TEST_METHOD(TestMethod4)
		{
			double num1 = -102.51;
			double num2 = 20.1;
			Assert::AreEqual(calcu->Divide(num1, num2), -5.1);
		}
		TEST_METHOD_CLEANUP(clean)
		{
			delete calcu;
		}
	};
}
