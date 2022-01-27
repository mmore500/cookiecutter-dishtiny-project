#pragma once
#ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_HPP_INCLUDE
#define CUT_DISHTINY_PROJECT_CONFIG_SETUP_HPP_INCLUDE

#include <filesystem>

#include "Empirical/include/emp/config/ArgManager.hpp"
#include "Empirical/include/emp/prefab/ConfigPanel.hpp"
#include "Empirical/include/emp/web/UrlParams.hpp"
#include "Empirical/include/emp/web/web.hpp"

#include "cut-dishtiny-project/ExampleConfig.hpp"

void use_existing_config_file(cut_dishtiny_project::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("cut-dishtiny-project.cfg")) {
    std::cout << "Configuration read from cut-dishtiny-project.cfg" << "\n";
    config.Read("cut-dishtiny-project.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

void setup_config_web(cut_dishtiny_project::Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  use_existing_config_file(config, am);
}

void setup_config_native(cut_dishtiny_project::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  use_existing_config_file(config, am);
}

#endif // #ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_HPP_INCLUDE
