include std.sci
include scene_theater_base.sci

const string c_strCutsceneType = "burah";

maintask TTheater : TTheaterBase
{
	void OnLoad(void) {
		super.OnLoad();
		TriggerActor("quest_b12_01", "theater_load");
	}
	
	void OnUnload(void) {
		TriggerActor("quest_b12_01", "theater_unload");
	}
}
