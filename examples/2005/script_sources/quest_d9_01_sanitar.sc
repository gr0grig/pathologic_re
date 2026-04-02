include std.sci
include death_base.sci
include sanitar_stat_base.sci

const float c_fAttackRepChange = 0;

bool IsEnemy(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer || IsEnemyStd(actor);
}
