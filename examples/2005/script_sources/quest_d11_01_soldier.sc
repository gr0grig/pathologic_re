include std.sci
include soldier_stat_base.sci
include body_look.sci

const float c_fAttackRepChange = 0;
const float c_fDeathRepChange = 0.05;

bool IsToAttack(void) {
	int iVal;
	@GetVariable("d11q01SoldierAttack", iVal);
	return (iVal != 0);
}

maintask TSoldier
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnSee(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			if (IsToAttack()) {
				TriggerActor("quest_d11_01", "soldier_attack");
			}
			else {
				TTrackPlayer{actor};
			}
		}
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_d11_01", "soldier_attack");
	}

	void OnTrigger(string name) {
		if (name == "attack") {
			TSoldierAttack{GetPlayerActor()};
		}
	}
}

task TTrackPlayer : TBodyLook
{
	void init(object actor) {
		if (TPrepareTrack{actor}) {
			super.init(actor);
			@PlayAnimation("all", "attack_off");
		}
	}

	void OnStopSee(object actor) {
		if (actor == m_Target) {
			CancelActivity();
		}
	}
	
	void OnAttacked(object actor) {
		TriggerActor("quest_d11_01", "soldier_attack");
	}

	void OnTrigger(string name) {
		if (name == "attack") {
			TSoldierAttack{GetPlayerActor()};
		}
	}

	void OnRotatedToTarget(void) {
		@LockAnimationEnd("all", "attack_on");
	}
}

task TPrepareTrack
{
	var object m_Target;

	bool init(object actor) {
		m_Target = actor;

		RotateAsyncToActor(m_Target);
		bool bSuccess;
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess)
			return false;
		@LockAnimationEnd("all", "attack_on");
		return true;
	}

	void OnUnload(void) {
		@StopAnimation();
	}
	
	void OnStopSee(object actor) {
		if (actor == m_Target)
			@StopAnimation();
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_d11_01", "soldier_attack");
	}

	void OnTrigger(string name) {
		if (name == "attack") {
			TSoldierAttack{GetPlayerActor()};
		}
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
	//HandleDeathBase(actor);
	TriggerActor("quest_d11_01", "soldier_death");
	TSoldierDeath{actor};
}

task TSoldierDeath : TDeathDirUsableBase
{
	void init(object actor) {
		super.init(actor);
	}
}

