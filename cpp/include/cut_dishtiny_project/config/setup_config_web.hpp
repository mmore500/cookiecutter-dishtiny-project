#pragma once
#ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE
#define CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE

#include "Empirical/include/emp/config/ArgManager.hpp"
#include "Empirical/include/emp/web/UrlParams.hpp"
#include "Empirical/include/emp/web/web.hpp"

#include "Config.hpp"
#include "try_read_config_file.hpp"

namespace cut_dishtiny_project {

void setup_config_web(cut_dishtiny_project::Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  cut_dishtiny_project::try_read_config_file(config, am);
}

} // namespace cut_dishtiny_project

#endif // #ifndef CUT_DISHTINY_PROJECT_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE
