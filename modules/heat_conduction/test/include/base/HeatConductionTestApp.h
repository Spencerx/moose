#ifndef HEATCONDUCTIONTESTAPP_H
#define HEATCONDUCTIONTESTAPP_H

#include "HeatConductionApp.h"

class HeatConductionTestApp;

template <>
InputParameters validParams<HeatConductionTestApp>();

class HeatConductionTestApp : public HeatConductionApp
{
public:
  HeatConductionTestApp(InputParameters parameters);
  virtual ~HeatConductionTestApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* HEATCONDUCTIONTESTAPP_H */
