#include <iostream>

#include "Empirical/include/emp/base/vector.hpp"

#include "cut_dishtiny_project/config/Config.hpp"
#include "cut_dishtiny_project/config/setup_config_native.hpp"
#include "cut_dishtiny_project/example.hpp"

// This is the main function for the NATIVE version of Cut DISHTINY Project.

cut_dishtiny_project::Config cfg;

int main(int argc, char* argv[]) {
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return cut_dishtiny_project::example();
}
