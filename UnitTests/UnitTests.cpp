#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* output_result(char*, char*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
// --------------- VALID TEST CASES ---------------- //
		TEST_METHOD(TestOutputResult_Draw_PrintDraw)
		{
			char* p1 = "rock";
			char* p2 = "rock";
			char* expected = "Draw";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(TestOutputResult_Player1Wins_PrintPlayer1)
		{
			char* p1 = "rock";
			char* p2 = "scissors";
			char* expected = "Player1";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(TestOutputResult_Player2Wins_PrintPlayer2)
		{
			char* p1 = "scissors";
			char* p2 = "rock";
			char* expected = "Player2";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}

// ------------- INVALID TEST CASES ----------------//
		TEST_METHOD(TestOutputResult_InvalidWordInput_PrintInvalid)
		{
			char* p1 = "brick";
			char* p2 = "rock";
			char* expected = "Invalid";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(TestOutputResult_InvalidNumberInput_PrintInvalid)
		{
			char* p1 = "1";
			char* p2 = "4";
			char* expected = "Invalid";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(TestOutputResult_InvalidCapitalLetters_PrintInvalid)
		{
			char* p1 = "ROCK";
			char* p2 = "Scissors";
			char* expected = "Invalid";
			char* actual = output_result(p1, p2);
			Assert::AreEqual(actual, expected);
		}

	};

}
