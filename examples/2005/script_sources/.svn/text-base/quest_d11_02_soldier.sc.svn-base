include std.sci
include soldier_stat_base.sci
include actor_disp_base.sci

const float c_fAttackRepChange = 0;
const float c_fDeathRepChange = 0.05;

void OnUnload(void)
{
	TriggerActor("quest_d11_02", "actor_unload");
	@RemoveActor(self());
	@Hold();
}

maintask TSoldier : TDispBase
{
	void OnTrigger(string name) {
		if (name == "attack") {
			TSoldierAttack{GetPlayerActor()};
		}
		else if (name == "execute") {
			TExecute{};
		}
		else {
			super.OnTrigger(name);
		}
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_d11_02", "soldier_attack");
	}
}

task TSoldierAttack : TSoldierBaseAttack
{
}

task TExecute
{
	var bool m_bAttackPlayer;
	
	void init(void) {
		m_bAttackPlayer = false;
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
		if (!m_bAttackPlayer) {
			@LockAnimationEnd("all", "attack_on");
			@Sleep(20);
			if (!m_bAttackPlayer) {
				@PlayAnimation("all", "attack_begin1");
				@WaitForAnimEnd();
				TriggerActor("quest_d11_02", "execute");
				@Speak("shot");
				@PlayAnimation("all", "attack_begin2");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
			}
		}
		
		if (m_bAttackPlayer)
			TSoldierAttack{GetPlayerActor()};
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_d11_02", "soldier_attack");
	}

	void OnTrigger(string name) {
		if (name == "attack") {
			@StopGroup0();
			m_bAttackPlayer = true;
		}
	}
}

void HandleSeeNormal(object actor)
{
	HandleSeeNormalStd(actor);
}


void HandleDeath(object actor)
{
	TriggerActor("quest_d11_02", "soldier_dead");
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, 0.03);
	HandleDeathBase(actor);
}
