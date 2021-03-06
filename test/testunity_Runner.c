/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void testUnitySizeInitializationReminder(void);
extern void testTrue(void);
extern void testFalse(void);
extern void testPreviousPass(void);
extern void testNotVanilla(void);
extern void testNotTrue(void);
extern void testNotFalse(void);
extern void testNotUnless(void);
extern void testNotNotEqual(void);
extern void testFail(void);
extern void testIsNull(void);
extern void testIsNullShouldFailIfNot(void);
extern void testNotNullShouldFailIfNULL(void);
extern void testIgnore(void);
extern void testIgnoreMessage(void);
extern void testNotEqualInts(void);
extern void testNotEqualInt8s(void);
extern void testNotEqualInt16s(void);
extern void testNotEqualInt32s(void);
extern void testNotEqualBits(void);
extern void testNotEqualUInts(void);
extern void testNotEqualUInt8s(void);
extern void testNotEqualUInt16s(void);
extern void testNotEqualUInt32s(void);
extern void testNotEqualHex8s(void);
extern void testNotEqualHex8sIfSigned(void);
extern void testNotEqualHex16s(void);
extern void testNotEqualHex16sIfSigned(void);
extern void testNotEqualHex32s(void);
extern void testNotEqualHex32sIfSigned(void);
extern void testEqualInts(void);
extern void testEqualInt8s(void);
extern void testEqualInt8sWhenThereAreDifferencesOutside8Bits(void);
extern void testEqualInt16s(void);
extern void testEqualInt16sNegatives(void);
extern void testEqualInt16sWhenThereAreDifferencesOutside16Bits(void);
extern void testEqualInt32s(void);
extern void testEqualInt32sNegatives(void);
extern void testEqualUints(void);
extern void testEqualUint8s(void);
extern void testEqualUint8sWhenThereAreDifferencesOutside8Bits(void);
extern void testEqualUint16s(void);
extern void testEqualUint16sWhenThereAreDifferencesOutside16Bits(void);
extern void testEqualUint32s(void);
extern void testNotEqual(void);
extern void testEqualHex8s(void);
extern void testEqualHex8sWhenThereAreDifferencesOutside8Bits(void);
extern void testEqualHex8sNegatives(void);
extern void testEqualHex16s(void);
extern void testEqualHex16sWhenThereAreDifferencesOutside16Bits(void);
extern void testEqualHex32s(void);
extern void testEqualBits(void);
extern void testNotEqualBitHigh(void);
extern void testNotEqualBitLow(void);
extern void testNotEqualBitsHigh(void);
extern void testNotEqualBitsLow(void);
extern void testEqualShorts(void);
extern void testEqualUShorts(void);
extern void testEqualChars(void);
extern void testEqualUChars(void);
extern void testEqualPointers(void);
extern void testNotEqualPointers(void);
extern void testIntsWithinDelta(void);
extern void testIntsWithinDeltaAndCustomMessage(void);
extern void testIntsNotWithinDelta(void);
extern void testIntsNotWithinDeltaAndCustomMessage(void);
extern void testUIntsWithinDelta(void);
extern void testUIntsWithinDeltaAndCustomMessage(void);
extern void testUIntsNotWithinDelta(void);
extern void testUIntsNotWithinDeltaAndCustomMessage(void);
extern void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirst(void);
extern void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirstAndCustomMessage(void);
extern void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirst(void);
extern void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirstAndCustomMessage(void);
extern void testHEX32sWithinDelta(void);
extern void testHEX32sWithinDeltaAndCustomMessage(void);
extern void testHEX32sNotWithinDelta(void);
extern void testHEX32sNotWithinDeltaAndCustomMessage(void);
extern void testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPass(void);
extern void testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage(void);
extern void testHEX16sWithinDelta(void);
extern void testHEX16sWithinDeltaAndCustomMessage(void);
extern void testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits(void);
extern void testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage(void);
extern void testHEX16sNotWithinDelta(void);
extern void testHEX16sNotWithinDeltaAndCustomMessage(void);
extern void testHEX8sWithinDelta(void);
extern void testHEX8sWithinDeltaAndCustomMessage(void);
extern void testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits(void);
extern void testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage(void);
extern void testHEX8sNotWithinDelta(void);
extern void testHEX8sNotWithinDeltaAndCustomMessage(void);
extern void testEqualStrings(void);
extern void testEqualStringsWithCarriageReturnsAndLineFeeds(void);
extern void testNotEqualString1(void);
extern void testNotEqualString2(void);
extern void testNotEqualString3(void);
extern void testNotEqualString4(void);
extern void testNotEqualString5(void);
extern void testNotEqualString_ExpectedStringIsNull(void);
extern void testNotEqualString_ActualStringIsNull(void);
extern void testEqualStringArrays(void);
extern void testNotEqualStringArray1(void);
extern void testNotEqualStringArray2(void);
extern void testNotEqualStringArray3(void);
extern void testNotEqualStringArray4(void);
extern void testNotEqualStringArray5(void);
extern void testNotEqualStringArray6(void);
extern void testEqualStringArrayIfBothNulls(void);
extern void testEqualMemory(void);
extern void testNotEqualMemory1(void);
extern void testNotEqualMemory2(void);
extern void testNotEqualMemory3(void);
extern void testNotEqualMemory4(void);
extern void testEqualIntArrays(void);
extern void testNotEqualIntArraysNullExpected(void);
extern void testNotEqualIntArraysNullActual(void);
extern void testNotEqualIntArrays1(void);
extern void testNotEqualIntArrays2(void);
extern void testNotEqualIntArrays3(void);
extern void testEqualPtrArrays(void);
extern void testNotEqualPtrArraysNullExpected(void);
extern void testNotEqualPtrArraysNullActual(void);
extern void testNotEqualPtrArrays1(void);
extern void testNotEqualPtrArrays2(void);
extern void testNotEqualPtrArrays3(void);
extern void testEqualInt8Arrays(void);
extern void testNotEqualInt8Arrays(void);
extern void testEqualUIntArrays(void);
extern void testNotEqualUIntArrays1(void);
extern void testNotEqualUIntArrays2(void);
extern void testNotEqualUIntArrays3(void);
extern void testEqualInt16Arrays(void);
extern void testNotEqualInt16Arrays(void);
extern void testEqualInt32Arrays(void);
extern void testNotEqualInt32Arrays(void);
extern void testEqualUINT8Arrays(void);
extern void testNotEqualUINT8Arrays1(void);
extern void testNotEqualUINT8Arrays2(void);
extern void testNotEqualUINT8Arrays3(void);
extern void testEqualUINT16Arrays(void);
extern void testNotEqualUINT16Arrays1(void);
extern void testNotEqualUINT16Arrays2(void);
extern void testNotEqualUINT16Arrays3(void);
extern void testEqualUINT32Arrays(void);
extern void testNotEqualUINT32Arrays1(void);
extern void testNotEqualUINT32Arrays2(void);
extern void testNotEqualUINT32Arrays3(void);
extern void testEqualHEXArrays(void);
extern void testNotEqualHEXArrays1(void);
extern void testNotEqualHEXArrays2(void);
extern void testNotEqualHEXArrays3(void);
extern void testEqualHEX32Arrays(void);
extern void testNotEqualHEX32Arrays1(void);
extern void testNotEqualHEX32Arrays2(void);
extern void testNotEqualHEX32Arrays3(void);
extern void testEqualHEX16Arrays(void);
extern void testNotEqualHEX16Arrays1(void);
extern void testNotEqualHEX16Arrays2(void);
extern void testNotEqualHEX16Arrays3(void);
extern void testEqualHEX8Arrays(void);
extern void testNotEqualHEX8Arrays1(void);
extern void testNotEqualHEX8Arrays2(void);
extern void testNotEqualHEX8Arrays3(void);
extern void testEqualMemoryArrays(void);
extern void testNotEqualMemoryArraysExpectedNull(void);
extern void testNotEqualMemoryArraysActualNull(void);
extern void testNotEqualMemoryArrays1(void);
extern void testNotEqualMemoryArrays2(void);
extern void testNotEqualMemoryArrays3(void);
extern void testProtection(void);
extern void testIgnoredAndThenFailInTearDown(void);
extern void testEqualHex64s(void);
extern void testEqualUint64s(void);
extern void testEqualInt64s(void);
extern void testNotEqualHex64s(void);
extern void testNotEqualUint64s(void);
extern void testNotEqualInt64s(void);
extern void testNotEqualHex64sIfSigned(void);
extern void testHEX64sWithinDelta(void);
extern void testHEX64sNotWithinDelta(void);
extern void testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass(void);
extern void testEqualHEX64Arrays(void);
extern void testEqualUint64Arrays(void);
extern void testEqualInt64Arrays(void);
extern void testNotEqualHEX64Arrays1(void);
extern void testNotEqualHEX64Arrays2(void);
extern void testNotEqualUint64Arrays(void);
extern void testNotEqualInt64Arrays(void);
extern void testFloatsWithinDelta(void);
extern void testFloatsNotWithinDelta(void);
extern void testFloatsEqual(void);
extern void testFloatsNotEqual(void);
extern void testFloatsNotEqualNegative1(void);
extern void testFloatsNotEqualNegative2(void);
extern void testFloatsNotEqualActualNaN(void);
extern void testFloatsNotEqualExpectedNaN(void);
extern void testFloatsNotEqualBothNaN(void);
extern void testFloatsNotEqualInfNaN(void);
extern void testFloatsNotEqualNaNInf(void);
extern void testFloatsNotEqualActualInf(void);
extern void testFloatsNotEqualExpectedInf(void);
extern void testFloatsNotEqualBothInf(void);
extern void testFloatsNotEqualPlusMinusInf(void);
extern void testFloatIsInf(void);
extern void testFloatIsNotInf(void);
extern void testFloatIsNotNegInf(void);
extern void testFloatIsNan(void);
extern void testFloatIsNotNan(void);
extern void testFloatInfIsNotNan(void);
extern void testFloatNanIsNotInf(void);
extern void testEqualFloatArrays(void);
extern void testNotEqualFloatArraysExpectedNull(void);
extern void testNotEqualFloatArraysActualNull(void);
extern void testNotEqualFloatArrays1(void);
extern void testNotEqualFloatArrays2(void);
extern void testNotEqualFloatArrays3(void);
extern void testNotEqualFloatArraysNegative1(void);
extern void testNotEqualFloatArraysNegative2(void);
extern void testNotEqualFloatArraysNegative3(void);
extern void testNotEqualFloatArraysNaN(void);
extern void testNotEqualFloatArraysInf(void);
extern void testDoublesWithinDelta(void);
extern void testDoublesNotWithinDelta(void);
extern void testDoublesEqual(void);
extern void testDoublesNotEqual(void);
extern void testDoublesNotEqualNegative1(void);
extern void testDoublesNotEqualNegative2(void);
extern void testDoublesNotEqualActualNaN(void);
extern void testDoublesNotEqualExpectedNaN(void);
extern void testDoublesNotEqualBothNaN(void);
extern void testDoublesNotEqualInfNaN(void);
extern void testDoublesNotEqualNaNInf(void);
extern void testDoublesNotEqualActualInf(void);
extern void testDoublesNotEqualExpectedInf(void);
extern void testDoublesNotEqualBothInf(void);
extern void testDoublesNotEqualPlusMinusInf(void);
extern void testDoubleIsInf(void);
extern void testDoubleIsNotInf(void);
extern void testDoubleIsNotNegInf(void);
extern void testDoubleIsNan(void);
extern void testDoubleIsNotNan(void);
extern void testDoubleInfIsNotNan(void);
extern void testDoubleNanIsNotInf(void);
extern void testEqualDoubleArrays(void);
extern void testNotEqualDoubleArraysExpectedNull(void);
extern void testNotEqualDoubleArraysActualNull(void);
extern void testNotEqualDoubleArrays1(void);
extern void testNotEqualDoubleArrays2(void);
extern void testNotEqualDoubleArrays3(void);
extern void testNotEqualDoubleArraysNegative1(void);
extern void testNotEqualDoubleArraysNegative2(void);
extern void testNotEqualDoubleArraysNegative3(void);
extern void testNotEqualDoubleArraysNaN(void);
extern void testNotEqualDoubleArraysInf(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test/testunity.c";
  UnityBegin();
  RUN_TEST(testUnitySizeInitializationReminder, 60);
  RUN_TEST(testTrue, 90);
  RUN_TEST(testFalse, 97);
  RUN_TEST(testPreviousPass, 104);
  RUN_TEST(testNotVanilla, 109);
  RUN_TEST(testNotTrue, 116);
  RUN_TEST(testNotFalse, 123);
  RUN_TEST(testNotUnless, 130);
  RUN_TEST(testNotNotEqual, 137);
  RUN_TEST(testFail, 144);
  RUN_TEST(testIsNull, 151);
  RUN_TEST(testIsNullShouldFailIfNot, 160);
  RUN_TEST(testNotNullShouldFailIfNULL, 169);
  RUN_TEST(testIgnore, 178);
  RUN_TEST(testIgnoreMessage, 186);
  RUN_TEST(testNotEqualInts, 194);
  RUN_TEST(testNotEqualInt8s, 201);
  RUN_TEST(testNotEqualInt16s, 208);
  RUN_TEST(testNotEqualInt32s, 215);
  RUN_TEST(testNotEqualBits, 222);
  RUN_TEST(testNotEqualUInts, 229);
  RUN_TEST(testNotEqualUInt8s, 241);
  RUN_TEST(testNotEqualUInt16s, 253);
  RUN_TEST(testNotEqualUInt32s, 265);
  RUN_TEST(testNotEqualHex8s, 277);
  RUN_TEST(testNotEqualHex8sIfSigned, 289);
  RUN_TEST(testNotEqualHex16s, 301);
  RUN_TEST(testNotEqualHex16sIfSigned, 313);
  RUN_TEST(testNotEqualHex32s, 325);
  RUN_TEST(testNotEqualHex32sIfSigned, 337);
  RUN_TEST(testEqualInts, 349);
  RUN_TEST(testEqualInt8s, 369);
  RUN_TEST(testEqualInt8sWhenThereAreDifferencesOutside8Bits, 388);
  RUN_TEST(testEqualInt16s, 394);
  RUN_TEST(testEqualInt16sNegatives, 413);
  RUN_TEST(testEqualInt16sWhenThereAreDifferencesOutside16Bits, 432);
  RUN_TEST(testEqualInt32s, 438);
  RUN_TEST(testEqualInt32sNegatives, 457);
  RUN_TEST(testEqualUints, 477);
  RUN_TEST(testEqualUint8s, 498);
  RUN_TEST(testEqualUint8sWhenThereAreDifferencesOutside8Bits, 517);
  RUN_TEST(testEqualUint16s, 523);
  RUN_TEST(testEqualUint16sWhenThereAreDifferencesOutside16Bits, 542);
  RUN_TEST(testEqualUint32s, 548);
  RUN_TEST(testNotEqual, 567);
  RUN_TEST(testEqualHex8s, 578);
  RUN_TEST(testEqualHex8sWhenThereAreDifferencesOutside8Bits, 597);
  RUN_TEST(testEqualHex8sNegatives, 603);
  RUN_TEST(testEqualHex16s, 622);
  RUN_TEST(testEqualHex16sWhenThereAreDifferencesOutside16Bits, 641);
  RUN_TEST(testEqualHex32s, 647);
  RUN_TEST(testEqualBits, 666);
  RUN_TEST(testNotEqualBitHigh, 682);
  RUN_TEST(testNotEqualBitLow, 691);
  RUN_TEST(testNotEqualBitsHigh, 700);
  RUN_TEST(testNotEqualBitsLow, 711);
  RUN_TEST(testEqualShorts, 721);
  RUN_TEST(testEqualUShorts, 741);
  RUN_TEST(testEqualChars, 761);
  RUN_TEST(testEqualUChars, 781);
  RUN_TEST(testEqualPointers, 800);
  RUN_TEST(testNotEqualPointers, 817);
  RUN_TEST(testIntsWithinDelta, 824);
  RUN_TEST(testIntsWithinDeltaAndCustomMessage, 836);
  RUN_TEST(testIntsNotWithinDelta, 848);
  RUN_TEST(testIntsNotWithinDeltaAndCustomMessage, 855);
  RUN_TEST(testUIntsWithinDelta, 862);
  RUN_TEST(testUIntsWithinDeltaAndCustomMessage, 869);
  RUN_TEST(testUIntsNotWithinDelta, 876);
  RUN_TEST(testUIntsNotWithinDeltaAndCustomMessage, 883);
  RUN_TEST(testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirst, 890);
  RUN_TEST(testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirstAndCustomMessage, 897);
  RUN_TEST(testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirst, 904);
  RUN_TEST(testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirstAndCustomMessage, 911);
  RUN_TEST(testHEX32sWithinDelta, 918);
  RUN_TEST(testHEX32sWithinDeltaAndCustomMessage, 925);
  RUN_TEST(testHEX32sNotWithinDelta, 932);
  RUN_TEST(testHEX32sNotWithinDeltaAndCustomMessage, 939);
  RUN_TEST(testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPass, 946);
  RUN_TEST(testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage, 953);
  RUN_TEST(testHEX16sWithinDelta, 960);
  RUN_TEST(testHEX16sWithinDeltaAndCustomMessage, 967);
  RUN_TEST(testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits, 974);
  RUN_TEST(testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage, 979);
  RUN_TEST(testHEX16sNotWithinDelta, 984);
  RUN_TEST(testHEX16sNotWithinDeltaAndCustomMessage, 991);
  RUN_TEST(testHEX8sWithinDelta, 998);
  RUN_TEST(testHEX8sWithinDeltaAndCustomMessage, 1005);
  RUN_TEST(testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits, 1012);
  RUN_TEST(testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage, 1017);
  RUN_TEST(testHEX8sNotWithinDelta, 1022);
  RUN_TEST(testHEX8sNotWithinDeltaAndCustomMessage, 1029);
  RUN_TEST(testEqualStrings, 1036);
  RUN_TEST(testEqualStringsWithCarriageReturnsAndLineFeeds, 1047);
  RUN_TEST(testNotEqualString1, 1058);
  RUN_TEST(testNotEqualString2, 1065);
  RUN_TEST(testNotEqualString3, 1072);
  RUN_TEST(testNotEqualString4, 1079);
  RUN_TEST(testNotEqualString5, 1086);
  RUN_TEST(testNotEqualString_ExpectedStringIsNull, 1095);
  RUN_TEST(testNotEqualString_ActualStringIsNull, 1102);
  RUN_TEST(testEqualStringArrays, 1109);
  RUN_TEST(testNotEqualStringArray1, 1120);
  RUN_TEST(testNotEqualStringArray2, 1130);
  RUN_TEST(testNotEqualStringArray3, 1140);
  RUN_TEST(testNotEqualStringArray4, 1150);
  RUN_TEST(testNotEqualStringArray5, 1160);
  RUN_TEST(testNotEqualStringArray6, 1170);
  RUN_TEST(testEqualStringArrayIfBothNulls, 1180);
  RUN_TEST(testEqualMemory, 1188);
  RUN_TEST(testNotEqualMemory1, 1200);
  RUN_TEST(testNotEqualMemory2, 1207);
  RUN_TEST(testNotEqualMemory3, 1214);
  RUN_TEST(testNotEqualMemory4, 1221);
  RUN_TEST(testEqualIntArrays, 1228);
  RUN_TEST(testNotEqualIntArraysNullExpected, 1242);
  RUN_TEST(testNotEqualIntArraysNullActual, 1252);
  RUN_TEST(testNotEqualIntArrays1, 1262);
  RUN_TEST(testNotEqualIntArrays2, 1272);
  RUN_TEST(testNotEqualIntArrays3, 1282);
  RUN_TEST(testEqualPtrArrays, 1292);
  RUN_TEST(testNotEqualPtrArraysNullExpected, 1309);
  RUN_TEST(testNotEqualPtrArraysNullActual, 1321);
  RUN_TEST(testNotEqualPtrArrays1, 1333);
  RUN_TEST(testNotEqualPtrArrays2, 1346);
  RUN_TEST(testNotEqualPtrArrays3, 1359);
  RUN_TEST(testEqualInt8Arrays, 1372);
  RUN_TEST(testNotEqualInt8Arrays, 1386);
  RUN_TEST(testEqualUIntArrays, 1396);
  RUN_TEST(testNotEqualUIntArrays1, 1410);
  RUN_TEST(testNotEqualUIntArrays2, 1420);
  RUN_TEST(testNotEqualUIntArrays3, 1430);
  RUN_TEST(testEqualInt16Arrays, 1440);
  RUN_TEST(testNotEqualInt16Arrays, 1454);
  RUN_TEST(testEqualInt32Arrays, 1464);
  RUN_TEST(testNotEqualInt32Arrays, 1478);
  RUN_TEST(testEqualUINT8Arrays, 1488);
  RUN_TEST(testNotEqualUINT8Arrays1, 1502);
  RUN_TEST(testNotEqualUINT8Arrays2, 1512);
  RUN_TEST(testNotEqualUINT8Arrays3, 1522);
  RUN_TEST(testEqualUINT16Arrays, 1533);
  RUN_TEST(testNotEqualUINT16Arrays1, 1547);
  RUN_TEST(testNotEqualUINT16Arrays2, 1557);
  RUN_TEST(testNotEqualUINT16Arrays3, 1567);
  RUN_TEST(testEqualUINT32Arrays, 1579);
  RUN_TEST(testNotEqualUINT32Arrays1, 1593);
  RUN_TEST(testNotEqualUINT32Arrays2, 1603);
  RUN_TEST(testNotEqualUINT32Arrays3, 1613);
  RUN_TEST(testEqualHEXArrays, 1623);
  RUN_TEST(testNotEqualHEXArrays1, 1637);
  RUN_TEST(testNotEqualHEXArrays2, 1647);
  RUN_TEST(testNotEqualHEXArrays3, 1657);
  RUN_TEST(testEqualHEX32Arrays, 1667);
  RUN_TEST(testNotEqualHEX32Arrays1, 1681);
  RUN_TEST(testNotEqualHEX32Arrays2, 1691);
  RUN_TEST(testNotEqualHEX32Arrays3, 1701);
  RUN_TEST(testEqualHEX16Arrays, 1711);
  RUN_TEST(testNotEqualHEX16Arrays1, 1725);
  RUN_TEST(testNotEqualHEX16Arrays2, 1735);
  RUN_TEST(testNotEqualHEX16Arrays3, 1745);
  RUN_TEST(testEqualHEX8Arrays, 1755);
  RUN_TEST(testNotEqualHEX8Arrays1, 1769);
  RUN_TEST(testNotEqualHEX8Arrays2, 1779);
  RUN_TEST(testNotEqualHEX8Arrays3, 1789);
  RUN_TEST(testEqualMemoryArrays, 1799);
  RUN_TEST(testNotEqualMemoryArraysExpectedNull, 1813);
  RUN_TEST(testNotEqualMemoryArraysActualNull, 1823);
  RUN_TEST(testNotEqualMemoryArrays1, 1833);
  RUN_TEST(testNotEqualMemoryArrays2, 1843);
  RUN_TEST(testNotEqualMemoryArrays3, 1853);
  RUN_TEST(testProtection, 1863);
  RUN_TEST(testIgnoredAndThenFailInTearDown, 1881);
  RUN_TEST(testEqualHex64s, 1889);
  RUN_TEST(testEqualUint64s, 1912);
  RUN_TEST(testEqualInt64s, 1935);
  RUN_TEST(testNotEqualHex64s, 1959);
  RUN_TEST(testNotEqualUint64s, 1975);
  RUN_TEST(testNotEqualInt64s, 1991);
  RUN_TEST(testNotEqualHex64sIfSigned, 2007);
  RUN_TEST(testHEX64sWithinDelta, 2023);
  RUN_TEST(testHEX64sNotWithinDelta, 2034);
  RUN_TEST(testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass, 2045);
  RUN_TEST(testEqualHEX64Arrays, 2056);
  RUN_TEST(testEqualUint64Arrays, 2074);
  RUN_TEST(testEqualInt64Arrays, 2092);
  RUN_TEST(testNotEqualHEX64Arrays1, 2111);
  RUN_TEST(testNotEqualHEX64Arrays2, 2125);
  RUN_TEST(testNotEqualUint64Arrays, 2139);
  RUN_TEST(testNotEqualInt64Arrays, 2153);
  RUN_TEST(testFloatsWithinDelta, 2168);
  RUN_TEST(testFloatsNotWithinDelta, 2180);
  RUN_TEST(testFloatsEqual, 2191);
  RUN_TEST(testFloatsNotEqual, 2203);
  RUN_TEST(testFloatsNotEqualNegative1, 2214);
  RUN_TEST(testFloatsNotEqualNegative2, 2225);
  RUN_TEST(testFloatsNotEqualActualNaN, 2236);
  RUN_TEST(testFloatsNotEqualExpectedNaN, 2247);
  RUN_TEST(testFloatsNotEqualBothNaN, 2258);
  RUN_TEST(testFloatsNotEqualInfNaN, 2269);
  RUN_TEST(testFloatsNotEqualNaNInf, 2280);
  RUN_TEST(testFloatsNotEqualActualInf, 2291);
  RUN_TEST(testFloatsNotEqualExpectedInf, 2302);
  RUN_TEST(testFloatsNotEqualBothInf, 2313);
  RUN_TEST(testFloatsNotEqualPlusMinusInf, 2324);
  RUN_TEST(testFloatIsInf, 2335);
  RUN_TEST(testFloatIsNotInf, 2345);
  RUN_TEST(testFloatIsNotNegInf, 2356);
  RUN_TEST(testFloatIsNan, 2367);
  RUN_TEST(testFloatIsNotNan, 2376);
  RUN_TEST(testFloatInfIsNotNan, 2387);
  RUN_TEST(testFloatNanIsNotInf, 2398);
  RUN_TEST(testEqualFloatArrays, 2409);
  RUN_TEST(testNotEqualFloatArraysExpectedNull, 2427);
  RUN_TEST(testNotEqualFloatArraysActualNull, 2441);
  RUN_TEST(testNotEqualFloatArrays1, 2455);
  RUN_TEST(testNotEqualFloatArrays2, 2469);
  RUN_TEST(testNotEqualFloatArrays3, 2483);
  RUN_TEST(testNotEqualFloatArraysNegative1, 2497);
  RUN_TEST(testNotEqualFloatArraysNegative2, 2511);
  RUN_TEST(testNotEqualFloatArraysNegative3, 2525);
  RUN_TEST(testNotEqualFloatArraysNaN, 2539);
  RUN_TEST(testNotEqualFloatArraysInf, 2553);
  RUN_TEST(testDoublesWithinDelta, 2569);
  RUN_TEST(testDoublesNotWithinDelta, 2581);
  RUN_TEST(testDoublesEqual, 2593);
  RUN_TEST(testDoublesNotEqual, 2605);
  RUN_TEST(testDoublesNotEqualNegative1, 2616);
  RUN_TEST(testDoublesNotEqualNegative2, 2627);
  RUN_TEST(testDoublesNotEqualActualNaN, 2638);
  RUN_TEST(testDoublesNotEqualExpectedNaN, 2649);
  RUN_TEST(testDoublesNotEqualBothNaN, 2660);
  RUN_TEST(testDoublesNotEqualInfNaN, 2671);
  RUN_TEST(testDoublesNotEqualNaNInf, 2682);
  RUN_TEST(testDoublesNotEqualActualInf, 2693);
  RUN_TEST(testDoublesNotEqualExpectedInf, 2704);
  RUN_TEST(testDoublesNotEqualBothInf, 2715);
  RUN_TEST(testDoublesNotEqualPlusMinusInf, 2726);
  RUN_TEST(testDoubleIsInf, 2737);
  RUN_TEST(testDoubleIsNotInf, 2747);
  RUN_TEST(testDoubleIsNotNegInf, 2758);
  RUN_TEST(testDoubleIsNan, 2769);
  RUN_TEST(testDoubleIsNotNan, 2778);
  RUN_TEST(testDoubleInfIsNotNan, 2789);
  RUN_TEST(testDoubleNanIsNotInf, 2800);
  RUN_TEST(testEqualDoubleArrays, 2811);
  RUN_TEST(testNotEqualDoubleArraysExpectedNull, 2829);
  RUN_TEST(testNotEqualDoubleArraysActualNull, 2843);
  RUN_TEST(testNotEqualDoubleArrays1, 2857);
  RUN_TEST(testNotEqualDoubleArrays2, 2871);
  RUN_TEST(testNotEqualDoubleArrays3, 2885);
  RUN_TEST(testNotEqualDoubleArraysNegative1, 2899);
  RUN_TEST(testNotEqualDoubleArraysNegative2, 2913);
  RUN_TEST(testNotEqualDoubleArraysNegative3, 2927);
  RUN_TEST(testNotEqualDoubleArraysNaN, 2941);
  RUN_TEST(testNotEqualDoubleArraysInf, 2955);

  return (UnityEnd());
}
