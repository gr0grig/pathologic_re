include std.sci

maintask TTheater
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		TriggerActor("quest_k12_01", "hidden_room_load");
	}
	
	void OnUnload(void) {
		TriggerActor("quest_k12_01", "hidden_room_unload");
	}
}
