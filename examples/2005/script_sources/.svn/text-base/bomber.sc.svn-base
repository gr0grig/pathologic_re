include std.sci
include bomber_base.sci

// CONSTANTS
const float c_fPlayerDiseaseLevel = 0;
const float c_fNPCDiseaseLevel = 0.01;
const float c_fDamageAmount = 0.8;
// CONSTANTS

var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();
}

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet)
		return true;
	if (!HasProperty(actor, "disease"))
		return false;
	float fDisease;
	actor->GetProperty("disease", fDisease);
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if (bPlayer) {
		return fDisease > c_fPlayerDiseaseLevel;
	}
	else if (fDisease > c_fNPCDiseaseLevel) {
		if (HasProperty(actor, "class")) {
			string strClass;
			actor->GetProperty("class", strClass);
			return IsCommonClass(strClass);
		}
	}
	return false;
}

void HandleAttackBase(object actor)
{
	if (actor == null)
		return;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (!bInEnemySet) {
		g_Enemies->add(actor);
	}
}

void HandleDeathBase(object actor)
{
}
