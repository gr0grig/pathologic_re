bool StdFilterMessage(object actor, string strMessage)
{
	if (strMessage == "unholster") {
		return citFilterUnholster(actor);
	}
	else if (strMessage == "player_shot") {
		return citFilterPlayerShot(actor);
	}
	else if (strMessage == "battle") {
		return citFilterBattle(actor);
	}
	return false;
}

void StdProcessMessage(object actor, string strMessage)
{
	if (strMessage == "unholster") {
		citProcessUnholster(actor);
	}
	else if (strMessage == "player_shot") {
		citProcessPlayerShot(actor);
	}
	else if (strMessage == "battle") {
		citProcessBattle(actor);
	}
}

bool StdFilterSee(object actor)
{
	if (citFilterUnholster(actor) && IsPlayerActor(actor)) {
		bool bWeaponHolstered;
		actor->IsWeaponHolstered(bWeaponHolstered);
		if (!bWeaponHolstered) {
			return true;
		}
	}
	return false;
}

void StdHandleSee(object actor)
{
	citProcessUnholster(actor);
}

void StdAttacked(object actor)
{
	if (IsPlayerActor(actor)) {
		@ReportReputationChange(actor, self(), c_fAttackRepChange);
	}
}

bool StdFilterTrigger(string strName) {
	if (strName == "heal") {
		object actor;
		@FindActor(actor, "player");
		return citFilterHealed(actor);
	}
	return false;
}

void StdProcessTrigger(string strName) {
	if (strName == "heal") {
		object actor;
		@FindActor(actor, "player");
		citProcessHealed(actor);
	}
}