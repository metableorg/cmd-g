/**************************************************************************************************/

#ifndef CMDG_DE_STEP_RUN_H
#define CMDG_DE_STEP_RUN_H

/**************************************************************************************************/

#include <cmdg/de/step.h>

/**************************************************************************************************/

namespace cmdg {
namespace de {

/**************************************************************************************************/

template< typename T >
inline void step_run(T &sim)
{
  sim.init();

  bool sim_is_terminated = false;
  
  while( !sim_is_terminated )
  {
    sim_is_terminated = step(sim);
  }
}

/**************************************************************************************************/

}}

/**************************************************************************************************/

#endif

/**************************************************************************************************/
