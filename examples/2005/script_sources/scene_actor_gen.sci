include std.sci

task TSceneActorGen
{
	var object m_Locators;
	var object m_Actors;

	void init(void) {
		if (!m_Actors)
			m_Actors = CreateObjectVector();
		if (!m_Locators)
			@CreateIntVector(m_Locators);

		GenerateActors(m_Locators);

		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (!m_Actors)
			m_Actors = CreateObjectVector();
		if (!m_Locators)
			@CreateIntVector(m_Locators);

		RemoveActorsFromVector(m_Actors);

		int iCount;
		m_Locators->size(iCount);
		for (int i = 0; i < iCount; i += 3) {
			int iType;
			m_Locators->get(iType, i);
			int iIndex;
			m_Locators->get(iIndex, i + 1);
			int iSubType;
			m_Locators->get(iSubType, i + 2);
			string loc = GetLocatorName(iType, iIndex);
			string actor_name = GetActorName(iType, iSubType);
			string xml_name = GetXmlName(iType, iSubType);
			m_Actors->add(SpawnActor(self(), loc, actor_name, xml_name));
		}
	}

	void OnUnload(void) {
		int iCount;
		m_Actors->size(iCount);
		for (int i = 0; i < iCount; ) {
			object actor;
			m_Actors->get(actor, i);
			if (actor != null) {
				bool bDead;
				actor->IsDead(bDead);
				if (!bDead) {
					if (!HasProperty(actor, "ToDie")) {
						++i;
						continue;
					}
				}
				@RemoveActor(actor);
			}
			m_Actors->remove(i);
			m_Locators->remove(i * 3, (i + 1) * 3);
			--iCount;
		}
		RemoveActorsFromVector(m_Actors);
	}
	
	// void GenerateActors(object locators) = 0
	// string GetLocatorName(int iType, int iIndex) = 0
	// string GetActorName(int iType, int iSubType) = 0
	// string GetXmlName(int iType, int iSubType) = 0
}
