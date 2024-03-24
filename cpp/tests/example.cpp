#define CATCH_CONFIG_MAIN

#include "Catch/single_include/catch2/catch.hpp"

#include "cut_dishtiny_project/example.hpp"

TEST_CASE("Test example") {
  REQUIRE( cut_dishtiny_project::example() );
}
