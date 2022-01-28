#pragma once
#ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE
#define {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE

#include "Empirical/include/emp/config/ArgManager.hpp"
#include "Empirical/include/emp/web/UrlParams.hpp"
#include "Empirical/include/emp/web/web.hpp"

#include "Config.hpp"
#include "try_read_config_file.hpp"

namespace {{cookiecutter.project_namespace}} {

void setup_config_web({{ cookiecutter.project_namespace }}::Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  {{ cookiecutter.project_namespace }}::try_read_config_file(config, am);
}

} // namespace {{cookiecutter.project_namespace}}

#endif // #ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_WEB_HPP_INCLUDE
