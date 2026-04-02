include std.sci
include soldier_stat_base.sci

const float c_fAttackRepChange = 0;
const float c_fDeathRepChange = 0.05;

maintask TSoldier
{
	void init(void) {
		disable OnSee;
		disable OnHear;
		@Sleep(1);
		enable OnSee;
		enable OnHear;
		
		for (;;) {
			@Hold();
		}
	}

	void OnSee(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TSoldierAttack{actor};
		}
	}

	void OnHear(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TSoldierAttack{actor};
		}
	}
	
	void OnAttacked(object actor) {
		TSoldierAttack{actor};
	}
}


task TSoldierAttack : TSoldierBaseAttack
{
}

void HandleSeeNormal(object actor)
{
	HandleSeeNormalStd(actor);
}

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	TGuardDeath{actor};
}

task TGuardDeath : TDeathDirUsableBase
{
	void init(object actor) {
		super.init(actor);
	}
}

