#include "pch.h"
#include "CppUnitTest.h"
#include "..//Ap_12.2.rec/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestAllElementsInList)
        {
            Node* L1 = nullptr;
            insert(L1, 4);
            insert(L1, 2);
            insert(L1, 9);

            Node* L2 = nullptr;
            insert(L2, 4);
            insert(L2, 2);
            insert(L2, 9);
            insert(L2, 3);

            Assert::IsTrue(areAllElementsInList(L1, L2));
        }
	};
}
