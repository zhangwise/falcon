#ifndef SOLIDMECHPOROCOUPLEZ
#define SOLIDMECHPOROCOUPLEZ

#include "SolidMechPoroCouple.h"


//Forward Declarations
class SolidMechPoroCoupleZ;

template<>
InputParameters validParams<SolidMechPoroCoupleZ>();

class SolidMechPoroCoupleZ : public SolidMechPoroCouple
{
public:

  SolidMechPoroCoupleZ(std::string name,
                       InputParameters parameters,
                       std::string var_name,
                       std::vector<std::string> coupled_to,
                       std::vector<std::string> coupled_as);
  
protected:
  virtual Real computeQpResidual();
  
  virtual Real computeQpOffDiagJacobian(unsigned int jvar);
  
};
 
#endif //SOLIDMECHPOROCOUPLEZ