#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
public:

	TEST_METHOD(TestMethod1) {
		double t;
		t = h(2, 3);
		Assert::AreEqual(t, -5.);
	}
	};
}