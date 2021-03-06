#include "Pistol.h"

/**
@brief Default Constructor
*/
CPistol::CPistol()
{
}

/**
@brief Default Destructor
*/
CPistol::~CPistol()
{
}

/**
@brief Initialise this instance to default values
*/
void CPistol::Init(void)
{
	// Call the parent's Init method
	CWeaponInfo::Init();


	type = CWeaponInfo::WeaponType::PISTOL;

	// The number of ammunition in a magazine for this weapon
	iMagRounds = 8;
	// The maximum number of ammunition for this magazine for this weapon
	iMaxMagRounds = 8;
	// The current total number of rounds currently carried by this player
	iTotalRounds = 40;
	// The max total number of rounds currently carried by this player
	iMaxTotalRounds = 40;

	// The time between shots
	dTimeBetweenShots = 0.3333;
	// The elapsed time (between shots)
	dElapsedTime = 0.0;
	// Boolean flag to indicate if weapon can fire now
	bFire = true;
}
