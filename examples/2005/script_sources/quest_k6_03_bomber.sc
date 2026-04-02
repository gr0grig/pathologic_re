include std.sci
include bomber_base.sci

// CONSTANTS
const float c_fDamageAmount = 0.8;
// CONSTANTS

void RemoveSelf(void) {
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
}

void InitGlobals(void)
{
}

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
		
	return IsPlayerActor(actor);
}

void HandleAttackBase(object actor)
{
}

void HandleDeathBase(object actor)
{
	RemoveSelf();
}


