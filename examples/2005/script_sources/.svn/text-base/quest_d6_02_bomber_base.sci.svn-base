include std.sci
include bomber_base.sci

// CONSTANTS
const float c_fDamageAmount = 0.8;
// CONSTANTS

void InitGlobals(void)
{
}

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
	if (!HasProperty(actor, "health"))
		return false;
	if (HasProperty(actor, "class")) {
		string strClass;
		actor->GetProperty("class", strClass);
		if (strClass == "rat" || strClass == "rat_big" || strClass == "bomber")
			return false;
	}
	return true;
}

void HandleAttackBase(object actor)
{
}

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}
