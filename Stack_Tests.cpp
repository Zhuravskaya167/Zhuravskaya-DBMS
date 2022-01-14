#include "CppUnitTest.h"
#include "..\СДЭК\Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests
{
	TEST_CLASS(StackTests)
	{
	public:

		TEST_METHOD(TestConstructor)
		{
			Stack a;
			Assert::IsTrue(a.getSize() == 0);
		}
		
		TEST_METHOD(Testpush)
		{
			Stack a;
			for (int i = 0; i++; i < 9) {
				for (int l = 0; l++; l < i) {
					int k = -99 + rand() % 100;
					a.push(k);
					Assert::IsTrue(a.get() == k);
				}
			}
		}
		
		TEST_METHOD(Testpop)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(k == a.pop());
		}
		TEST_METHOD(TestGetSize)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(a.getSize() == 1);
		}
		
		TEST_METHOD(Testget)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(k == a.get());
		}
		
		TEST_METHOD(Testedit)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			k = -99 + rand() % 100;
			a.edit(k);
			Assert::IsTrue(k == a.get());
		}
	};
}