include std.sci
include actor_disp_base.sci

task TBonFireBase : TDispBase
{
	var object m_Light;
	var object m_Fire;

	void init(void) {
		string strName;
		@GetProperty("light", strName);
		@FindActor(m_Light, strName);
		
		m_Light->Switch(true);

		@SetVisibility(true);

		InitFire();

		super.init();
	}

	void InitFire(void) {
		object scene;
		@GetScene(scene);
		string pt_name;
		@GetProperty("fire_loc", pt_name);
		m_Fire = SpawnActorByType(scene, pt_name, "scripted", "bonfire.xml");
	}

	void OnDispose(void) {
		if (m_Fire)
			@RemoveActor(m_Fire);
		if (m_Light)
			m_Light->Switch(false);
	}
}
