//============================================================================
// Name        : Particle Fire simulation
// Author      : Eshaq Rahmani
// Description : This generates a window from SDL library of particles moving in a pattern.
//============================================================================

#include "Swarm.h"

namespace caveofprogramming {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;
}

} /* namespace caveofprogramming */
