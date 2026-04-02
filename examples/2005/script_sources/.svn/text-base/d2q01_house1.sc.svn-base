include std.sci
include cutscene_stoppable.sci
include dgame.sci

maintask TD2Quest01House
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string strName) { // can be more than 1 param, as in @Trigger();
		@Trace("@Trigger : " + strName);
		
		if (strName == c_iD2_Quest01_Trigger) {
			TCutSceneStoppable{"scenes/" + c_iD2_Quest01_Trigger + ".mot"};
		}
	}
	
	void OnLoad(void) {
		TriggerActor("quest_b1_05", "house_load");	
	}
	
	void OnUnload(void) {
	}
}
