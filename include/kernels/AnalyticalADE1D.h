#ifndef ANALYTICALADE1D_H
#define ANALYTICALADE1D_H

#include "AuxKernel.h"


//Forward Declarations
class AnalyticalADE1D;

template<>
InputParameters validParams<AnalyticalADE1D>();

/** 
 * Coupled auxiliary value
 */
class AnalyticalADE1D : public AuxKernel
{
public:

  /**
   * Factory constructor, takes parameters so that all derived classes can be built using the same
   * constructor.
   */
  AnalyticalADE1D(std::string name,
            InputParameters parameters,
            std::string var_name,
            std::vector<std::string> coupled_to,
            std::vector<std::string> coupled_as);

  virtual ~AnalyticalADE1D() {}
  
protected:
  virtual Real computeValue();
};

#endif //ANALYTICALADE1D_H
