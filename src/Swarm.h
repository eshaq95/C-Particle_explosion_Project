//============================================================================
// Name        : Particle Fire simulation
// Author      : Eshaq Rahmani
// Description : This generates a window from SDL library of particles moving in a pattern.
//============================================================================



#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace caveofprogramming {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace caveofprogramming */

#endif /* SWARM_H_ */
