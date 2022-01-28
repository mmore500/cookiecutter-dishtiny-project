#define CATCH_CONFIG_MAIN

#include "Catch/single_include/catch2/catch.hpp"

#include "{{cookiecutter.project_namespace}}/example.hpp"

TEST_CASE("Test example") {
  REQUIRE( {{cookiecutter.project_namespace}}::example() );
}
