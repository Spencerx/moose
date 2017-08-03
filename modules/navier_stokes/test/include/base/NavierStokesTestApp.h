#ifndef NAVIERSTOKESTESTAPP_H
#define NAVIERSTOKESTESTAPP_H

#include "NavierStokesApp.h"

class NavierStokesTestApp;

template <>
InputParameters validParams<NavierStokesTestApp>();

class NavierStokesTestApp : public NavierStokesApp
{
public:
  NavierStokesTestApp(InputParameters parameters);
  virtual ~NavierStokesTestApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* NAVIERSTOKESTESTAPP_H */
