include std.sci
include scene_horror_base.sci

maintask TScene : THorrorScene
{
	void OnLoad(void) {
		TriggerActor("quest_d4_02", "scene_load");
		super.OnLoad();
	}

	void OnUnload(void) {
		TriggerActor("quest_d4_02", "scene_unload");
	}
}

task TMakeHorror : TMakeHorrorBase
{
	void OnUnload(void) {
		TriggerActor("quest_d4_02", "scene_unload");
		super.OnUnload();
	}
}
