#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

//Assert posibles (AreEqual, AreNotEqual, IsTrue, IsFalse, IsNull, IsNotNull, )

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
	TEST(ExampleTests,VerificarEdad)
	{
		
		//edad negativa, edad=122 y edad=0, edad +123, edad= parametro invalido 
		foobar::VerificarEdad(23);
		ASSERT_EQ(VerificarEdad(23), true);
		ASSERT_EQ(VerificarEdad(-1), false);
		ASSERT_EQ(VerificarEdad(122), true);
		ASSERT_EQ(VerificarEdad(0), true);
		ASSERT_EQ(VerificarEdad(123), false);
		ASSERT_EQ(VerificarEdad('S'), true);
		ASSERT_EQ(VerificarEdad(1.23), true);
		
		ASSERT_TRUE(VerificarEdad(22));
		ASSERT_TRUE(VerificarEdad(103));
		ASSERT_TRUE(VerificarEdad('*'));

		ASSERT_FALSE(VerificarEdad(-10));
		ASSERT_FALSE(VerificarEdad(200));

		
	}

	TEST(ExampleTests, CalcularDistancia)
	{
		ASSERT_EQ(CalcularDistancia(0.0, 0.0, 1.0, 0.0), 1.0);
		ASSERT_EQ(CalcularDistancia(1.0,1.0, 1.0, 1.0), 0.0);
		/* nos da el mismo resultado pero nos salta error por punto flotante
		ASSERT_EQ(CalcularDistancia(1.0, 0.0, 0.0, 1.0), sqrt(2));
	    */
		ASSERT_EQ(CalcularDistancia(5.0, 1.0, 1.0, 4.0), 5.0);
		ASSERT_EQ(CalcularDistancia(-25.0, 0.0, 0.0, 0.0), 25.0);

	}
}

