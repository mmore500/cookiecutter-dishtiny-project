#pragma once
#ifndef CUT_DISHTINY_PROJECT_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
#define CUT_DISHTINY_PROJECT_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE

#include <cstdlib>
#include <iostream>
#include <filesystem>

#include "Config.hpp"

namespace cut_dishtiny_project {

void try_read_config_file(cut_dishtiny_project::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("cut_dishtiny_project.cfg")) {
    std::cout << "Configuration read from cut_dishtiny_project.cfg" << '\n';
    config.Read("cut_dishtiny_project.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

} // namespace cut_dishtiny_project

#endif // #ifndef CUT_DISHTINY_PROJECT_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
