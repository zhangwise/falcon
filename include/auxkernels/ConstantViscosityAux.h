#ifndef CONSTANTVISCOSITYAUX
#define CONSTANTVISCOSITYAUX

#include "AuxKernel.h"


//Forward Declarations
class ConstantViscosityAux;

template<>
InputParameters validParams<ConstantViscosityAux>();

/** 
 * Coupled auxiliary value
 */
class ConstantViscosityAux : public AuxKernel
{
public:

  /**
   * Factory constructor, takes parameters so that all derived classes can be built using the same
   * constructor.
   */
  ConstantViscosityAux(const std::string & name, InputParameters parameters);

  virtual ~ConstantViscosityAux() {}
  
protected:
  virtual Real computeValue();
  Real _input_viscosity_water;

};

#endif //CONSTANTVISCOSITYAUX