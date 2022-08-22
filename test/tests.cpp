// Test definitions. Do NOT edit this file!

#include <tuple>
#include <string>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "../ejercicio1.hpp"
#include "../ejercicio3.hpp"
#include "../ejercicio7.hpp"
#include "../ejercicio8.hpp"


// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[Ejercicio-1 OperaNumeros]")
{
    REQUIRE(suma(11,43)==54);
    REQUIRE(resta(34,21)==13);
    REQUIRE(multiplica(15, 16)==240);
}

// =====================
// tests for exercise 3
// ---------------------

TEST_CASE("Ex3", "[Ejercicio-3 Suma pares entre 0 y 100]")
{
    REQUIRE(sumaPares()==2550);
}

// =====================
// tests for exercise 7
// ---------------------

TEST_CASE("Ex7", "[Ejercicio-7 Serie armonica]")
{
    REQUIRE(serieArmonica(1, 3, 25) == 925);
    REQUIRE(serieArmonica(2, 5, 10) == 245);
}

// =====================
// tests for exercise 8
// ---------------------

TEST_CASE("Ex8", "[Ejercicio-8 Medias geometrica y armonica]")
{
    REQUIRE(std::to_string(mediaGeometrica(3))=="1.817121");
    REQUIRE(std::to_string(mediaArmonica(3))=="1.636364");
}