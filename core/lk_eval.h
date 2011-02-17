#ifndef __lk_eval_h
#define __lk_eval_h


#include <string>
#include "lk_absyn.h"
#include "lk_env.h"

namespace lk {

	enum { CTL_NONE, CTL_BREAK, CTL_CONTINUE, CTL_RETURN, CTL_EXIT };

	bool eval( node_t *root, 
		env_t *env, 
		std::vector< std::string > &errors, 
		vardata_t &result,
		bool env_mutable,
		int &ctl_id);
};

#endif
