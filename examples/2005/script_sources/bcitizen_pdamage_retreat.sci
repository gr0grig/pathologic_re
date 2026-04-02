include std.sci
include retreat.sci

int citFilterPlayerDamage(object actor, bool bEnemy)
{
	return (IsAccessible(actor))? 2 : 0;
}

void citHandlePlayerDamage(object actor)
{
	bcitizen_pdamage_retreat_TRetreat{actor};
}

task bcitizen_pdamage_retreat_TRetreat : TRetreatBase
{
}

// used for retreaters
// changes player reputation in case of player visibility or close distance
// retreats in case of player/actor visibility or close distance
bool pdamageVictim(object player, object actor, float fNoticeDist) 
{
	string strClass;
	if (!HasProperty(actor, "class"))
		return false;
		
	actor->GetProperty("class", strClass);
	if (strClass == "rat" )
		return false;
	else
	if (strClass == "rat_big" )
		return false;
	else
	if (strClass == "dog" ) // retreats
		return false;	

	bool bCanSee;
	@CanSee(bCanSee, player);
	if (bCanSee || GetActorDistanceSqr(player) <= fNoticeDist * fNoticeDist) { // see player
		return true;
	}

	@CanSee(bCanSee, actor);
	if (bCanSee || GetActorDistanceSqr(actor) <= fNoticeDist * fNoticeDist) { // see victim
		return true;
	}
		
	return false;
}