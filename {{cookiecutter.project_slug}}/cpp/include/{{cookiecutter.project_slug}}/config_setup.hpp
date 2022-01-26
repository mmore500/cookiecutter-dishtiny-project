#pragma once
#ifndef {{ cookiecutter.project_slug.replace('-','_').upper() }}_CONFIG_SETUP_HPP_INCLUDE
#define {{ cookiecutter.project_slug.replace('-','_').upper() }}_CONFIG_SETUP_HPP_INCLUDE

#include <filesystem>

#include "Empirical/include/emp/config/ArgManager.hpp"
#include "Empirical/include/emp/prefab/ConfigPanel.hpp"
#include "Empirical/include/emp/web/UrlParams.hpp"
#include "Empirical/include/emp/web/web.hpp"

#include "{{cookiecutter.project_slug}}/ExampleConfig.hpp"

void use_existing_config_file({{ cookiecutter.project_slug.replace('-','_') }}::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("{{cookiecutter.project_slug}}.cfg")) {
    std::cout << "Configuration read from {{cookiecutter.project_slug}}.cfg" << "\n";
    config.Read("{{cookiecutter.project_slug}}.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

void setup_config_web({{ cookiecutter.project_slug.replace('-','_') }}::Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  use_existing_config_file(config, am);
}

void setup_config_native({{ cookiecutter.project_slug.replace('-','_') }}::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  use_existing_config_file(config, am);
}

#endif // #ifndef {{ cookiecutter.project_slug.replace('-','_').upper() }}_CONFIG_SETUP_HPP_INCLUDE
