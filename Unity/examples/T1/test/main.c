#include "../src/crypt.h"
#include "../../../src/unity.h"
#include "unity_fixture.h"

int32_t* key;
uint32_t* input, output;
uint8_t type, enc_dec;

TEST_GROUP(T1);

TEST_SETUP(T1)
{
}

TEST_TEAR_DOWN(T1)
{
}

TEST(T1, TestT1_1)
{
Key=4;input="ABCDzxcvb";type=0;enc_dec=0;output="ABCD";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}

TEST(T1, TestT1_2)
{
Key=4;input="DEFG09877";type=1;enc_dec=0;output="DEFG";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // This test will fail
}

TEST(T1, TestT1_3)
{
Key=4;input="I@#%398436";type=2;enc_dec=0;output="I@#%";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // This test will fail
}
TEST(T1, TestT1_4)
{
Key=4;input="TESTzito029";type=3;enc_dec=0;output="TEST";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_5)
{
Key=4;input="MUmuzinho69";type=4;enc_dec=0;output="XUXU";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_6)
{
Key=4;input="A123ab123";type=5;enc_dec=0;output="A123";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_7)
{
  Key=4;input="1234";type=6;enc_dec=0;output="1234";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_8)
{
  Key=4;input="*&#%";type=-1;enc_dec=0;output="*&#%";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_9)
{
  Key=4;input="ABCD";type=0;enc_dec=1;output="ABCD";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_10)
{
  Key=4;input="PQRP";type=1;enc_dec=1;output="DEFG";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_11)
{
 Key=4;input="I@#%";type=2;enc_dec=1;output="I@#%"; 
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_12)
{
  Key=4;input="Test";type=3;enc_dec=1;output="TEST";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_13)
{
  Key=4;input="AMumu";type=4;enc_dec=1;output="XUXU";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  
  // All of these should pass
}TEST(T1, TestT1_14)
{
  Key=4;input="A123";type=5;enc_dec=1;output="A123";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_15)
{
  Key=4;input="4321";type=6;enc_dec=1;output="1234";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_16)
{
  Key=4;input="*&#%";type=-1;enc_dec=1;output="*&#%";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_17)
{
  Key=6;input="ABCDdd";type=0;enc_dec=0;output="ABCDDD";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_18)
{
  Key=6;input="DEFG!$";type=1;enc_dec=0;output="DEFG!$";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_19)
{
Key=6;input="I@#%__";type=2;enc_dec=0;output="I@#%__";  
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_20)
{
  Key=6;input="TEST42";type=3;enc_dec=0;output="TEST12";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_21)
{
  Key=6;input="Amunha";type=4;enc_dec=0;output="XUXU";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_22)
{
  Key=6;input="A12390";type=5;enc_dec=0;output="A12390";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_23)
{
  Key=6;input="123450";type=6;enc_dec=0;output="123450";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_24)
{
  Key=6;input="*&#%$(";type=-1;enc_dec=0;output="*&#%$(";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_25)
{
  Key=6;input="ABCDdd";type=0;enc_dec=1;output="ABCDDD";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_26)
{
  Key=6;input="DEFG!$";type=1;enc_dec=1;output="DEFG!$";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_27)
{
  Key=6;input="I@#%__";type=2;enc_dec=1;output="I@#%__";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_28)
{
  Key=6;input="TEST12";type=3;enc_dec=1;output="TEST12";
    TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));

  // All of these should pass
}TEST(T1, TestT1_29)
{
  Key=6;input="Canção de ninar";type=4;enc_dec=1;output="XUXU";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_30)
{
  Key=6;input="A12390";type=5;enc_dec=1;output="A12390";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_31)
{
  Key=6;input="123450";type=6;enc_dec=1;output="123450";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_32)
{
  Key=6;input="*&#%$(";type=-1;enc_dec=1;output="*&#%$(";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_33)
{
  Key=8;input="ABCDDDEF";type=0;enc_dec=0;output="ABCDDDEF";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_34)
{
Key=8;input="DEFG!$%#";type=1;enc_dec=0;output="DEFG!$%#";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_35)
{
Key=8;input="I@#%__!#";type=2;enc_dec=0;output="I@#%__!#";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_36)
{
  Key=8;input="TEST1200";type=3;enc_dec=0;output="TEST1200";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_37)
{
  Key=8;input="XUXU";type=4;enc_dec=0;output="XUXU";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_38)
{
  Key=8;input="A1239000";type=5;enc_dec=0;output="A1239000";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_39)
{
Key=8;input="12345023";type=6;enc_dec=0;output="12345023";

  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_40)
{
Key=8;input="*&#%$()!";type=-1;enc_dec=0;output="*&#%$()!";

  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_41)
{
Key=8;input="ABCDDDEF";type=0;enc_dec=1;output="ABCDDDEF";

  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_42)
{
Key=8;input="DEFG!$%#";type=1;enc_dec=1;output="DEFG!$%#";

  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_43)
{
  Key=8;input="I@#%__!#";type=2;enc_dec=1;output="I@#%__!#";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_44)
{
  Key=8;input="TEST1200";type=3;enc_dec=1;output="TEST1200";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_45)
{
  Key=8;input="XUXU";type=4;enc_dec=1;output="XUXU";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_46)
{
  Key=8;input="A1239000";type=5;enc_dec=1;output="A1239000";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}TEST(T1, TestT1_47)
{
  Key=8;input="12345023";type=6;enc_dec=1;output="12345023";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
TEST(T1, TestT1_48)
{
  Key=8;input="*&#%$()!";type=-1;enc_dec=1;output="*&#%$()!";
  TEST_ASSERT_EQUAL(0, crypt(key, input, type, enc_dec, output));
  // All of these should pass
}
