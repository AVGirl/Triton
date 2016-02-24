//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the LGPLv3 License.
*/

#include <stdexcept>
#include <symbolicOptimization.hpp>

#ifdef TRITON_PYTHON_BINDINGS
  #include <pythonObjects.hpp>
  #include <pythonXFunctions.hpp>
#endif



namespace triton {
  namespace engines {
    namespace symbolic {


      SymbolicOptimization::SymbolicOptimization() {
      }


      SymbolicOptimization::~SymbolicOptimization() {
      }


      bool SymbolicOptimization::isOptimizationEnabled(enum optimization_e opti) {
        if (this->enabledOptimizations.find(opti) != this->enabledOptimizations.end())
          return true;
        return false;
      }


      void SymbolicOptimization::enableOptimization(enum optimization_e opti, bool flag) {
        if (flag == true)
          this->enabledOptimizations.insert(opti);
        else
          this->enabledOptimizations.erase(opti);
      }

    }; /* symbolic namespace */
  }; /* engines namespace */
}; /*triton namespace */

