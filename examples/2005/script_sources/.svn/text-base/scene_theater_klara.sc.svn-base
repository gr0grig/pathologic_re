include std.sci
include scene_theater_base.sci

const string c_strCutsceneType = "klara";

maintask TTheater : TTheaterBase
{
	void OnLoad(void) {
		super.OnLoad();
		TriggerActor("quest_k7_01", "theater_load");
		TriggerActor("quest_k12_01", "theater_load");
	}
	
	void OnUnload(void) {
		TriggerActor("quest_k12_01", "theater_unload");
	}
}
