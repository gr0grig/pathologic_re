include std.sci
include fog_stat_base.sci

var bool g_bToBeRemoved;

void OnTrigger(string name)
{
	if (name == "cleanup") {
		g_bToBeRemoved = true;
		bool bLoaded;
		@IsLoaded(bLoaded);
		if (!bLoaded)
			@RemoveActor(self());
	}
	else if (name == "restore") {
		g_bToBeRemoved = false;
	}
}

void OnUnload(void)
{
	if (g_bToBeRemoved)
		@RemoveActor(self());
}

maintask TFogStat : TFogStatBase
{
}

task TPlayerAttack : TPlayerAttackBase
{
}
