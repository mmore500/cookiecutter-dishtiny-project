//  This file is part of Cut DISHTINY Project
//  Copyright (C) Matthew Andres Moreno, 2022.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "Empirical/include/emp/base/vector.hpp"

#include "cut-dishtiny-project/config_setup.hpp"
#include "cut-dishtiny-project/ExampleConfig.hpp"
#include "cut-dishtiny-project/example.hpp"

// This is the main function for the NATIVE version of Cut DISHTINY Project.

cut_dishtiny_project::Config cfg;

int main(int argc, char* argv[]) {
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return example();
}
