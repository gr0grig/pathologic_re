include scene_cot_base.sci

maintask TCotViktor : TCotBase
{
	void init(void) {
		super.init();
	}
	
	void OnServantsInit(object servants) {
		/*object servant;
		servant = SpawnScriptedActor(self(), "pt_servant_woman1", "pers_woman", "servant.bin");
		servants->add(servant);*/
	}
}
