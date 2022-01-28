#pragma once
#ifndef {{ cookiecutter.project_namespace.upper() }}_EXAMPLE_HPP_INCLUDE
#define {{ cookiecutter.project_namespace.upper() }}_EXAMPLE_HPP_INCLUDE

#include <iostream>

namespace {{cookiecutter.project_namespace}} {

bool example() {
  std::cout << "example thing!" << '\n';
  return true;
}

} // namespace {{cookiecutter.project_namespace}}

#endif // #ifndef {{ cookiecutter.project_namespace.upper() }}_EXAMPLE_HPP_INCLUDE
