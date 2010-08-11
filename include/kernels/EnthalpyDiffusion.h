#ifndef ENTHALPYDIFFUSION
#define ENTHALPYDIFFUSION

#include "Diffusion.h"
#include "Material.h"

class EnthalpyDiffusion;

template<>
InputParameters validParams<EnthalpyDiffusion>();

class EnthalpyDiffusion : public Diffusion
{
public:

  EnthalpyDiffusion(std::string name, MooseSystem & moose_system, InputParameters parameters);
    
protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();

  MaterialProperty<Real> &_thermal_conductivity;
  MaterialProperty<Real> &_dTbydP_H;
  MaterialProperty<Real> &_dTbydH_P;
  VariableGradient & _grad_p;
  VariableValue & _pressure;

//  VariableGradient & _grad_T;
  
};
#endif //ENTHALPYDIFFUSION