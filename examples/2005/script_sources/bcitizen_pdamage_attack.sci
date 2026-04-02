include std.sci
include pdamage_classes.sci

int citFilterPlayerDamage(object actor, bool bEnemy)
{
	return citFilterAttacked(actor);
}

void citHandlePlayerDamage(object actor)
{
	citHandleAttacked(actor);
}

// used for attackers
// protects the innocent
// changes player reputation in case of player visibility or close distance
bool pdamageRobocop(object player, object actor, float fNoticeDist, bool bEnemy) 
{
	if (!RobocopClass(actor, !bEnemy))
		return false;
			
	bool bCanSee;
	@CanSee(bCanSee, player);
	if (bCanSee || GetActorDistanceSqr(player) <= fNoticeDist * fNoticeDist) {
		return true;
	}
	return false;
}

