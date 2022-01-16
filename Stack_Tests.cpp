#include "CppUnitTest.h"
#include "..\СДЭК\Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests
{
	TEST_CLASS(StackTests)
	{
	public:

		TEST_METHOD(constructor_valid_data_succeed)
		{
			Stack a;
			Assert::IsTrue(a.getSize() == 0);
		}
		
		TEST_METHOD(push_valid_data_succeed)
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
		
		TEST_METHOD(pop_valid_data_succeed)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(k == a.pop());
		}
		TEST_METHOD(getSize_valid_data_succeed)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(a.getSize() == 1);
		}
		
		TEST_METHOD(get_valid_data_succeed)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			Assert::IsTrue(k == a.get());
		}
		
		TEST_METHOD(edit_valid_data_succeed)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			k = -99 + rand() % 100;
			a.edit(k);
			Assert::IsTrue(k == a.get());
		}

		TEST_METHOD(operator_valid_data_succeed)
		{
			Stack a;
			int k = -99 + rand() % 100;
			a.push(k);
			std::stringstream temp;
			temp << k << " ";
			std::string tempStr = temp.str();
			std::stringstream out;
			out << a;
			Assert::IsTrue(tempStr == out.str());
		}
	};
}