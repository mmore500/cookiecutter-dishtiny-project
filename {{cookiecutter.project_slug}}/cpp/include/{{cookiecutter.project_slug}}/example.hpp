#pragma once
#ifndef {{ cookiecutter.project_slug.replace('-','_').upper() }}_EXAMPLE_HPP_INCLUDE
#define {{ cookiecutter.project_slug.replace('-','_').upper() }}_EXAMPLE_HPP_INCLUDE

#include <iostream>

bool example() {
  std::cout << "example thing!" << "\n";
  return true;
}

#endif // #ifndef {{ cookiecutter.project_slug.replace('-','_').upper() }}_EXAMPLE_HPP_INCLUDE
