include d12_theater_cutscene_base.sci

maintask TCutscene : TTheaterCutsceneBase
{
	void init(void) {
		super.init();
		
		TriggerActor("quest_d12_01", "theater_cutscene_end");
		@RemoveActor(self());
	}	
}
