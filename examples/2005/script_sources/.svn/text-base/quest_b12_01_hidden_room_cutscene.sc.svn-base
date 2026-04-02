include d12_hidden_room_cutscene_base.sci

maintask TCutscene : THiddenRoomCutscene
{
	void init(void) {
		super.init();
		TriggerActor("quest_b12_01", "hidden_room_cutscene_end");
		@RemoveActor(self());
	}	
}
