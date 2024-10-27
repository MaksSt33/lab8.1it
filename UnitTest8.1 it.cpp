
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 it/lab 8.1 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
    TEST_CLASS(UnitTest81it)
    {

    public:

        TEST_METHOD(TestContainsTripleStars_Iterative)
        {
            char str1[] = "abc***def";
            char str2[] = "abc**def";
            Assert::IsTrue(ContainsTripleStars(str1));
            Assert::IsFalse(ContainsTripleStars(str2));
        }

        TEST_METHOD(TestReplaceTripleStars_Iterative)
        {
            char str1[] = "abc***def***ghi";
            char expected1[] = "abc!!def!!ghi";
            char str2[] = "abc**def";
            char expected2[] = "abc**def";

            ReplaceTripleStars(str1);
            ReplaceTripleStars(str2);

            Assert::IsTrue(strcmp(expected1, str1) == 0);
            Assert::IsTrue(strcmp(expected2, str2) == 0);
        }
    };
}