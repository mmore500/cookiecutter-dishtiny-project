#pragma once
#ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
#define CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE

#include "Empirical/include/emp/config/ArgManager.hpp"

#include "try_read_config_file.hpp"

namespace cut_dishtiny_project {

void setup_config_native(cut_dishtiny_project::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  cut_dishtiny_project::try_read_config_file(config, am);
}

} // namespace cut_dishtiny_project

#endif // #ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
