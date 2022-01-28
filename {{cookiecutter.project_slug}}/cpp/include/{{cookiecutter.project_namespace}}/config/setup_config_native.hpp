#pragma once
#ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
#define {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE

#include "Empirical/include/emp/config/ArgManager.hpp"

#include "try_read_config_file.hpp"

namespace {{cookiecutter.project_namespace}} {

void setup_config_native({{ cookiecutter.project_namespace }}::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  {{cookiecutter.project_namespace}}::try_read_config_file(config, am);
}

} // namespace {{cookiecutter.project_namespace}}

#endif // #ifndef {{ cookiecutter.project_namespace.upper() }}_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
