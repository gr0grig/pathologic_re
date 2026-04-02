include std.sci
include scene_actor_generator.sci

task TSceneBase : TGenerator
{
	void init(void) {
		super.init();
		for (;;) {
			@Hold();
		}
	}

	void OnLoad(void) {
		GenerateActors("pt_rat");
		@sync();
	}

	void OnUnload(void) {
		RemoveActors();
		@sync();
	}

	string GetActorName(int index) { return "pers_rat"; }
	string GetXmlName(int index) { return "rat_indoor.xml"; }

}
