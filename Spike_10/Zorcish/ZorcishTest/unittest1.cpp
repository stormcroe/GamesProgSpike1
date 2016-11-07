#include "stdafx.h"
#include "CppUnitTest.h"
#include <string>
#include "..\Zorcish\world.h"
#include "..\Zorcish\player.h"
#include "..\Zorcish\commandProcessing.h"
#include "..\Zorcish\item.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZorcishTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSharpenCreate)
		{
			//item * i = new item("ITEM", "an Item", "A simple Item", true, false, true);
			//Assert::IsNotNull(i->getSharpenable());
		}

		TEST_METHOD(TestSharpenItem){
			//item * i = new item("ITEM", "an Item", "A simple Item", true, false, true);
			//Assert::IsNotNull(i->getSharpenable());
			//Assert::IsFalse(i->getSharpenable()->getSharpened());
			//i->Sharpen();
			//Assert::IsTrue(i->getSharpenable()->getSharpened());

		}

	};
}