include std.sci
include scene_theater_base.sci

const string c_strCutsceneType = "danko";

maintask TTheater : TTheaterBase
{
	void OnLoad(void) {
		super.OnLoad();
		TriggerActor("quest_d12_01", "theater_load");
	}
	
	void OnUnload(void) {
		TriggerActor("quest_d12_01", "theater_unload");
	}
}
