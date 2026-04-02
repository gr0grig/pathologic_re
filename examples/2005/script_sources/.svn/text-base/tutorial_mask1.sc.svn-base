include std.sci
include disp_idle.sci
include NPC_Birdmask.sci
include dgame.sci

maintask TMask : TDispIdle
{
	var bool bTalk;
	void init(void) {
		bTalk = false;
		SwitchLight(true);
		super.init();
	}
	
	void OnUse(object actor) {
		if (!bTalk) {
			CancelActivity();
			TDlg_DN1_Danko_BirdMask{actor};
			bTalk = true;
			OnTrigger("cleanup");
		}
	}

	void OnTrigger(string name) {
		if (name == "cleanup") {
			SwitchLight(false);
		}
		super.OnTrigger(name);
	}

	void SwitchLight(bool bOn) {
		object actor;
		@FindActor(actor, "tutorial_light_1");
		actor->Switch(bOn);
	}
}
