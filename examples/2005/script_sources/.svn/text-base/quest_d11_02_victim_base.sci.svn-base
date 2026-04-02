include std.sci
include actor_disp_base.sci

void OnUnload(void)
{
	TriggerActor("quest_d11_02", "actor_unload");
}

task TVictimBase : TDispBase
{
	var bool m_bDead;

	void init(void) {
		m_bDead = false;
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		if (name == "execute") {
			m_bDead = true;
			bool bSuccess;
			@PlayAnimation("all", "bdie");
			@WaitForAnimEnd(bSuccess);
			if (bSuccess)
				@LockAnimationEnd("all", "bdie");
		}
		else {
			super.OnTrigger(name);
		}
	}

	void OnLoad(void) {
		if (m_bDead)
			@LockAnimationEnd("all", "bdie");
	}
	
	void OnUse(object actor) {
		int iState;
		@GetVariable("d11q02", iState);
		if (iState == 2)
			DoDialog(actor);
	}
	
	// void DoDialog(object actor) = 0
}
