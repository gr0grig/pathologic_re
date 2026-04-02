include std.sci
include citymanager_base.sci

maintask TBonFireDisease
{
	var object m_Light;
	var object m_Fire;

	void init(void) {
		@SetVisibility(true);
		
		for (;;) {
			@Hold();
		}
	}

	void OnLoad(void) {
		Vector vPos;
		@GetPosition(vPos);
		object scene;
		@GetScene(scene);
		int iRegion;
		scene->GetRegionByPt(iRegion, vPos);
		if (iRegion == -1) {
			@Trace("Invalid bonfire region");
			return;
		}
		int iState;
		@GetVariable(GetRegionStateName(iRegion), iState);
		iState &= 3;
		if (iState == c_iRegionDiseased || iState == c_iRegionClosed) {
			string strActorName;
			@GetActorName(strActorName);
			@AddActor(m_Light, strActorName + "_light", scene, [0, 0, 0], [0, 0, 1], "light_fire.xml");
			@AddActorByType(m_Fire, "scripted", scene, vPos, [0, 0, 1], "fire.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Light)
			@RemoveActor(m_Light);
		if (m_Fire)
			@RemoveActor(m_Fire);
	}
}
